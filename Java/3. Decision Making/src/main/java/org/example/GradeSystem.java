package org.example;

import java.util.Scanner;

public class GradeSystem {
    public static void main(String[] args)
    {
        int day = 5;
        String dayString;

        // Switch statement with int data type
        switch (day) {

            // Case
            case 1:
                dayString = "Monday";
                break;

            // Case
            case 2:
                dayString = "Tuesday";
                break;

            // Case
            case 3:
                dayString = "Wednesday";
                break;

            // Case
            case 4:
                dayString = "Thursday";
                break;

            // Case
            case 5:
                dayString = "Friday";
                break;

            // Case
            case 6:
                dayString = "Saturday";
                break;

            // Case
            case 7:
                dayString = "Sunday";
                break;

            // Default case
            default:
                dayString = "Invalid day";
        }
        System.out.println(dayString);
    }
}
