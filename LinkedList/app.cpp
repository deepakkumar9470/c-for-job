/**********  LinkedList  **********/
// Linked list are non contigious blocks of memory which are
// linked together using pointers. List list occupy a single small
// block of  memory and connect various such small blocks using pointers.

/***** Operations    *****/
// Insertion , Traversing , Deletion

#include<iostream>
#include<math.h>

#include <algorithm>
using namespace std;

// Create Linkedlist with node next

class Linkedlist{
     struct Node
     {
          int data;
          Node* next;

          Node(int val){
            data = val;
            next = NULL;
          }

     };

     Node *head, *tail;
     
     public:
        Linkedlist(){

            head = NULL;
            tail = NULL;
        }
        
      void insertionAtBeg(int data){
           Node *n = new Node(data);

           if(head==NULL){
                head = n;
                tail = n;

           }else{
            n->next = head;
            head = n;
           }
        }

        void insertAtLEnd(int data){
            Node *n = new Node(data);
            if(head == NULL){
                head = n;
            }else{
                Node *temp = head;
                while (temp->next !=NULL)
                {
                    temp = temp->next;
                }
                temp->next = n;
                
            }
        }

         void display(){
            if(head==NULL){
                cout<<"List is empty";
                return;
            }
            else{

                Node *temp = head;
                while (temp!=NULL)
                {
                    cout<<temp->data<<"->";
                   temp = temp->next;
                }
                cout<<"NULL"<<endl;
                
            }
         }
     
};




int main(){

    Linkedlist ll =  Linkedlist();
    
    ll.insertAtLEnd(11);
    ll.insertAtLEnd(12);
    ll.insertAtLEnd(13);
    ll.display();

    return 0;


}