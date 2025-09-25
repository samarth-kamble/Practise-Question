package org.example;

/*
* Instance Variable : Instance variable are know as non-static
* variable and are declared in a class outside at any method,
* constructor or block.
*
* The Scope of the variable throughout class.
* */

public class InstanceVariable {
    // Declared Instance Variable
    // Declared Instance Variable

    public String geek;
    public int i;
    public Integer I;

    // Constructor
    public Geeks() {
        this.geek = "Sweta Dash"; // initialize geek
    }

    public static void main(String[] args) {
        Geeks name = new Geeks();

        System.out.println("Geek name is: " + name.geek);
        System.out.println("Default value for int is " + name.i);
        System.out.println("Default value for Integer is: " + name.I);
    }

}
