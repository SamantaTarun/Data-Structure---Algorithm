/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
import java.util.*;
public class LinkedList{
    
    Node head;//head of the list
    
    static class Node{
        int data;
        Node next;
        
        Node(int d){
            data=d;
            next=null;
        }
    }


public static LinkedList insert(LinkedList list, int data){
    
    //Create a new node with given data
    Node new_node=new Node(data);
    new_node.next=null;
    
    //If the Linkedlist is empty
    //Then make the new node as head
    if(list.head==null){
        list.head=new_node;
    }
    else{
        Node last=list.head;
        while(last.next!=null){
            last=last.next;
        }
        
        //Insert the new node at last node
        last.next=new_node;
    }
    return list;
}

//Middle of the list 
public static Node Middle(LinkedList list){
      Node fast=list.head;
	  Node slow=list.head;
	  
	  while(fast!=null && fast.next!=null){
	      fast=fast.next.next;
		  slow=slow.next;
	      
	  }
	  return slow;
}
//Reversing the linked list
public static Node reverse(LinkedList list)
    {
        Node prev = null;
        Node current = list.head;
        Node next = null;
        while (current != null) {
            next = current.next;
            current.next = prev;
            prev = current;
            current = next;
        }
        list.head = prev;
        return list.head;
    }
//Print the linkd list
public static void printList(LinkedList list){
    
    Node currNode=list.head;
    while(currNode!=null){
        System.out.print(currNode.data+" ");
        currNode=currNode.next;
    }
}

	public static void main(String[] args) {
	   Scanner sc=new Scanner(System.in);
	   System.out.println("How many elements: ");
	   int n=sc.nextInt();
	   System.out.println("Enter the elements: ");
	   
	   LinkedList list=new LinkedList();
	   
	   for(int i=0;i<n;i++)
	   {
	       list=insert(list,sc.nextInt());
	   }
	   System.out.println("LinkedList is:");
	   printList(list);
	   System.out.println();
	   int k=Middle(list).data;
	   System.out.println("Middle of the list list: "+k);
	   
	   Node temp=reverse(list);
	   printList(list);
	}
}
