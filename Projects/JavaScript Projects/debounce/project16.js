//Use debounce concept to reduce api calls.

const user_input = document.querySelector('#user-input')
const user_card = document.querySelector('.user-card')

function card(picture, name, phoneNO, gender) {

    user_card.innerHTML = '';

    const img = document.createElement("img");
    img.src = `${picture}`;

    user_card.appendChild(img);
    user_card.classList.add('with-border');

    const with_border = document.querySelector('.with-border')
    with_border.style = "display: flex; flex-direction: column;justify-content: center;align-items: center;"

    const span1 = document.createElement("span");
    span1.innerHTML = `<strong>Name: </strong> ${name}`;
    user_card.appendChild(span1);

    const span2 = document.createElement("span");
    span2.innerHTML = `<strong>Phone No: </strong> ${phoneNO}`;
    user_card.appendChild(span2);

    const span3 = document.createElement("span");
    span3.innerHTML = `<strong>Phone No: </strong> ${gender}`;
    user_card.appendChild(span3);
}

function fetchUserData() {
    fetch('https://randomuser.me/api/')
        .then((response) => {
            const data = response.json();
            return data
        })
        .then((data) => {
            const picture = data.results[0].picture.medium
            const name = data.results[0].name.first + " " + data.results[0].name.last
            const phoneNO = data.results[0].phone;
            const gender = data.results[0].gender

            card(picture, name, phoneNO, gender)
        })
}
user_input.addEventListener('input', () => {
    fetchUserData()
})