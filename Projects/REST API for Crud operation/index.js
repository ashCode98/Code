const express = require('express');
const app = express();
const port = 3000;

//Middlewares to parse JSON bodies
app.use(express.json())

// In-memory list of users (acting as your database)
let users = [];

app.post('/users', (req, res) => {
    const user = {
        id: users.length + 1,
        name: req.body.name,
        email: req.body.email,
    };
    users.push(user);
    res.status(201).json(user);
});

//Get all users
app.get('/users', (req, res) => {
    res.json(users);
})

//Get user by id
app.get('/users/:id', (req, res) => {
    const user = users.find(u => u.id === parseInt(req.params.id));
    if (!user) return res.status(404).send("user does not found");
    res.json(user);
})

//Update a user (put users/:id)
app.put('/users/:id', (req, res) => {
    const user = users.find(u => u.id === parseInt(req.params.id));
    if (!user) return res.status(404).send("User does not found");

    user.name = req.body.name || user.name;
    user.email = req.body.email || user.email;
    res.json(user);
})

app.delete('/users/:id', (req, res) => {
    const userIndex = users.findIndex(u => u.id === parseInt(req.params.id));
    if (userIndex === -1) return res.status(404).send("User does not found");

    const deletedUser = users.splice(userIndex, 1);
    res.json(deletedUser);
})

//Start a server
app.listen(port, () => {
    console.log(`Server running on http://localhost:${port}`);
});
