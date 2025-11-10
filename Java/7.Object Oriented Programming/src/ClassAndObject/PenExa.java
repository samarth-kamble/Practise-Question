package ClassAndObject;

class Pen {
    String color;
    String type; // BallPoint, Gel , Roller Ball

    public void Write() {
        System.out.println("Write Something...");
    }

    public void printColor() {
        System.out.println(this.color);
    }

    public void printType() {
        System.out.println(this.type);
    }
}

public class PenExa {
    public  static void main(String[] args) {
        Pen pen1 = new Pen();
        pen1.color = "red";
        pen1.type = "BallPen";
        System.out.println("----------------------------");
        pen1.Write();
        pen1.printColor();
        pen1.printType();
        System.out.println("----------------------------");
        Pen pen2 = new Pen();
        pen2.color = "blue";
        pen2.type = "GelPen";
        System.out.println("----------------------------");
        pen2.Write();
        pen2.printColor();
        pen2.printType();
        System.out.println("----------------------------");
    }
}
