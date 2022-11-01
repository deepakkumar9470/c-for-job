/*****  Reverse a array *****/

// #include<iostream>

// using namespace std;

// void printRev(int arr[], int start, int end){

//     while (start < end)
//     {
//       int temp = arr[start];
//        arr[start] = arr[end];
//        arr[end] = temp;
//        start++;
//        end--;
//     }
    
// }

// void printArray(int arr[], int size)
// {
//    for (int i = 0; i < size; i++)
//    cout << arr[i] << " ";
 
//    cout << endl;
// }


// int main(){
  
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int n = sizeof(arr) /sizeof(arr[0]);
//     printArray(arr,n);

//     printRev(arr,0,n-1);

//        cout << "Reversed array is" << endl;
//        printArray(arr, n);
  

//     return 0;
// }



/*****  Reverse a string without affecting special characters *****/

// Explanation : Given a string, that contains a special character together with alphabets (‘a’ to ‘z’ and ‘A’ to ‘Z’), reverse the string in a way that special characters are not affected.
// Input :   'a,$bc' ----> Output:  'c,$ba'

// Approach : 1. create a temp character array  set temp[]
// 2. Copy alphabetic characters from the given array to temp

//C++ program to reverse string without
//affecting it's special character

// #include<iostream>
// using namespace std;
// void reverse(string s){
// 	//creating character array of size
// 	// equal to length of string
// 	char temp[s.length()];
// 	int x=0;
// 	for (int i = 0; i < s.length(); i++)
// 	{
// 		if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
// 			//storing elements in array
// 		temp[x]=s[i];
// 		x++;
// 		}
// 	}
	
//     //reversing the character array
// 	reverse(temp, temp+x);

// 	x=0;
// 	for (int i = 0; i < s.length(); i++)
// 	{
// 		if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
// 			//updating the original string
// 			s[i]=temp[x];
// 			x++;
// 		}
// 	}
// 	cout<<"reversed string is: "<<s;
	
// }


// int main() {
// string s="Ab,c,de!$";
// //function call
// reverse(s);
// return 0;
// }




