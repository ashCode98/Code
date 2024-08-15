const Descriptor = Object.getOwnPropertyDescriptor(Math, "PI")

// console.log(Descriptor)
/*
{
  value: 3.141592653589793,
  writable: false,
  enumerable: false,
  configurable: false
}
*/

const user = {
	name: "user",
	email: "user@gmail.com",
	password: "pwd",

	isLoggedIn: function () {
		console.log(`${this.name} has been logged in successfully!`)
	}
}

// console.log(Object.getOwnPropertyDescriptor(user, "email"))
/*
{
	value: 'user@gmail.com',
	writable: true,
	enumerable: true,
	configurable: true
}
*/

Object.defineProperty(user, "email", {
	writable: false,
	enumerable: true
})

// console.log(Object.getOwnPropertyDescriptor(user, "email"))
/*
{
  value: 'user',
  writable: false,
  enumerable: false,
  configurable: true
}
*/

for (let [key, value] of Object.entries(user)) {
	if (typeof value !== "function") {
		console.log(`${key} : ${value}`)
	}
}