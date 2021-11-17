process.stdin.resume();
process.stdin.setEncoding('ascii');

let userInput = '';
let userInputArray = '';
let currentLine = 0;
process.stdin.on('data', (data) => {
    userInput += data;
});

process.stdin.on('end', () => {
    userInputArray = userInput.split('\n');
    let T = parseInt(readLine());
    while (T--) {
        let currentLine = readLine().split(' ');
        let X = parseInt(currentLine[0]);
        let Y = parseInt(currentLine[1]);

        console.log(IPLandRCB(X, Y));
    }
})

function readLine() {
    return userInputArray[currentLine++];
}

function IPLandRCB(X, Y) {
    return X <= Y ? 0 : (X - Y);
}