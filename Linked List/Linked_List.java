// Java Program to practise the basics of Linked Lists in Java

import java.util.*; 
public class Linked_List{
    public static void main(String[] args){
        LinkedList<String> object=new LinkedList<String>();
        object.add("1");
        object.add("2");
        object.add("3");
        object.add("4");
        object.add(2,"5");
        System.out.println("**********After Insertion***********");
        System.out.println(object);
        object.clear();
        
        ////////////////////////////////////////////////////////////////
        
        object.add("A");
        object.add("B");
        object.add("C");
        object.add("D");
        System.out.println("**********After Insertion***********");
        System.out.println(object);
        
        object.remove("C");
        object.removeFirst();
        object.removeLast();
        
        System.out.println("*************After Deletion*************");
        System.out.println(object);
        
        object.add("E");
        object.add("F");
        object.add("G");
        object.add("H");
        System.out.println("**********After Insertion***********");
        System.out.println(object);
        
        System.out.println("Does the Linked List contain 'G' ? The answer: "+object.contains("G"));
        System.out.println("The Head Element of the Linked List: "+object.element());
        System.out.println("The element at the index 2 is: "+object.get(2));
        System.out.println("Size of linked list = " + object.size());
        object.set(2, "Y"); 
        System.out.println("Linked list after change : " + object);
    }
}
