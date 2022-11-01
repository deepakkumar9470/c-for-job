#include<iostream>
#include <string>
using namespace std;


// Linear Search :
// Linear Search is defined as a sequential search algorithm that starts at one end and goes through each element of a list until the desired element is found, otherwise the search continues till the end of the data set. 
// It is the easiest searching algorithm

// Time Complexity  : o(n)


// int main(){

//     int arr [] = {2,5,8,1,0,9,10};

//     int n = sizeof(arr) /  sizeof(arr[0]);

//     int x = 10;


//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i] == x) {
//             cout<<"Element found"<< " "<<arr[i]<<"at index"<<i;
//         }
//     }
    
//     return -1;
// }



// Binary Search  :
// Binary Search is a searching algorithm used in a sorted array by repeatedly 
 //dividing the search interval in half. 
//The idea of binary search is to use the information that the array is sorted
//  and reduce the time complexity to O(Log n). 

// Time Complexity  : O(log n).


// Iterrative Way : 

// int binarySearch(int arr[], int l, int r, int x){

//     while (l<= r)
//     {

//         int mid = (l + r) /2; 
//         if(arr[mid] ==x) return mid;
//         else if(arr[mid] < x) l = mid +1;
//         else  r = mid - 1;
//         1;
//     }

//     return -1;
    
    
// }
// int main(){

//     int arr [] = {2,5,8,9,10};

//     int n = sizeof(arr) /  sizeof(arr[0]);

//     int x = 10;
    
//     int result = binarySearch(arr,0,n,x);
     
//     cout << "Element is present at index " << result;

//     return 0;
    

// }


