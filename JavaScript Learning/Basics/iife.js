//IIFE(Immediately invoked function expressions)

//it is called named IIFE
(function temp(){
    console.log("Just for testing");
})();

//it is called simple IIFE
((number_id) => {
    console.log(`my id is ${number_id}`);
})(55);

