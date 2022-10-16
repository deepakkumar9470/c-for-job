#include<iostream>

using namespace std;
#include<math.h>
// int : return type add: function name int a, int b are parameters

// int add(int a, int b){
//     return a + b;
// }

// void greeting(){
//     cout<<"Hello Deepak Good evening"<<endl;
// }

// int main(){

//     // int a,b;
//     // cout<<"Enter a"<<endl;
//     // cin>>a;
//     // cout<<"Enter b"<<endl;
//     // cin>>b;
//     // cout<<"The sum of a , b is: "<<add(a,b)<<endl;
//     greeting();
//     return 0;
// }

// void add(int , int);



// int main(){

//     add(5,15);
//     return 0;
// }

// int add(int a, int b){
//     cout<<a+b<<endl;
// }


bool isPrime(int n){

    for (int i = 2; i <=sqrt(n); i++)
    {
        if(n % 2==0){
            return false;
        }
    }
    return true;
    
}

int main(){

   int a, b;
   cin>>a>>b;
   for (int i = a; i <=b; i++)
   {
       if(isPrime(i)){
          cout<<i<<endl;
       }
   }

}