const promiseOne = new Promise(function (resolve, reject) {
    setTimeout(function () {
        console.log("Async task is completed")
        resolve();
    }, 1000)
})

promiseOne.then(function () {
    console.log("Promise consumed");
})

new Promise(function (resolve, reject) {
    setTimeout(function () {
        console.log("Async task 2")
        resolve();
    }, 1000)
}).then(function () {
    console.log("Async 2 resolved")
})

const promiseThree = new Promise(function (resolve, reject) {
    setTimeout(function () {
        resolve({
            username: "ashcode98",
            email: "asuguhgd@example.com"
        })
    }, 1000)
})

promiseThree.then(function (data) {
    console.log(data)
})

const promiseFour = new Promise(function (resolve, reject) {
    setTimeout(function () {
        let error = false;
        if (!error) {
            resolve({
                username: "ashcode98",
                password: "@123"
            })
        }
        else {
            reject('ERROR: something went wrong');
        }
    }, 1000)
})

promiseFour.then((user) => {
    return user.password;
}).then((password) => {
    console.log(password)
}).catch(function (err) {
    console.log(err)
}).finally(() => {
    console.log("The promise is either resolved or rejected!")
})

const promiseFive = new Promise(function (resolve, reject) {
    setTimeout(function () {
        let error = true;
        if (!error) {
            resolve({
                username: "anotherOnex",
                password: "@123"
            })
        }
        else {
            reject('ERROR: anotherOne went wrong');
        }
    }, 1000)
})

async function comsumePromiseFive() {
    try {
        const response = await promiseFive;
        console.log(response);
    } catch (err) {
        console.log(err);
    }
}

comsumePromiseFive();

// async function getuserDetails() {
//     try {
//         const response = await fetch('https://api.github.com/users/ashCode98');
//         const data = response.json();
//         console.log(data);
//     } catch (error) {
//         console.log("E: ", error);
//     }

//     // const response = await fetch('https://api.github.com/users/ashCode98');
//     // const data = response.json();
//     // console.log(data);
// }

// getuserDetails();


fetch('https://api.github.com/users/ashCode98')
    .then((response) => {
        return response.json();
    })
    .then((data) => {
        console.log(data.location)
    })
    .catch((error) => console.log(error))

const userDetails = [
    {
        "username": "Ashish",
        "password": "jbsgihssgd"
    }
]

console.log(userDetails[0]);

// userDetails.forEach((data) => {
//     console.log(data);
// })
