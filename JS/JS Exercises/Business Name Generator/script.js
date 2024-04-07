function randomIndexGenrator(){
    return Math.floor(Math.random() * 3);
};

const adjectives = {
    0: "Crazy",
    1: "Amazing",
    2: "Fire"
};

const shopName = {
    0: "Engine",
    1: "Foods",
    2: "Garments"
};

const lastWord = {
    0: "Bros",
    1: "Limited",
    2: "Hub"
};

console.log(`Your Business Name is ${adjectives[randomIndexGenrator()]} ${shopName[randomIndexGenrator()]} ${lastWord[randomIndexGenrator()]}`)