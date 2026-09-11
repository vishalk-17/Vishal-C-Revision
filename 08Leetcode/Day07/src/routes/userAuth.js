const express = require("express");

const authRouter = express.Router();

const {
    register,
    login,
    logout,
    adminRegister
} = require("../controllers/userAuthent");

const userMiddleware = require("../middleware/userMiddleware");
const adminMiddleware = require("../middleware/adminMiddleware");


// ================= USER =================

// Register User
authRouter.post("/register", register);

// Login User/Admin
authRouter.post("/login", login);

// Logout
authRouter.post("/logout", userMiddleware, logout);


// ================= ADMIN =================

// Register New Admin
authRouter.post(
    "/admin/register",
    adminMiddleware,
    adminRegister
);


module.exports = authRouter;
