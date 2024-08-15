function printAshish() {
   console.log("Ashish")
}

// printAshish()
/*
function addTwoNumbers(numberOne, numberTwo){  //numberOne and numberTwo are the parameters
   return numberOne + numberTwo;
}

let sumOfTwoNumbers = addTwoNumbers(22, 40) //22 and 40 are the arguments
console.log(sumOfTwoNumbers)

function testingFunction(...numberOne){
   return numberOne
}

console.log(testingFunction(45, 56, 33))
*/

/*
const userInformation = {
   username: "ashCode98",
   pw: "random"
}

function handleObject(allowAnyObject){
   console.log(`Username is ${allowAnyObject.username} and password is ${allowAnyObject.pw}`)
}

handleObject(userInformation)
 */

const temporaryArray = [100, 200, 300, 400]

function temporaryFunction(passArray) {
   return passArray[2]
}

console.log(temporaryFunction(temporaryArray))