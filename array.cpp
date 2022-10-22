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





/********** 2D Arrays  **********/
// 2 no of rows , 3 no of columns
//            1  2  3
//            4  6  0

// Priniting 2d array one element only
// int main(){

//     int arr[2][3] = {{1,2,3} , {4,6,0}};

//     cout<<arr[1][2];

//     return 0;
// }


// int main(){
     
//      int n,m;
//      cin>>n;
//      cin>>m;

//      int arr[n][m];

      
//       for (int i = 0; i < n; i++)
//       {
//           for (int j  = 0; j < m; j++)
//           {
//               cin>>arr[i][j];
//           }
          
//       }

//       // Printing 2d array

//       cout <<"2D Matrix is :" <<" ";

//       for (int i = 0; i < n; i++)
//       {
//           for (int j  = 0; j < m; j++)
//           {
//               cout<<arr[i][j]<<" ";
//           }
//           cout<<"\n";
//       }
      
//         // searching 


//            int x = 0;
//            bool flag= false;
//         for (int i = 0; i < n; i++)
//           {
//           for (int j  = 0; j < m; j++)
//           {
//               if(arr[i][j]==x){
//                 cout<< i <<" "<<j<<" ";
//                 flag = true;
//               }
//           }
       
//        }

//        if(flag){
//            cout<<"Element Found\n";
//        }else{
//            cout<<"Element Not Found\n";
//        }
      
           
//     return 0;
// }




/********** Pring 2d array in spiral **********/
            // --------------->
            // 1  2  3  4  5  6
            // 3  4  0  8  9  11
            // 9  8  7  7  4  0
            // 5  0  0  0  1  1
            // 7  2  2  3  1  12 
            // <----------------

 // Explanation : first print 1st row , then move down print last column
 //               then move left and print last row , then goes up and print
  //              1st column

 // We use 4 vaiables row_start, row_end, col_start, col_end
// loop use that ki row_start <= row_end aur col_start <= col_end


int main(){

    int n,m;
    cin>>n>>m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
           cin>>arr[i][j];
       }
       
    }

    int  row_start = 0 , row_end = n-1, col_start = 0, col_end = m-1;

    
    while (row_start <= row_end && col_start<=col_end){
          // row start
        for (int col = col_start; col<=col_end; col++)
            {
                cout<<arr[row_start][col]<<" ";
            }
            row_start++;


            // for col end 
            //we moved from start row and end to end row

             for (int row = row_start; row<=row_end; row++)
            {
                cout<<arr[row][col_end]<<" ";
            }
             col_end--;


             // for row end 
            //we moved from end col and end to start col

             for (int col = col_end; col>=col_start; col--)
            {
                cout<<arr[row_end][col]<<" ";
            }
             row_end--;
               
             // for col start 
            //we moved from end row and end to start row
            for (int row = row_end; row >= row_start; row--)
            {
                cout<<arr[row][col_start]<<" ";
            }
             
             col_start++;
            
    }
   
    
    
    
    return 0;
}


