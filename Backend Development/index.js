import 'dotenv/config';
import express from 'express';
const app = express();

app.get("/profile", (req, res) => {
    res.send('Profile section');
})

app.get("/login", (req, res) => {
    res.send('<h1>Ashish</h1>');
})

app.listen(process.env.PORT, () => {
    console.log(`App listening on port ${process.env.PORT}`);
})