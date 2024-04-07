function factorialCalculator(num){
    if (num == 1 || num == 0){
        return 1;
    }
    return num * factorialCalculator(num - 1);
}

const num = prompt("Enter the number: ");
alert(`The factorial of the number is ${factorialCalculator(num)}`);