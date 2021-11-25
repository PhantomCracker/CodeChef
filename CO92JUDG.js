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
    while(T--) {
        let N = parseInt(readLine());
        let Alice = readLine().split(' ').map(Number);
        let Bob = readLine().split(' ').map(Number);

        console.log(competition(N, Alice, Bob));
    }
});

function readLine() {
    return userInputArray[currentLine++];
}

function competition(N, Alice, Bob) {
    let maxAlice = Alice[0];
    let timeAlice = 0;
    let maxBob = Bob[0];
    let timeBob = 0;

    for (let i = 0; i < Alice.length; i++) {
        if (Alice[i] > maxAlice) {
            maxAlice = Alice[i];
        }
        timeAlice = timeAlice + Alice[i];
    }
    for (let i = 0; i < Bob.length; i++) {
        if (Bob[i] > maxBob) {
            maxBob = Bob[i];
        }
        timeBob = timeBob + Bob[i];
    }

    let AliceTotalTime = timeAlice - maxAlice;
    let BobTotalTime = timeBob - maxBob;
    if (AliceTotalTime > BobTotalTime) {
        return "Bob";
    } else if (AliceTotalTime < BobTotalTime) {
        return "Alice";
    } else {
        return "Draw";
    }
}