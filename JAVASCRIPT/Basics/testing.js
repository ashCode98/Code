// let variableOne = Symbol("Ashish")
// let variableTwo = Symbol("Ashish")
//
// let bigNumber = 8683579275902709726n
//
// const teamSoul = ["Omega", "Goblin", "Neyo", "Akshat"]
//
// let firstOne = 4;
// let secondOne = 5;
//
// let userAshish = {
//     Age: 18,
//     city: "balasinor",
//     email: "atankmember@gmail.com",
//     upi: "ashish@ypi"
// }
//
// let userTemporary = userAshish
//
// userTemporary.Age = 20
// userTemporary.city = "Modasa"
//
// console.log(userAshish)
//
// console.log(userTemporary)

// var createCounter = function(n) {
//     console.log(`Outer function ${n}`);
//     return function(){
//         console.log(`Inner function ${n}`);
//         return n++;
//     };
// };
//
// const counter = createCounter(10)
// counter()
// counter()
// counter()

function createAdder(a) {
    console.log(`a: ${a}`)
    return function add(b) {
        console.log(`b: ${b}`)
        let sum;
        sum = a + b;
        return sum;
    }
}
const addTo2 = createAdder(2);
addTo2(5); // 7