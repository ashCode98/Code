const startChange = document.getElementById('start');
const stopChange = document.getElementById('stop');

const randomNumber = function () {
    const hex = '0123456789ABCDEF';
    let color = '#';

    for (let i = 0; i < 6; i++) {
        color += hex[parseInt(Math.random() * 16)];
    }

    return color;
}
let change;
const startChanging = function () {

    change = setInterval(function(){
        document.body.style.backgroundColor = randomNumber();
    }, 1000)

}

startChange.addEventListener('click', startChanging);

stopChange.addEventListener('click', function () {
    clearInterval(change)
    change = null;
    document.body.style.backgroundColor = "black";
})