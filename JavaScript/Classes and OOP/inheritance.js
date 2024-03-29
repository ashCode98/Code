class User {
    constructor(username) {
        this.username = username
    }

    login() {
        return `${this.username} logged in successfully!`
    }
}

//'Teacher' inherits (acquires) properties of base class which is 'User')
class Teacher extends User {
    constructor(username, email, password) {
        super(username)
        this.email = email
        this.password = password
    }

    addCourse() {
        console.log(`A new course was added by ${this.username}`)
    }
}

const teacher = new Teacher("teacher1", "teacher1@gmail.com", "teacherPWD")
console.log(teacher.login())

const user = new User("user1")
console.log(user.username)

console.log(teacher instanceof Teacher) //true
console.log(user instanceof User) //true
console.log(teacher instanceof User) //true
