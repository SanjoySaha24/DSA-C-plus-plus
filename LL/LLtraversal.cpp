#include<bits/stdc++.h>
using namespace std;

// Linked List Node
struct Node 
{ 
    int data; // Data
    struct Node *next;  // Pointer
}; 

// This function prints contents of linked list 
// starting from  the given node 
void printList(Node *node) 
{ 
    while (node != NULL) 
    { 
        cout<<node->data<<" "; 
        node = node->next; 
    } 
} 

// Program to create a simple linked 
// list with 3 nodes 
int main() 
{ 
    struct Node* head = NULL; 
    struct Node* second = NULL; 
    struct Node* third = NULL; 
        
    // allocate 3 nodes in the heap 
    head = new Node; 
    second = new Node; 
    third = new Node; 
    

        
    head->data = 1; //assign data in first node 
    
    // Link first node with the second node
    head->next = second;  
        
 
    second->data = 2; 
    
    // Link second node with the third node 
    second->next = third; 
        
     
        
    third->data = 3; //assign data to third node 
    third->next = NULL; 
        
    
   
    printList(head);
    
    return 0; 
} 