const generatePassword = () => {
    let your_password = '';
    let numberOfCharactersInPassword = Math.floor(Math.random() * (25 - 15 + 1) + 15);

    for (let i = 1; i <= numberOfCharactersInPassword; i++) {
        let number = Math.floor(Math.random() * (127 - 1) + 1);
        let c = String.fromCharCode(number);
        if (c === undefined) {
            number = Math.floor(Math.random() * (127 - 33) + 33);
        }

        if (c >= 1 && c <= 9 || c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' && c !== undefined && c !== ' ') {
            your_password += c;
        }
    }

    return your_password;
}

const buttonClick = document.querySelector('button')

buttonClick.addEventListener('click', () => {
    const password = generatePassword();
    console.log(password)
})

