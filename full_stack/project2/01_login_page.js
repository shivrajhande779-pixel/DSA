// =============================
// StayEase Login Page JS
// =============================

document.addEventListener("DOMContentLoaded", function () {

    const form = document.querySelector("form");
    const email = document.querySelector("input[type='email']");
    const password = document.querySelector("input[type='password']");
    const eye = document.querySelector(".eye");
    const loginBtn = document.querySelector("button");



    // ==========================
    // Show / Hide Password
    // ==========================

    eye.addEventListener("click", function () {

        if (password.type === "password") {

            password.type = "text";
            eye.classList.remove("fa-eye");
            eye.classList.add("fa-eye-slash");

        } else {

            password.type = "password";
            eye.classList.remove("fa-eye-slash");
            eye.classList.add("fa-eye");

        }

    });



    // ==========================
    // Load Last Email
    // ==========================

    let savedEmail = localStorage.getItem("lastEmail");

    if (savedEmail) {

        email.value = savedEmail;

    }



    // ==========================
    // Email Validation
    // ==========================

    function validEmail(mail) {

        let pattern = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;

        return pattern.test(mail);

    }



    // ==========================
    // Login
    // ==========================

    form.addEventListener("submit", function (e) {

        e.preventDefault();

        let userEmail = email.value.trim();
        let userPassword = password.value.trim();



        if (userEmail === "") {

            alert("Please enter Email.");
            email.focus();
            return;

        }



        if (!validEmail(userEmail)) {

            alert("Invalid Email Address.");
            email.focus();
            return;

        }



        if (userPassword === "") {

            alert("Please enter Password.");
            password.focus();
            return;

        }



        loginBtn.innerHTML = "Logging in...";
        loginBtn.disabled = true;



        setTimeout(function () {

            // Demo Accounts

            const users = [

                {
                    email: "admin@nexlearn.com",
                    password: "admin123",
                    role: "Admin"
                },

                {
                    email: "teacher@nexlearn.com",
                    password: "teacher123",
                    role: "Teacher"
                },

                {
                    email: "student@nexlearn.com",
                    password: "student123",
                    role: "Student"
                }

            ];



            let found = users.find(function (u) {

                return u.email === userEmail &&
                       u.password === userPassword;

            });



            if (found) {

                localStorage.setItem("loggedIn", "true");
                localStorage.setItem("role", found.role);
                localStorage.setItem("lastEmail", userEmail);

                alert("Welcome " + found.role + "!");

                window.location.href = "index.html";

            }

            else {

                alert("Invalid Email or Password");

                loginBtn.innerHTML = "Login";
                loginBtn.disabled = false;

            }

        }, 1500);

    });




    // ==========================
    // Enter Key Login
    // ==========================

    password.addEventListener("keypress", function (e) {

        if (e.key === "Enter") {

            form.requestSubmit();

        }

    });




    // ==========================
    // Input Focus Effect
    // ==========================

    document.querySelectorAll("input").forEach(function (input) {

        input.addEventListener("focus", function () {

            this.style.border = "2px solid #d36f0b";

        });

        input.addEventListener("blur", function () {

            this.style.border = "none";

        });

    });



    console.log("StayEase Login Page Loaded");

});