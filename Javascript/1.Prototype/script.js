const Student = {
    name: "Samarth",
    age: 20,
    rollNo: 12345,
    subjects: ["Math", "Science", "English"],
    isEnrolled: true,
}

const years = {
    year(){
        console.log("2023");
    }
}

Student.__proto__ = years;