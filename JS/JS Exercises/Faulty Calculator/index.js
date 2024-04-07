let randomNumber = () => {
    return Math.random();
};

prompt("Welcome to the Faulty Calculator!!");
prompt(`The number is ${randomNumber()}`);

const firstNumber = prompt("Enter the first number: ");
const operator = prompt("Enter the operator: ");
const secondNumber = prompt("Enter the second number: ");

if (randomNumber() < 0.1){
    if (operator === '+'){
        prompt(eval(`${firstNumber} - ${secondNumber}`));
    } 
    else if (operator === '-'){
        prompt(eval(`${firstNumber} + ${secondNumber}`));
    }
    else if (operator === '*'){
        prompt(eval(`${firstNumber} / ${secondNumber}`));
    }
    else if (operator === '/'){
        prompt(eval(`${firstNumber} * ${secondNumber}`));
    }
    else{
        prompt("INVALID!!!");
    }
}
else{
    prompt(eval(`${firstNumber} ${operator} ${secondNumber}`));
}