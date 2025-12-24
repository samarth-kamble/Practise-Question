package List;

import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        List<String> list = new ArrayList<>();

        list.add("Java");
        list.add("DSA");
        list.add("C++");

        System.out.println("List: ");
        for (String s : list) {
            System.out.println(s);
        }
    }
}
