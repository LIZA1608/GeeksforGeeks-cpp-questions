/*https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1*/

//{ Driver Code Starts
import java.util.*;
import java.lang.*;

class Node
{
    int data;
    Node next;
    Node(int key)
    {
        data = key;
        next = null;
    }
}

class ReverseInSize
{
    static Node head;
    
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int n = sc.nextInt();
            int a1 = sc.nextInt();
            Node head = new Node(a1);
            Node tail = head;
            for(int i = 1; i < n; i++)
            {
                int a = sc.nextInt();
                // addToTheLast(new Node(a));
                tail.next = new Node(a);
                tail =tail.next;
            }
            
            int k = sc.nextInt();
            Solution ob = new Solution();
            Node res = ob.reverse(head, k);
            printList(res);
            System.out.println();
        }
    }
    
    public static void printList(Node node)
    {
        while(node != null)
        {
            System.out.print(node.data + " ");
            node = node.next;
        }
    }
    
}


// } Driver Code Ends


/*node class of the linked list

class Node
{
    int data;
    Node next;
    Node(int key)
    {
        data = key;
        next = null;
    }
}

*/

class Solution
{
    public static Node reversek(Node head,Node knode){
        Node curr=head;
        Node prev=null;
          if(head==null || head.next==null){
            return head;
        }
        while(curr!=knode){
            head=curr.next;
            curr.next=prev;
            prev=curr;
            curr=head;
        }
        return prev;
    }
    public static Node reverse(Node node, int k)
    {
        //Your code here
        
        if(node==null){
            return node;
        }
        Node curr=node;
        for(int i=0;i<k;i++){
            if(curr==null){
                break;
            }
            curr=curr.next;
        }
            Node ans=reversek(node,curr);
            node.next=reverse(curr,k);
            return ans;
           
        }
         
}
