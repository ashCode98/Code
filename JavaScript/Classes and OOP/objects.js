// function mulBy5(num) {
//     return num * 5;
// }

// console.log(mulBy5(5));

function createUser(username, age) {
    this.username = username;
    this.age = age;
}

createUser.prototype.increaseAge = function () {
    this.age++;
}

createUser.prototype.printAge = function () {
    console.log(`user's age is: ${this.age}`)
}

const user1 = new createUser("bdkgigidsgighids", 20)

user1.printAge() //output: user's age is: 20