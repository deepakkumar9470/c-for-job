#include<iostream>

using namespace std;


int main(){

            int i = 10;
            int j = 20;
                      
            // 10 //9   //20   //20  //11  //19  //11 //18
            // int k = i-- - i++ + --j  - ++j + --i - j-- + ++i - j++;
                    // 10 + //12 // 12 // 10  //10
            int k = i++ + ++i + i-- - --i + i++;
          
          cout<<i<<endl; // 10
        //   cout<<j<<endl; // 20
          cout<<k<<endl; // -20
  
    
    return 0;
}