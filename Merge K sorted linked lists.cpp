/*https://practice.geeksforgeeks.org/problems/merge-k-sorted-linked-lists/1*/


//{ Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

/* Function to print nodes in a given linked list */
void printList(Node* node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	cout<<endl;
}

// } Driver Code Ends
/*Linked list Node structure

struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/ 
class compare{
    public:
    bool operator()(Node* a ,Node* b){
        return a->data>b->data;
    }
};
class Solution{
  public:
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int K)
    {
           priority_queue<Node*,vector<Node*>,compare>mini;
           for(int i=0;i<K;i++){
               if(arr[i]!=NULL){
                   mini.push(arr[i]);
               }
           }
           Node* head=NULL;
           Node* tail=NULL;
           while(mini.size()>0){
               Node* temp=mini.top();
               mini.pop();
               if(temp->next!=NULL){
                   mini.push(temp->next);
               }
               if(head==NULL){
                   head=temp;
                   tail=temp;
               }
               else{
                   tail->next=temp;
                   tail=temp;
               }
           }
           return head;
    }
};
