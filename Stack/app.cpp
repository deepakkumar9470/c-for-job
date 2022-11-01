/**********  STACK **********/

// Stack is a linear data structure which follows a particular order in 
// which the operations are performed. The order may be LIFO(Last In First Out) or 
// FILO(First In Last Out). 
 // There are many real-life examples of a stack.

 // E.g:   Series of disks, women bangles, books and clothes, browsers etc.

 // Operations : Push, Pop, top, empty


#include<iostream>
#include<math.h>
#include <stack>
#include <algorithm>
using namespace std;

#define n 100

// 1. creating using stl method (stack)

// int main(){
    
//     // Create
//     stack <int> st;

//     // Add
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);

//     cout<<st.size();
//     // Delete
//     st.pop();

//     cout<<st.size();
     
//      // Check is empty
//      if(st.empty()){
//         cout<<"Stack is empty";
//      }else{
//          cout<<"Stack is full";
//      }
    
//     return 0;
// }



// 2. creating using array

// class Stack{
//      // Properties
//         public:
//             int top;
//             int size;
//             int *arr;

//      // Behaviour
//       Stack (int size){
//         this -> size = size;
//         arr = new int[size];
//         top = -1;
//       }

//      // Add function

//      void push(int x){
           
//            if(size - top>1){
//               top++;
//               arr[top] = x;
//            }else{
//             cout<<"Stack is overflow";
//            }

//      }

//       // Delete function

//      void pop(){
//           if(top >=0){
//             top--;
//           }else{
//             cout<<"Stack underflow";
//           }
        
//      }

//      int peek(){

//            if(top >=0){
//                    return arr[top];
//                 }else{
//                     cout<<"Stack is empty";
//                     return -1;
//                 }
//      }

//       // is empty function

//        bool isEmpty(){
//            if(top == -1){
//             return true;
//            }else{
//             return false;
//            }
//      }
// };

// int main(){

//       Stack st(5);
//       st.push(10);
//       st.push(20);
//       st.push(30);
 


//       cout<<st.peek()<<endl;


//       st.pop();

//       cout<<st.peek()<<endl;


      
//       if(st.isEmpty()){

//         cout << "Stack is empty";
//       }else{
//         cout<<"Stack is not empty";
//       }
      
     

    
   
    
//     return 0;
// }