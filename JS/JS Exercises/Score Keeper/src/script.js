var player1score = document.querySelector('.player1score');
var player2score = document.querySelector('.player2score');

const player1button = document.querySelector('.player1button');
const player2button = document.querySelector('.player2button');
const resetbutton = document.querySelector('.resetbutton');

var dropdown = document.querySelector('#maxscore');
var maxscore = dropdown.value;

function incrementScore(value){
    return value + 1;
}

player1button.addEventListener('click', () => {
    if (player1score.textContent == maxscore){
        player1score.style.color = 'green';
        player2score.style.color = 'red';
        return;
    }
    if (player1score.textContent < maxscore){
        player1score.textContent = incrementScore(parseInt(player1score.textContent));
    }
    // player1score.textContent = incrementScore(parseInt(player1score.textContent));
})

player2button.addEventListener('click', () => {
    if(player2score.textContent == maxscore){
        player2score.style.color = 'green';
        player1score.style.color = 'red';
    }
    player2score.textContent = incrementScore(parseInt(player2score.textContent));
})

resetbutton.addEventListener('click', () => {
    player1score.textContent = 0;
    player2score.textContent = 0;
})

console.log(maxscore);