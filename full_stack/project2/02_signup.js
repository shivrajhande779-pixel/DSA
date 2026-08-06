document.addEventListener("DOMContentLoaded", function () {

    const form = document.querySelector("form");

    const fullName = document.querySelectorAll("input")[0];
    const email = document.querySelectorAll("input")[1];
    const password = document.querySelectorAll("input")[2];
    const confirmPassword = document.querySelectorAll("input")[3];

    const eyeIcon = document.querySelector(".eye");

    // Show / Hide Password
    eyeIcon.addEventListener("click", function () {

        if (password.type === "password") {
            password.type = "text";
            eyeIcon.classList.remove("fa-eye");
            eyeIcon.classList.add("fa-eye-slash");
        } else {
            password.type = "password";
            eyeIcon.classList.remove("fa-eye-slash");
            eyeIcon.classList.add("fa-eye");
        }

    });

    // Signup
    form.addEventListener("submit", function (e) {

        e.preventDefault();

        let name = fullName.value.trim();
        let mail = email.value.trim().toLowerCase();
        let pass = password.value;
        let confirm = confirmPassword.value;

        // Validation
        if (name === "") {
            alert("Please enter your full name.");
            fullName.focus();
            return;
        }

        const emailPattern = /^[^ ]+@[^ ]+\.[a-z]{2,3}$/;

        if (!emailPattern.test(mail)) {
            alert("Please enter a valid email.");
            email.focus();
            return;
        }

        if (pass.length < 6) {
            alert("Password must be at least 6 characters.");
            password.focus();
            return;
        }

        if (pass !== confirm) {
            alert("Passwords do not match.");
            confirmPassword.focus();
            return;
        }

        // Get existing users
        let users = JSON.parse(localStorage.getItem("users")) || [];

        // Check duplicate email
        let exists = users.find(user => user.email === mail);

        if (exists) {
            alert("Email already registered.");
            return;
        }

        // Save new user
        users.push({
            name: name,
            email: mail,
            password: pass
        });

        localStorage.setItem("users", JSON.stringify(users));

        alert("Account Created Successfully!");

        form.reset();

        // Redirect to login page
        window.location.href = "01_login_page.html";

    });

});