package ClassAndObject;

class StudenInfo {
    String name;
    int age;
    int rollNo;
    double mark;

    public void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Roll No: " + rollNo);
        System.out.println("Mark: " + mark);
    }
}

public class Student {
    public static void main(String[] args) {
        System.out.println("----------------------------");
        StudenInfo student1 = new StudenInfo();
        student1.name = "Samarth";
        student1.age = 19;
        student1.rollNo = 23;
        student1.mark = 9.56;
        student1.displayInfo();

        System.out.println("----------------------------");

        StudenInfo student2 = new StudenInfo();
        student2.name = "Nancy";
        student2.age = 19;
        student2.rollNo = 24;
        student2.mark = 8.67;
        student2.displayInfo();
        System.out.println("----------------------------");
    }
}
