class User {
    constructor(username, email, password) {
        this.username = username
        this.email = email
        this.password = password
    }

    encryptPassword() {
        return `${this.password}ads`
    }

    changeUsername() {
        return `${this.username.toUpperCase()}`
    }
}

const userDetails = new User("user", "user@gmail.com", "12345")

console.log(userDetails.encryptPassword())
console.log(userDetails.changeUsername())

// Behind the scenes

function User2(username, email, password) {
    this.username = username
    this.email = email
    this.password = password
}

User2.prototype.encryptPassword = function () {
    return `${this.password}ads`
}

User2.prototype.changeUsername = function () {
    return `${this.username.toUpperCase()}`
}

const user2 = new User2("user2", "user2@gmail.com", "userPwd")
console.log(user2.encryptPassword())
