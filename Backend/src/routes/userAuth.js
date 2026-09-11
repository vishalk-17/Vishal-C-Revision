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

authRouter.get('/check', userMiddleware, (req, res) => {
    const reply = {
        firstName: req.result.firstName,
        emailId: req.result.emailId,
        _id: req.result._id
    }

    res.status(200).json({
        user: reply,
        message: "Valid User"
    });
})


module.exports = authRouter;
