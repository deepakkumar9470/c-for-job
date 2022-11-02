/**********  QUEUE **********/

// Queue is a linear data structure in  which that is open at both ends
// .i.e operations are performed at both end, all additions to the lists
// at one end and all deletion from the lists at other end.
// Queue follows FIFO (First in first out).
// Add item at back , remove item from front.

// Time Complexity :  O(1)

#include<iostream>
#include<math.h>

#include <algorithm>
using namespace std;

// Queue implementation using Array

// class queue
// {
//            int *arr;
//            int front;
//            int back;
//            int size;  
//     public:
//        queue(int size){
//          this -> size = size;
//          arr = new int[size];
//          front = -1;
//          back = -1;
         
//        }    

    
//     // Operations

//     void push(int element){
//           if(back == size-1){
//             cout<<"Queue is full"<<endl;
//             return;
//           }

//           back++;
//           arr[back] = element;

//           if(front == -1){
//             front++;
//           }
//     }

//     void pop(){
//         if(front == -1 || front > back){
//             cout<<"No elements in Queue is empty"<<endl;
//             return;
//         }
//         front++;

//     }

//     int peek(){
//          if(front == -1 || front > back){
//             cout<<"No elements in Queue is empty"<<endl;
//             return -1;
//         }
          
//           return arr[front];
//     }

//     bool  empty(){
//            if(front == -1 || front > back){
//                     cout<<"No elements in Queue is empty"<<endl;
//                     return true;
//             }
//             return false;         
     
//   }

  
// };


// int main() {

//     queue q(5);
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);

//     cout<<q.peek()<<endl;
    
//     q.pop();

//        cout<<q.peek()<<endl;
    
//     return 0;
// }




// Queue implementation using Linkedlist