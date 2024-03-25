const btn = document.querySelector('button');
const h2 = document.querySelector('h2');
const body = document.querySelector('body');

const generateRandomColor = () => {
    const r = Math.floor(Math.random()*256);
    const g = Math.floor(Math.random()*256);
    const b = Math.floor(Math.random()*256);
    const randomColor = `rgb(${r}, ${g}, ${b})`
    return randomColor;
}

btn.addEventListener('click', () => {
    const randomColor = generateRandomColor();
    body.style.backgroundColor = randomColor;
    h2.innerText = randomColor;
})