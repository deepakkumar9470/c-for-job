#include<iostream>
#include<math.h>

using namespace std;

// int main(){

//     int arr[10];
//     arr[0] = 29;
//     arr[1] = 39;
//     arr[2] = 49;
//     arr[3] = 59;
//     // int arr[10]= {1,2,3,4,5,6,0,22,45,100};
//     // int arr[]= {1,2,3,4,5,6,0,22,45,100};
    
//     cout <<arr[2]<<endl;
//     return 0;
// }


// int main(){

//             int n;
//             cin>>n;
//             int arr[n];
//             cin>>arr[n];

//             for (int i = 0; i < n; i++)
//             {
//                 cout<<arr[i]<<endl;
//             }

//             for (int i = 0; i < n; i++)
//             {
//                 cout<<i<<endl;
//             }
            
            
//             return 0;
// }


// Reading array and priniing
// int main(){

//     int n = 5;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//        	cout<<"Enter the Number : "<< (i+1) <<"  : ";
//         cin>>arr[i];
//     }
    
//      cout<<"\nPrinting Array: \n";
//     for (int i = 0; i < n; ++i)
//     {
//         cin>>arr[i];
//     }
//     return 0;
// }



//int main(){
     
//     double arr[] = {11,22,33,44,55};
    

//     double sum = 0;
//     double average = 0;
//     double count = 0;
//     for(const double &n:  arr){
//         sum = sum + n;
//         ++count;
//     }

//     cout<< "The Sum of array is " << sum<<endl;

//      average = sum  / count;
  
    
//     cout<< "The Sum of array is " << average<<endl;
     


//     return 0;
// }

 

 /*****     Find max *****/
// int main(){

//     // int arr[] = {2,-4,0,9,12};
//     int mx = -199999;
//     int n ;

//      cin>>n;
//     int arr[n];


//     for (int i =0 ; i<n;i++)
//     {
//           cin>>arr[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//        mx = max(mx, arr[i]);
//        cout<<"Result:"<< mx<<endl;
//     }
    
    
//     return 0;
// }



 /*****  Sum of all subarrays *****/

//   int main(){
    
//     int n;
//     cin>>n;

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//            cin>>arr[i];
//     }

//      int current = 0;
//      for (int i = 0; i < n; i++)
//      {
//             current = 0;

//             for (int j = 1; j < n; j++)
//             {
//                current +=arr[j];
//                cout<< current <<endl;
//             }
            
//      }

//     return 0;
//  }



