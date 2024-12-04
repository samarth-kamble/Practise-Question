public class Operators {
    public static void main(String[] args) {
        int a = 10;
        int b = 20;
        boolean c = true;
        boolean d = false;
        // 1. Unary Operators
        System.out.println("Unary Operators");
        System.out.println("a = " + a);
        System.out.println("++a = " + ++a);
        System.out.println("a = " + a);
        System.out.println("a++ = " + a++);
        System.out.println("a = " + a);
        System.out.println("--a = " + --a);
        System.out.println("a = " + a);
        System.out.println("a-- = " + a--);
        System.out.println("a = " + a);
        System.out.println("!c = " + !c);
        System.out.println("!d = " + !d);

        // 2. Arithmetic Operators
        System.out.println("\nArithmetic Operators");
        System.out.println("a + b = " + (a + b));
        System.out.println("a - b = " + (a - b));
        System.out.println("a * b = " + (a * b));
        System.out.println("a / b = " + (a / b));

        // 3. Java Left Shift Operator
        System.out.println("\nJava Left Shift Operator");
        System.out.println("10 << 2 = " + (10 << 2));

        // 4. Java Right Shift Operator
        System.out.println("\nJava Right Shift Operator");
        System.out.println("10 >> 2 = " + (10 >> 2));
        int p = -20;
        System.out.println("-20 >> 2 = " + (p >> 2));
        System.out.println("-20 >>> 2 = " + (p >>> 2));

        // 5. Comparison Operators
        System.out.println("\nComparison Operators");
        System.out.println("a == b = " + (a == b));
        System.out.println("a != b = " + (a != b));
        System.out.println("a > b = " + (a > b));
        System.out.println("a < b = " + (a < b));
        System.out.println("b >= a = " + (b >= a));
        System.out.println("b <= a = " + (b <= a));

        // 6. Logical Operators
        System.out.println("\nLogical Operators");
        System.out.println("c && d = " + (c && d));
        System.out.println("c || d = " + (c || d));
        System.out.println("!(c && d) = " + !(c && d));
        System.out.println("!(c || d) = " + !(c || d));

        // 7. Assignment Operators
        System.out.println("\nAssignment Operators");
        System.out.println("a += b = " + (a += b));
        System.out.println("a -= b = " + (a -= b));
        System.out.println("a *= b = " + (a *= b));
        System.out.println("a /= b = " + (a /= b));
        System.out.println("a %= b = " + (a %= b));
        System.out.println("a |= b = " + (a |= b));
        System.out.println("a &= b = " + (a &= b));
        System.out.println("a ^= b = " + (a ^= b));
        System.out.println("a >>= b = " + (a >>= b));
        System.out.println("a <<= b = " + (a <<= b));
        System.out.println("a >>>= b = " + (a >>>= b));

        // 8. Bitwise Operator
        System.out.println("\nBitwise Operator");
        System.out.println("a & b = " + (a & b));
        System.out.println("a | b = " + (a | b));
        System.out.println("a ^ b = " + (a ^ b));
        System.out.println("~a = " + ~a);
        System.out.println("~b = " + ~b);

        // 9. Conditional Operator
        System.out.println("\nConditional Operator");
        System.out.println("(a > b) ? a : b = " + ((a > b) ? a : b));

        // 10. instanceof Operator
        System.out.println("\ninstanceof Operator");
        Operators op = new Operators();
        System.out.println("op instanceof Operators = " + (op instanceof Operators));
    }
}
