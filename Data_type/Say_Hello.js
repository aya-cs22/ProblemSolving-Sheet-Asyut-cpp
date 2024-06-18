//this function built in Node js that provid an intarface  for reading data
const readline = require('readline')
// creat an instance of the radline
const r1 = readline.createInterface({
    input : process.stdin,
    output : process.stdout,
});
//promote (is an empty string) the usr for input
r1.question('', (userinput) => {
    console.log("Hello, " + userinput);
    r1.close()
});