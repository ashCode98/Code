//IIFE(Immediately invoked function expressions)

//it is called named IIFE
// (function temp(){
//     console.log("Just for testing");
// })();

// //it is called simple IIFE
// ((number_id) => {
//     console.log(`my id is ${number_id}`);
// })(55);


function log(inputFunction) {
    return function (...args) {
        // console.log("Input", args);
        const result = inputFunction(...args);
        console.log("Output", result);
        return result;
    }
}
const f = log((a, b) => a + b);
f(1, 2); // Logs: Input [1, 2] Output 3