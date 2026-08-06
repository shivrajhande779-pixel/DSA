document.addEventListener("DOMContentLoaded", () => {

    const form = document.querySelector("form");

    const hotelName = document.querySelectorAll(".input-box input")[0];
    const ownerName = document.querySelectorAll(".input-box input")[1];
    const email = document.querySelectorAll(".input-box input")[2];
    const mobile = document.querySelectorAll(".input-box input")[3];
    const address = document.querySelectorAll("textarea")[0];
    const city = document.querySelectorAll(".input-box input")[4];
    const hotelType = document.querySelectorAll("select")[0];
    const roomType = document.querySelectorAll("select")[1];
    const totalRooms = document.querySelectorAll(".input-box input")[5];
    const price = document.querySelectorAll(".input-box input")[6];
    const image = document.querySelector(".file");
    const description = document.querySelectorAll("textarea")[1];

    form.addEventListener("submit", function (e) {

        e.preventDefault();

        // Validation
        if (hotelName.value.trim() === "") {
            alert("Please enter Hotel Name.");
            hotelName.focus();
            return;
        }

        if (ownerName.value.trim() === "") {
            alert("Please enter Owner Name.");
            ownerName.focus();
            return;
        }

        const emailPattern = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;

        if (!emailPattern.test(email.value.trim())) {
            alert("Please enter a valid Email.");
            email.focus();
            return;
        }

        const mobilePattern = /^[6-9]\d{9}$/;

        if (!mobilePattern.test(mobile.value.replace(/\D/g, ""))) {
            alert("Enter a valid 10 digit Mobile Number.");
            mobile.focus();
            return;
        }

        if (address.value.trim() === "") {
            alert("Please enter Hotel Address.");
            address.focus();
            return;
        }

        if (city.value.trim() === "") {
            alert("Please enter City.");
            city.focus();
            return;
        }

        if (hotelType.selectedIndex === 0) {
            alert("Please select Hotel Type.");
            hotelType.focus();
            return;
        }

        if (roomType.selectedIndex === 0) {
            alert("Please select Room Type.");
            roomType.focus();
            return;
        }

        if (totalRooms.value === "" || Number(totalRooms.value) <= 0) {
            alert("Enter valid Total Rooms.");
            totalRooms.focus();
            return;
        }

        if (price.value === "" || Number(price.value) <= 0) {
            alert("Enter valid Price.");
            price.focus();
            return;
        }

        if (image.files.length === 0) {
            alert("Please upload a Hotel Image.");
            return;
        }

        if (description.value.trim().length < 20) {
            alert("Description should contain at least 20 characters.");
            description.focus();
            return;
        }

        // Amenities
        const amenities = [];

        document.querySelectorAll(".amenities input[type='checkbox']").forEach(box => {
            if (box.checked) {
                amenities.push(box.parentElement.textContent.trim());
            }
        });

        // Hotel Object
        const hotel = {
            hotelName: hotelName.value.trim(),
            ownerName: ownerName.value.trim(),
            email: email.value.trim(),
            mobile: mobile.value.trim(),
            address: address.value.trim(),
            city: city.value.trim(),
            hotelType: hotelType.value,
            roomType: roomType.value,
            totalRooms: totalRooms.value,
            price: price.value,
            amenities: amenities,
            image: image.files[0].name,
            description: description.value.trim()
        };

        // Save in Local Storage
        let hotels = JSON.parse(localStorage.getItem("hotels")) || [];

        hotels.push(hotel);

        localStorage.setItem("hotels", JSON.stringify(hotels));

        alert("Hotel Listed Successfully!");

        form.reset();

    });

});