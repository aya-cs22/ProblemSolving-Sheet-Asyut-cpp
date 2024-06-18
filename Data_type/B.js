const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});
rl.on('line', (input) => {
  const values = input.split(' ');
  console.log(parseInt(values[0]));
  console.log(BigInt(values[1]).toString());
  console.log(values[2]);
  console.log(parseFloat(values[3]));
  console.log(parseFloat(values[4]));
  rl.close();
});
// ,