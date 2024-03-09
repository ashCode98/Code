const userDetails = {
    username: "ashCode98",
    Name: "Ashish Prajapati",
    loginCnt: 5,
    signedIn: false,

    getUserDetails: function () {
        console.log(`Login Count: ${this.loginCnt}`);
    }
}

console.log(userDetails.getUserDetails());