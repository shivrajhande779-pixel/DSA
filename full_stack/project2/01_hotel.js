// ================================
// StayEase Hotel Booking Website JS
// ================================

document.addEventListener("DOMContentLoaded", () => {

    // ==========================
    // Elements
    // ==========================

    const locationInput = document.querySelector(".location input");
    const checkIn = document.querySelectorAll("input[type='date']")[0];
    const checkOut = document.querySelectorAll("input[type='date']")[1];
    const guestSelect = document.querySelector("select");
    const searchBtn = document.querySelector(".search-box button");

    const cards = document.querySelectorAll(".card");
    const hotelCards = document.querySelectorAll(".hotel-card");
    const offerContainer = document.querySelector(".offer-container");
    const nextBtn = document.querySelector(".next-btn");



    // ====================================
    // Today's Date
    // ====================================

    let today = new Date().toISOString().split("T")[0];

    checkIn.min = today;
    checkOut.min = today;



    // ====================================
    // Check-in Change
    // ====================================

    checkIn.addEventListener("change", () => {

        checkOut.min = checkIn.value;

    });



    // ====================================
    // Search Button
    // ====================================

    searchBtn.addEventListener("click", () => {

        let city = locationInput.value.trim();

        if(city==="")
        {
            alert("Please enter a destination.");
            return;
        }

        if(checkIn.value==="")
        {
            alert("Select Check-In Date");
            return;
        }

        if(checkOut.value==="")
        {
            alert("Select Check-Out Date");
            return;
        }

        if(checkOut.value < checkIn.value)
        {
            alert("Check-Out cannot be before Check-In");
            return;
        }


        searchBtn.innerHTML="Searching...";
        searchBtn.disabled=true;


        setTimeout(()=>{

            searchBtn.innerHTML="SEARCH";
            searchBtn.disabled=false;

            alert(
`Booking Search

Destination : ${city}

Check-In : ${checkIn.value}

Check-Out : ${checkOut.value}

Guests : ${guestSelect.value}

Hotels Found : 27`
            );

        },2000);

    });




    // ====================================
    // Popular Destination Click
    // ====================================

    cards.forEach(card=>{

        card.style.cursor="pointer";

        card.addEventListener("click",()=>{

            let city=card.querySelector("h3").innerText;

            locationInput.value=city;

            window.scrollTo({

                top:0,

                behavior:"smooth"

            });

        });

    });



    // ====================================
    // Offer Slider
    // ====================================

    if(nextBtn)
    {

        nextBtn.addEventListener("click",()=>{

            offerContainer.scrollBy({

                left:480,

                behavior:"smooth"

            });

        });

    }




    // ====================================
    // Hotel Hover Effect
    // ====================================

    hotelCards.forEach(card=>{

        card.addEventListener("mouseenter",()=>{

            card.style.transform="translateY(-12px) scale(1.03)";

        });

        card.addEventListener("mouseleave",()=>{

            card.style.transform="translateY(0px) scale(1)";

        });

    });





    // ====================================
    // Add Favourite Heart
    // ====================================

    hotelCards.forEach((card,index)=>{

        let heart=document.createElement("div");

        heart.innerHTML="🤍";

        heart.style.position="absolute";
        heart.style.top="15px";
        heart.style.right="15px";
        heart.style.width="45px";
        heart.style.height="45px";
        heart.style.background="white";
        heart.style.borderRadius="50%";
        heart.style.display="flex";
        heart.style.alignItems="center";
        heart.style.justifyContent="center";
        heart.style.cursor="pointer";
        heart.style.fontSize="22px";
        heart.style.boxShadow="0 5px 10px rgba(0,0,0,.2)";

        card.style.position="relative";

        card.appendChild(heart);

        heart.addEventListener("click",(e)=>{

            e.stopPropagation();

            if(heart.innerHTML==="🤍")
            {
                heart.innerHTML="❤️";
            }
            else
            {
                heart.innerHTML="🤍";
            }

        });

    });




    // ====================================
    // Book Hotel
    // ====================================

    hotelCards.forEach(card=>{

        card.style.cursor="pointer";

        card.addEventListener("click",()=>{

            let hotelName=card.querySelector("h3").innerText;

            let city=card.querySelector(".hotel-info span:last-child").innerText;

            let price=card.querySelector(".price").innerText;

            let booking={

                hotel:hotelName,

                city:city,

                price:price,

                date:new Date().toLocaleString()

            };

            localStorage.setItem("lastBooking",JSON.stringify(booking));

            alert(

`Booking Successful

Hotel : ${hotelName}

City : ${city}

Price : ${price}

Booking Saved.`

            );

        });

    });




    // ====================================
    // Active Navbar
    // ====================================

    let nav=document.querySelectorAll("#q1 a");

    nav.forEach(link=>{

        link.addEventListener("click",()=>{

            nav.forEach(a=>a.style.color="black");

            link.style.color="#ff6b35";

        });

    });




    // ====================================
    // Reveal Animation
    // ====================================

    let observer=new IntersectionObserver(entries=>{

        entries.forEach(entry=>{

            if(entry.isIntersecting)
            {

                entry.target.style.opacity="1";

                entry.target.style.transform="translateY(0px)";

            }

        });

    },{

        threshold:.2

    });


    document.querySelectorAll(".card,.hotel-card,.offer-card").forEach(item=>{

        item.style.opacity="0";

        item.style.transform="translateY(80px)";

        item.style.transition="1s";

        observer.observe(item);

    });




    // ====================================
    // Scroll To Top Button
    // ====================================

    let topBtn=document.createElement("button");

    topBtn.innerHTML="↑";

    topBtn.style.position="fixed";
    topBtn.style.right="30px";
    topBtn.style.bottom="30px";
    topBtn.style.width="55px";
    topBtn.style.height="55px";
    topBtn.style.borderRadius="50%";
    topBtn.style.border="none";
    topBtn.style.background="#ff6b35";
    topBtn.style.color="white";
    topBtn.style.fontSize="28px";
    topBtn.style.cursor="pointer";
    topBtn.style.display="none";
    topBtn.style.zIndex="999";

    document.body.appendChild(topBtn);

    window.addEventListener("scroll",()=>{

        if(window.scrollY>400)
        {
            topBtn.style.display="block";
        }
        else
        {
            topBtn.style.display="none";
        }

    });


    topBtn.addEventListener("click",()=>{

        window.scrollTo({

            top:0,

            behavior:"smooth"

        });

    });



    // ====================================
    // Welcome Message
    // ====================================

    setTimeout(()=>{

        console.log("Welcome to StayEase Hotel Booking Website");

    },1000);

});