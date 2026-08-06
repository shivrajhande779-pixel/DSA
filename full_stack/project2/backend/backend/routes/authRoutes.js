const express = require("express");
const router = express.Router();

const User = require("../models/User");
const bcrypt = require("bcryptjs");


// Signup API
router.post("/signup", async (req, res) => {

    try {

        const { name, email, password } = req.body;


        // Check existing user
        const existingUser = await User.findOne({ email });

        if(existingUser){
            return res.status(400).json({
                message:"Email already registered"
            });
        }


        // Password encrypt
        const hashedPassword = await bcrypt.hash(password, 10);


        // Create user
        const user = await User.create({

            name,
            email,
            password: hashedPassword

        });


        res.status(201).json({

            message:"Signup Successful",
            user:user

        });


    } catch(error){

        res.status(500).json({

            message:error.message

        });

    }

});


module.exports = router;