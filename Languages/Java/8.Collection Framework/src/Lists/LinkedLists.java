package Lists;

import java.util.*;

public class LinkedLists {
    static void main() {

        // 1. Creation a LinkedList
        LinkedList<Integer> list = new LinkedList<Integer>();

        // 2. Adding a element in a list
        list.add(10);
        list.add(20);
        list.add(30);
        System.out.println(list);

        // 3. Remove the elements
        list.add(40);
        list.remove(0);
        System.out.println(list);

        // 4. Add all
        List<Integer> list2 = new ArrayList<>();
        list2.add(101);
        list2.add(102);
        list2.add(20);

        list.addAll(list2);
        System.out.println(list);

        // 5. Remove All
        list.removeAll(list2);
        System.out.println(list);

        // 6. Print a size of LinkedList
        System.out.println(list.size());

        // 7. Clearing a lis2
        System.out.println("Printing List2: "+ list2);
        list2.clear();
        System.out.println(list2.size());

        // 8. Iterator
        Iterator<Integer> iterator = list.iterator();
        while (iterator.hasNext()) {
            System.out.println("Elemets: " + iterator.next());
        }

        // 9. Get Method
        List<Integer> list3 = new LinkedList<>();
        list3.add(11);
        list3.add(12);
        list3.add(14);
        System.out.println(list3.get(0));

        // 10. Set Methods
        System.out.println("Before Set: " + list3);
        list3.set(0, 100);
        System.out.println("After Set: "+ list3);

        Collection<Integer> collection = new ArrayList<>();

        // 11. toArray
        Object[] arr = list3.toArray();
        for (Object o : arr) {
            System.out.println("Element : " + o);
        }

        // 12. Contains
        System.out.println(list3.contains(10009));


        // 13. Sort and LinkedList
        list.add(12);
        list.add(6);
        System.out.println(list);
        Collections.sort(list);
        System.out.println("Printing Entire List:" + list);

        ArrayList<Integer> marks = new ArrayList<>();
        marks.ensureCapacity(100);
        System.out.println(marks.isEmpty());
        System.out.println("Printing Original list: " + list);

        // 14. indexOf
        System.out.println(list.indexOf(40));

        // 15. Push Methods
        System.out.println("Printing Original list: " + list);
        list.push(9);
        System.out.println("Printing Original list: " + list);

        //16. Pop Methods
        list.pop();
        System.out.println(list);

        // Enginerring Digest
        System.out.println("---------------- Advaned Concept----------");
        LinkedList<Integer> linkedList = new LinkedList<>();
        linkedList.add(1);
        linkedList.add(2);
        linkedList.add(3);
        System.out.println(linkedList.get(2)); // O(n)
        linkedList.addLast(4); // O(1)
        linkedList.addFirst(0); // O(1)
        System.out.println(linkedList);
        System.out.println(linkedList.getFirst());
        System.out.println(linkedList.getLast());
        System.out.println(linkedList.removeIf(x -> x % 2 == 0));
        System.out.println(linkedList);

        LinkedList<String> animals = new LinkedList<>(Arrays.asList("Cat", "Dog", "Elephant"));
        LinkedList<String> animalsToRemove = new LinkedList<>(Arrays.asList("Cat", "Dog"));
        System.out.println("Before Remove: " + animals);
        animals.removeAll(animalsToRemove);

        System.out.println(animals);

    }
}
