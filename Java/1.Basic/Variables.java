public class Variables {
    static int m = 100; // Static Variable

    void method() {
        int n = 90; // Local Variable
    }

    public static void main(String args[]) {
        int x = 90; // Instance Variable
        System.out.println("Static Variable: " + m);
        System.out.println("Instance Variable: " + x);

        // Float Variable
        float f = 10.5f;
        System.out.println("Float Variable: " + f);

        // Java variable Example - Widening
        int Widening = 10;
        System.out.println("Before Widening: " + Widening);
        float f1 = Widening;
        System.out.println("After Widening: " + f1);

        // Java variable Example - Narrowing(TypeCasting)
        float Narrowing = 10.5f;
        System.out.println("Before Narrowing: " + Narrowing);
        // int a = Narrowing; // Compile time error
        int n1 = (int) Narrowing;
        System.out.println("After Narrowing: " + n1);

        // Java Variable Example - Overflow
        int Overflow = 130;
        System.out.println("Before Overflow: " + Overflow);
        byte OverFlow2 = (byte) Overflow;
        System.out.println("After Overflow: " + OverFlow2);

        // Adding Lower Tpye Variable
        byte b1 = 10;
        byte b2 = 10;
        // byte b3 = b1 + b2; // Compile time error: because b1 + b2 = int
        // System.out.println("After Adding Lower Type Variable: " + b3);
        byte b4 = (byte) (b1 + b2);
        System.out.println("After Adding Lower Type Variable: " + b4);
    }
}
