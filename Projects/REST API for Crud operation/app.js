const { Pool } = require('pg');
const { user, database, password, port } = require('pg/lib/defaults');

const pool = new Pool({
    user: "Ashish",
    host: "localhost",
    database: "mydatabase",
    password: "",
    port: 5432,
});

pool.connect((err, client, done) => {
    if (err) {
        console.error('Connection error', err.stack);
    }
    else {
        console.log('Connected to the database');
        done();
    }
});

const query = `
    INSERT INTO users (id, name, email) VALUES
    (1, 'Ashish', '4HkzT@example.com'),
    (2, 'Vishal', 'HJkzT@example.com'),
    (3, 'Sandeep', 'HJkzT@example.com'),
    (4, 'Gyan', 'ihidsg@email.com');
`
pool.query(query, (err, res) => {
    if (err) {
        console.error('Error while executing query', err.stack);
    }
    else {
        console.log('Query result:', res.rows)
    }
    pool.end();
});