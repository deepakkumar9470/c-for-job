#include<iostream>
#include<string>
#include<algorithm>

// #include <functional.h>

using namespace std;


// Operations on string append,substr,sort,length,compare etc
// int main(){

    // string s1 = "Deepak";
    // string s = "edbsca";
    // string s2 = "Kumar";
    // string s3 = "123456";
    // int s4 = 123456;
    // string s5 = "Deepak";
    // string s6 ;
    // string s7 = "Deepak Kumar" ;


    // Accessing the string let D
    //  cout<<s5[0];

    // user input string
    // getline(cin,s6);
    // cout<<"Your name is: "<< s6;

    //find from string return start index when match return 3
    // means find from 3rd index
    // cout<<s7.find("pak")<<endl; 


    // Insert between string
    // cout<<s7.insert(12, "Chouhan");
    
    // s1.append(s2);
    // if(!s1.compare(s2))
    // cout<<" "<<"Strings are equal"<<" ";
    // else
    //  cout<<" "<<"Strings are not equal"<<" ";

    //  string res = (s1+s2).length();
    //   cout<<"String length is :"<<(s1+s2).length();

    
    // string res = s1.substr(0,3); start from index 0 end with index 2
    // cout<<res;

    //converting to number
    // cout<<stoi(s3)<<endl;


     //converting to string
    //  cout<<to_string(s4)<<endl;
    // return 0 ;
// }











/********** Given a string then convert into uppercese or 
lowercase of whole string **********/

// By using built in method

// int main(){

//      string s1 = "deepak kumar chouhan";
//      string s2 = "deepak kumar chouhan";
    
//      transform(s1.begin(), s1.end(), s1.begin(), ::toupper); 
//      cout<<s1<<endl;


//       transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
//       cout<<s2<<endl;
     
//     return 0;
// }




// By using for loop
// int main(){

//      string s = "deepakkumar";
//     //  cout<<'a' - 'A'; // 32 means a ahead by 32 from A

//      for (int i = 0; i < s.size(); i++)
//      {
//            if(s[i] >='a' && s[i] <='z'){
//              s[i] -=32;
//            }
//      }

//  cout<<s<<endl;
//  for (int i = 0; i < s.size(); i++)
//      {
//            if(s[i] >='A' && s[i] <='Z'){
//              s[i] +=32;
//            }
//      }
//      cout<<s<<endl;
     
//     return 0;
// }






/********** Find the biggest number from numeric string **********/

// By using greater<int> in descending order


// int main(){

//      string s = "234567";

//      sort(s.begin(), s.end(), greater<int>());

//      cout<<s<<endl;

//      return 0;

// }


/********** Find the frequency (count) of character of string **********/


// int main(){

//      string s = "abcabsddefgdd";

//      int freq[26];

//      for (int i = 0; i < 26; i++)
//      {
//          freq[i] = 0;
//      }
      
//      for (int i = 0; i < 26; i++)
//      {
//            freq[s[i] - 'a']++;
//      }
//             char ans = 'a';
//            int max = 0;
//      for (int i = 0; i < s.size(); i++)
//      {
          
//            if(freq[i] >  max){
//                 max = freq[i];
//                 ans = i + 'a';
//            }
//      }
     

      

//      cout<<max<<" "<<ans<<endl;

//      return 0;

// }



