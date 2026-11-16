package Lists;

import java.util.*;

public class ArrayLists {
    public static void main(String[] args) {

        // 1. Creation of arrayList
        ArrayList<Integer> list = new ArrayList<Integer>();
        List<Integer> list2 = new ArrayList<Integer>();
        List<Integer>  list3 = new ArrayList<>();

        list.add(10);
        list.add(20);
        list.add(30);
        System.out.println(list);

        list.add(40);
        System.out.println(list);

        list.remove(0);
        System.out.println(list);

        // addAll
        list2.add(101);
        list2.add(102);
        list2.add(20);

        list.addAll(list2);
        System.out.println(list);

        list.removeAll(list2);
        System.out.println(list);

        System.out.println(list.size());

        System.out.println("Printing List2: " + list2);
        list2.clear();
        System.out.println(list2.size());

        // Traverse list using iterator
        Iterator iterator = list.iterator();
        while (iterator.hasNext()) {
            System.out.println("Element: " + iterator.next());
        }

        list3.add(11);
        list3.add(12);
        list3.add(14);

        System.out.println(list3.get(0));
        System.out.println("Before Set: " + list3);

        list3.set(0, 100);
        System.out.println("After Set: "+list3);

        // toArray
        Object[] array = list3.toArray();
        for(Object obj : array) {
            System.out.print(obj + " ");
        }
        System.out.println();

        // Contains
        System.out.println(list3.contains(100));   // true
        System.out.println(list3.contains(1009));   // false

        list.add(12);
        list.add(6);
        System.out.println("Printing Entire List: " + list);

        Collection<Integer> collection = new ArrayList<>();
        collection.add(50);
        System.out.println(collection);

        // Sort an arrayList
        Collections.sort(list);
        System.out.println(list);

        // Reverse an arrayList
        Collections.reverse(list);
        System.out.println(list);

        // Reverse and ArrayList
        System.out.println("List Before Sort: " + list3);
        list3.sort(Comparator.reverseOrder());
        System.out.println(list3);

        List<Integer> list4 = (ArrayList<Integer>) list.clone();
        System.out.println(list4);

        // Find value at what index
        System.out.println(list.indexOf(30));

        // isEmpty or not
        System.out.println(list.isEmpty());
    }
}
