// Get elements
const city = document.getElementById("city");
const guest = document.getElementById("guest");
const room = document.getElementById("room");
const date = document.getElementById("ib");

// Both Search buttons
const buttons = document.querySelectorAll(".btn");

// Function
function searchHotel() {

    const cityName = city.value.trim();
    const guestValue = guest.value;
    const roomValue = room.value;
    const bookingDate = date.value;

    if (cityName === "") {
        alert("Please enter a city.");
        city.focus();
        return;
    }

    if (guest.selectedIndex === 0) {
        alert("Please select guests.");
        guest.focus();
        return;
    }

    if (room.selectedIndex === 0) {
        alert("Please select rooms.");
        room.focus();
        return;
    }

    if (bookingDate === "") {
        alert("Please select a booking date.");
        date.focus();
        return;
    }

    alert(
        "Hotel Search Successful!\n\n" +
        "City : " + cityName +
        "\nGuests : " + guestValue +
        "\nRooms : " + roomValue +
        "\nDate : " + bookingDate
    );

    console.log("City :", cityName);
    console.log("Guests :", guestValue);
    console.log("Rooms :", roomValue);
    console.log("Date :", bookingDate);
}

// Add click event to both Search buttons
buttons.forEach(button => {
    button.addEventListener("click", searchHotel);
});

// Press Enter to search
city.addEventListener("keypress", function (event) {
    if (event.key === "Enter") {
        searchHotel();
    }
});