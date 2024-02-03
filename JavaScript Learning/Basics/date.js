let todaysDate = new Date()

// console.log(todaysDate.toString());
// console.log(todaysDate.toUTCString());
// console.log(todaysDate.toLocaleString())

let newlyCreatedDate = new Date();

// console.log(newlyCreatedDate.getTime())

// console.log(typeof newlyCreatedDate)

newlyCreatedDate.toLocaleString('default', {
    weekday: "long",
    timeZone: 'utc 5:30'
})