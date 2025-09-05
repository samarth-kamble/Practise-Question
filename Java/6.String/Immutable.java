class Immutable {
    public static void main(String[] args) {
        String str = "Hello";
        str.concat(" World");
        System.out.println(str); // Output: Hello

        // The original string remains unchanged because strings are immutable in Java.
        String newStr = "h";
        newStr = "e";
        newStr = "l";
        newStr = "l";
        newStr = "o";
        System.out.println(newStr); // Output: o

        // StringBuilder is mutable

        StringBuilder sb = new StringBuilder("Tony");
        System.out.println(sb); // Output: Tony

        System.out.println(sb.charAt(0)); // Output: T

        sb.setCharAt(0, 'S');
        System.out.println(sb); // Output: Sony

        sb.insert(0, "Mr. ");
        System.out.println(sb); // Output: Mr. Sony

        sb.setCharAt(4, 'T');
        System.out.println(sb); // Output: Mr. Tony

        sb.delete(2, 3);
        System.out.println(sb); // Output: Mr. Tony

        sb.append(" Stark");
        System.out.println(sb); // Output: Mr. Tony Stark
    }

}