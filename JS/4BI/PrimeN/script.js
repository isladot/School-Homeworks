function checkNumber() {
    let input = parseInt(document.getElementById('value-input').value);
    let prime = true;

    for (let i = 2; i < input - 1; i++) {
        if (input % i == 0) {
            prime = false;
            break;
        }
    }

    alert(`Is prime: ${prime}`)
}