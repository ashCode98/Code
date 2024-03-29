function SetUsername(username) {
    this.username = username
}

function createuser(username, email, password) {
    SetUsername.call(this, username)

    this.email = email
    this.password = password
}

const user1 = new createuser("user1", "user1@gmail.com", "something")
console.log(user1.username)