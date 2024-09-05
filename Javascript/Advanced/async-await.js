async function Hii() {
    let sum = 0;
    for (let i = 0; i < 100000000; i++) {
        sum += i;
    }

    return sum;
}

Hii().then(console.log)