// const url = 'https://api.chucknorris.io/jokes/random';
// const Button = document.querySelector('.btn')
// const Dis = document.querySelector('#display-joke')

// const httpRequest = new XMLHttpRequest()

// Button.addEventListener('click', () => {
//     dis();
// })

// function dis() {
//     httpRequest.open('GET', url)
//     httpRequest.onreadystatechange = function () {
//         if (httpRequest.readyState == 4) {
//             const res = JSON.parse(this.responseText);
//             Dis.textContent = `"${res.value}"`
//         }
//     }

//     httpRequest.send()
// }


// handle this end point with promises
// handle the case of race condition

async function getJokes() {
    try {
        const response = await
            fetch('https://api.chucknorris.io/jokes/random')

        const data = await response.json()
        console.log(data.value);
    }
    catch (e) {
        console.log(e);
    }
}

getJokes()