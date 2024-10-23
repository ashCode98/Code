import { Client } from 'pg';

const client = new Client({
    host: 'localhost',
    port: 5432,
    user: 'postgres',
    database: 'unique-password-generator',
    password: ''
});

client.connect()
    .then(() => {
        console.log("CONNECTED to postgres database");
    }).catch((err) => {
        console.log("connection ERROR: ", err.stack);
    });