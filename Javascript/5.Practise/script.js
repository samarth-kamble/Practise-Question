class User {
    constructor(name, email) {
        this.name = name;
        this.email = email;
    }
    viewData() {
        console.log(`Name: ${this.name}`);
        console.log(`Email: ${this.email}`);
    }
}

class Admin extends User {

constructor(name, email) {
    super(name, email);
    
}

    editData() {
        console.log(`Editing data for ${this.name}`);

    }
}

let user1 = new User("John Doe", "john.doe@example.com");
let user2 = new User("Jane Smith", "jane.smith@example.com");

const arr = [user1, user2];
arr.forEach(user => user.viewData());


let admin = new Admin("Admin User", "admin.user@example.com");
admin.viewData();