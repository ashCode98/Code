import express from 'express';
import front from '../frontend/index.js'
const app = express();

const port = process.env.PORT || 3000;

app.get('/', (req, res) => {
    res.send(`${front.password}`)
})

app.listen('port', (req, res) => {
    console.log('Listening');
})