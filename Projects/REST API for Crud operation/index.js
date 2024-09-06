const express = require('express');
const app = express();
const { Pool } = require('pg');
const { database } = require('pg/lib/defaults');

const pool = new Pool({
    user: "Ashish",
    host: "localhost",
    database: "mydatabase",
    password: "",
    port: 5432,
});

//Middlewares to parse JSON bodies
app.use(express.json())

pool.connect((err, client, done) => {
    if (err) console.error('Connection error', err.stack);
    else {
        console.log('Connected to the database');
        done();
    }
});

app.post('/users', (req, res) => {

    const query = `
        INSERT INTO "users" (id, name, email) VALUES ($1, $2, $3) RETURNING *;
    `;

    const values = [database.id, req.body.name, req.body.email];

    pool.query(query, (err, res) => {
        if (err) {
            console.error('Error while executing query', err.stack);
            res.status(500).send("Err creating user");
        }
        else {
            res.status(201).json(res.rows[0]);
        }
    });
});

//Get all users
app.get('/users', (req, res) => {
    const query = `
        SELECT * FROM users;
    `

    pool.query(query, (err, res) => {
        if (err) {
            console.error('Error while executing query', err.stack);
            res.status(500).send("Err creating user");
        }
        else {
            res.json(res.rows);
        }
    });
})

//Get user by id
app.get('/users/:id', (req, res) => {
    const query = `
        SELECT * FROM users where id = $1;
    `

    const values = [req.params.id];
    pool.query(query, values, (err, res) => {
        if (err) {
            console.error('Error while executing query', err.stack);
            res.status(500).send('Error fetching user');
        }
        else if (res.rows.length === 0) {
            res.status(404).send('User not found');
        }
        else {
            res.json(res.rows[0]);
        }
    })
})

//Update a user (put users/:id)
app.put('/users/:id', (req, res) => {
    const query = `
        UPDATE users SET name = $1, email = $2 WHERE id = $3 RETURNING *;
    `

    const values = [req.body.name, req.body.email.req.params.id];

    pool.query(query, values, (err, res) => {
        if (err) {
            console.error('Error while executing query', err.stack);
            res.status(500).send('Error updating user');
        }
        else if (res.rows.length === 0) {
            res.status(404).send('user not found');
        }
        else {
            res.json(res.rows[0]);
        }
    })
})


app.delete('/users/:id', (req, res) => {
    const query = `DELETE FROM users WHERE id = $1 RETURNING *;`

    const values = [req.params.id];
    pool.query(query, values, (err, res) => {
        if (err) {
            console.error('Error while executing query', err.stack);
            res.status(500).send('Error deleting user');
        }
        else if (res.rows.length === 0) {
            res.status(404).send('user not found');
        }
        else {
            res.json(res.rows[0]);
        }
    })
})

//Start a server
app.listen(3000, () => {
    console.log(`Server running on http://localhost:${3000}`);
});
