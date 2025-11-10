package ClassAndObject;

class CarInfo {
    String name;
    String brand;
    String model;
    String color;
    String fuelType;
    int year;
    double price;

    public void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Brand: " + brand);
        System.out.println("Model: " + model);
        System.out.println("Color: " + color);
        System.out.println("Fuel Type: " + fuelType);
        System.out.println("Year: " + year);
        System.out.println("Price: " + price);
    }

    public void displayName() {
        System.out.println("Name: " + name);
    }

}

public class Car {
    public static void main(String[] args) {
        System.out.println("----------------------------");
        CarInfo car1 =  new CarInfo();
        car1.name = "BMW X7";
        car1.brand = "BMW";
        car1.model = "X7";
        car1.color = "White";
        car1.fuelType = "Petrol";
        car1.year = 2025;
        car1.price = 1.67; //  price is in crore
        car1.displayName();
        car1.displayInfo();

        System.out.println("----------------------------");
        CarInfo car2 = new CarInfo();
        car2.name = "Audi Q8";
        car2.brand = "Audi";
        car2.model = "Q8";
        car2.color = "Black";
        car2.fuelType = "Diesel";
        car2.year = 2024;
        car2.price = 1.45; //  price is in crore
        car2.displayInfo();
        car2.displayName();
        System.out.println("----------------------------");

        CarInfo car3 = new CarInfo();
        car3.name = "Mercedes-Benz S-Class";
        car3.brand = "Mercedes-Benz";
        car3.model = "S-Class";
        car3.color = "Silver";
        car3.fuelType = "Petrol";
        car3.year = 2025;
        car3.price = 1.77; // Assuming price is in crore
        car3.displayInfo();
        car3.displayName();
        System.out.println("----------------------------");
    }
}
