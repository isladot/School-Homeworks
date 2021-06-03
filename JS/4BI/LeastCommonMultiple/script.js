function calculate() {
  const n = prompt('Inserire la quantità di numeri:');

  let numbers = [];
  for (let i = 0; i < n; i++) {
    numbers.push(prompt(`Inserire il ${i + 1} numero:`));
  }

  const gcd = (a, b) => (a ? gcd(b % a, a) : b);
  const lcm = (a, b) => (a * b) / gcd(a, b);

  alert(`MCM: ${numbers.reduce(lcm)}`);
}
