const User = require("../models/user");
const validate = require('../utils/validator');
const bcrypt = require("bcrypt");
const jwt = require('jsonwebtoken');

// Register
const register = async (req, res) => {

    try {
        // Validate data
        validate(req.body);

        const { firstName, emailId, password } = req.body;

        // Hash password
        req.body.password = await bcrypt.hash(password, 10);

        // Create user
        const user = await User.create(req.body);

        // Create JWT
        const token = jwt.sign(
            {
                _id: user._id,
                emailId: emailId
            },
            process.env.JWT_KEY,
            {
                expiresIn: 60 * 60
            }
        );

        // Store token in cookie
        res.cookie('token', token, {
            maxAge: 60 * 60 * 1000
        });

        res.status(201).send("User Registered Successfully");

    } catch (err) {
        res.status(400).send("Error: " + err.message);
    }
};


// Login
const login = async (req, res) => {

    try {

        const { emailId, password } = req.body;

        if (!emailId) {
            throw new Error("Invalid Credentials");
        }

        if (!password) {
            throw new Error("Invalid Credentials");
        }

        const user = await User.findOne({ emailId });

        if (!user) {
            throw new Error("Invalid Credentials");
        }

        // IMPORTANT: await lagana hai
        const match = await bcrypt.compare(password, user.password);

        if (!match) {
            throw new Error("Invalid Credentials");
        }

        // Create JWT
        const token = jwt.sign(
            {
                _id: user._id,
                emailId: emailId
            },
            process.env.JWT_KEY,
            {
                expiresIn: 60 * 60
            }
        );

        // Store token in cookie
        res.cookie('token', token, {
            maxAge: 60 * 60 * 1000
        });

        res.status(200).send("Logged In Successfully");

    } catch (err) {
        res.status(401).send("Error: " + err.message);
    }
};


// Logout
const logout = async (req, res) => {

    try {

        res.cookie('token', null, {
            expires: new Date(0)
        });

        res.status(200).send("Logged Out Successfully");

    } catch (err) {
        res.status(500).send("Error: " + err.message);
    }
};


// Get Profile
const getProfile = async (req, res) => {

    try {

        res.status(200).send("Profile");

    } catch (err) {
        res.status(500).send("Error: " + err.message);
    }
};


// Export
module.exports = {
    register,
    login,
    logout,
    getProfile
};


