package org.example;

/*
* *************** Data-Types ********************
* Datatypes are the statically typed programming language which means variable type
* are known at compile data.
* */


public class DataType {
    public static void main(String[] args){

        int p = 2000000;
        int d = 150000000;

        System.out.println("Population: " + p);
        System.out.println("Distance: " + d);

        char g = 'A';
        char s = '$';

        System.out.println("Grade: " + g);
        System.out.println("Symbol: " + s);

        float pi = 3.14f;
        float gravity = 9.81f;

        System.out.println("Value of Pi: " + pi);
        System.out.println("Gravity: " + gravity);

        long w = 7800000000L;
        long l = 9460730472580800L;

        System.out.println("World Population: " + w);
        System.out.println("Light Year Distance: " + l);

        double dpi = 3.141592653589793;
        double an = 6.02214076e23;

        System.out.println("Value of Pi: " + dpi);
        System.out.println("Avogadro's Number: " + an);

        short num = 1000;
        short t = -200;

        System.out.println("Number of Students: " + num);
        System.out.println("Temperature: " + t);

        byte a = 25;
        byte bt = -10;

        System.out.println("Age: " + a);
        System.out.println("Temperature: " + bt);

        boolean b1 = true;
        boolean b2 = false;

        System.out.println("Is Java fun? " + b1);
        System.out.println("Is fish tasty? " + b2);
    }
}
