class user {
    constructor(username) {
        this.username = username
    }

    static logme() {
        console.log(`Username is: ${this.username}`)
    }
}

const Goblin = new user("something new")
Goblin.logme()