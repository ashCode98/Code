class User {
    constructor(email, password) {
        this.email = email
        this.password = password
    }

    get password() {
        return `${this.password}ashish`
    }

    set password(value) {
        this._password = value
    }
}

const Ashish = new User("user@yahoo.com", "password123")
console.log(Ashish.password)