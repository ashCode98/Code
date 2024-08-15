//object literal

/* const userDetails = {

    //properties
    username: "randomUsername",
    name: "username",
    loginCnt: 5,
    signedIn: true,

    //methods
    getUserDetails: function () {
        console.log(`username is: ${this.username}`);
    }
}

userDetails.getUserDetails();
*/

/* const newObj = {

    id: "1",
    age: "40",

    details: function () {
        console.log(`man's age is ${this.age}`)
    }
}

newObj.details();
*/

//constructor function

function User(username, loginCount, isLoggedIn) {
    this.username = username
    this.loginCount = loginCount
    this.isLoggedIn = isLoggedIn

    this.greeting = function () {
        console.log(`Hello ${this.username}! How are you?`)
    }

    return this
}

/* Empty object created when use new keyword */

const userOne = new User("ashCode98", 2, true);
const userTwo = new User("random", 1, false);

console.log(userOne)
console.log(userTwo)