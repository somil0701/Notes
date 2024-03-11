// Guessing Number Game
let secret_number = Math.floor(Math.random()*100) + 1;
let count = 0;
let user_input = parseInt(prompt("Enter a number: "));

while(user_input !== secret_number){
    if (user_input > secret_number){
        prompt("LOWER!! Enter Another Number!");
    }
    else if (user_input < secret_number){
        prompt("HIGHER!! Enter Another Number!");
    }
    count += 1;
}

console.log(`\nCongrats you guessed the correct secret number in ${count} guesses!! `);
console.log(`\nThe secret number was ${secret_number}\n`);
