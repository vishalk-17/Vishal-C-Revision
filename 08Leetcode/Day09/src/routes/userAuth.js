const express = require("express");

const authRouter = express.Router();

const {
    register,
    login,
    logout,
    adminRegister,
    deleteProfile
} = require("../controllers/userAuthent");

const userMiddleware = require("../middleware/userMiddleware");
const adminMiddleware = require("../middleware/adminMiddleware");

// ================= REGISTER =================
authRouter.post("/register", register);

// ================= LOGIN =================
authRouter.post("/login", login);

// ================= LOGOUT =================
authRouter.post("/logout", userMiddleware, logout);

// ================= ADMIN REGISTER =================
authRouter.post(
    "/admin/register",
    adminMiddleware,
    adminRegister
);

// ================= DELETE PROFILE =================
authRouter.delete(
    "/deleteProfile",
    userMiddleware,
    deleteProfile
);

module.exports = authRouter;
