package Lists;

import java.util.Stack;

public class Stacks {
    public static void main(String[] args) {
        Stack<Integer> stack = new Stack();
        stack.push(1);
        stack.push(2);
        stack.push(3);
        stack.push(4);
        stack.push(5);

        Integer removedElement = stack.pop();
        System.out.println("elemenet: "+ removedElement);

        Integer peekedElement = stack.peek();
        System.out.println("peeked: "+ peekedElement);

        System.out.println("Empty: " + stack.isEmpty());

        System.out.println("Size: " + stack.size());

        int searchElement = stack.search(3);
        System.out.println("searched: "+ searchElement);
    }
}
