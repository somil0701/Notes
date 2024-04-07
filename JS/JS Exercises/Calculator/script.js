const display = document.querySelector('input');
const buttons = document.querySelectorAll('button:not(.noDisplay)');
const clearButton = document.querySelector('button.clearButton');
const evalButton = document.querySelector('button.evaluate');
const backspaceButton = document.querySelector('button.backspace');

function evaluate() {
    try {
        display.value = eval(display.value);
    }
    catch (error) {
        display.value = 'Error';
    }
}

function clearDisplay() {
    display.value = '';
}

function clearCharacter(){
    display.value = (display.value.slice(0, display.value.length - 1))

}

function addToDisplay(button) {
    display.value += button.innerText;
}

for (let button of buttons) {
    button.addEventListener("click", () => {
        addToDisplay(button);
    })
}

clearButton.addEventListener("click", () => {
    clearDisplay();
})

evalButton.addEventListener("click", () => {
    evaluate();
})

backspaceButton.addEventListener("click", () => {
    clearCharacter();
})