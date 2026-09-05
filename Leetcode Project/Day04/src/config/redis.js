const { createClient } = require("redis");
const redisClient = createClient({
    username: 'default',
    password: process.env.REDIS_PASS,
    
    socket: {
        host: 'offhand-accordant-happy-10457.db.redis.io',
        port: 19195
    }
});
module.exports = redisClient;




