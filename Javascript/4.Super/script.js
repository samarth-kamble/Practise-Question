
class Person {
    constructor() {
        this.species = 'homo sapiens';
    }

    eat() {
        console.log("Eating...");
    }
   
}

class Engineer extends Person {
    constructor (branch) {
        super();
        this.branch = branch;
    }
    work() {
        console.log("Working on engineering tasks...");
    }
}

let samObj = new Engineer('IT');