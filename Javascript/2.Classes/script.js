class MyCar {
    constructor() {
        this.make = "BMW";
        this.model = "X7";
        this.year = 2021;
    }

    displayInfo() {
        console.log(`Car Make: ${this.make}`);
        console.log(`Car Model: ${this.model}`);
        console.log(`Car Year: ${this.year}`);
    }

    getVariant(type) {
        if (type === "SUV") {
            return "BMW X7";
        } else if (type === "Sedan") {
            return "BMW 5 Series";
        } else {
            return "Unknown variant";
        }
    }
}

let myCar = new MyCar();
myCar.getVariant("SUV");