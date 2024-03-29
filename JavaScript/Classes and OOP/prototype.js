let players = ["Jonathan", "Admino"]

let signature_move = {
    Jonathan: "de Jiggle de Jiggle",
    Admino: "Strong Close range",

    seeJonathanMove: function () {
        console.log(`Jonathan's signature move is: ${this.Jonathan}`);
    }
}

Object.prototype.Ashish = function () {
    console.log("Ashish's signature move is: Mid range spray");
}

Array.prototype.HelloAshish = function () {
    console.log(`Hello Ashish`)
}

signature_move.Ashish();

players.HelloAshish();


/* Inheritance */

const Developer = {
    buildingProject: true
}

const HR = {
    hiringCurrently: false
}

const softwareTester = {
    isTesting: true,
    __proto__: Developer
}

const DevOps = {
    deploying: true
}

DevOps.__proto__ = Developer

//modern syntax
// Object.setPrototypeOf(Developer, DevOps)

let username = "Ashish     "

String.prototype.trueLength = function(){
    console.log(`${this.trim().length}`)
}

username.trueLength(); //output: 6