/*const user = {
    firstName: "prajapati",
    middleName: "Ashish",
    roll_no: 55,

    greetingMessage: function (){
        console.log(`thank you ${this.middleName} for signing off`);
    }
}*/

/*
const temporary = () => {    //it is called arrow function
    let name = 'Ashish'
    console.log(`My name is ${name}`);
}
*/

const sumOfTwoNumbers = (num1, num2) => {
    return num1 + num2
}

// const sumOfTwoNumbers = (num1, num2) => (num1+num2)

function sumOfTwoNumbers(num1, num2) {
    return num1 + num2
}

console.log(sumOfTwoNumbers(4, 8))