package Lists;

import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

public class CopyOnWriteArrayLists {
    public static void main(String[] args) {
        CopyOnWriteArrayList<Integer> list = new CopyOnWriteArrayList<>();

        List<String> shoppingList = new CopyOnWriteArrayList<>();
        shoppingList.add("Milk");
        shoppingList.add("Eggs");
        shoppingList.add("Bread");
        System.out.println("Initial List: "+ shoppingList);

        for(String s : shoppingList){
            System.out.println(s);
            // Try to modify the list
            if(s.equals("Eggs")){
                shoppingList.add("Butter");
                System.out.println("Added a butter while reading");
            }
        }
        System.out.println("After adding a butter while reading" + shoppingList);
    }

}
