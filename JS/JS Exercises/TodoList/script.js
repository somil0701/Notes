operation = prompt("Enter an operation to perform!!!!");

let todo = ['Brush your teeth', 'Take a Nap'];

while(operation!== 'quit'){

    if (operation == 'add'){
        task = prompt("Enter the task to be added: ");
        todo.push(task);
        console.log("Your Task was added OwO");
    }

    if (operation == 'show'){
        for (let task of todo){
            console.log(task);
        }
    }

    if (operation == 'del'){
        del = parseInt(prompt("Enter the index of the task to be deleted: "));
        todo.splice(del, 1);
    }

    if (operation == 'quit'){
        console.log("Have a great day !!")
        break;
    }

    operation = prompt("Enter an operation to perform!!!!");
}