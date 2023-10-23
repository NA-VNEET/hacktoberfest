// C++ program to reverse a string using first to last approach 'for' loop

# include <bits/stdc++.h>
using namespace std;
 
// Function to reverse a string
void reverseStr(string& str){
    int i = 0;
    int e = str.size();
    while(i<e){
     swap(str[i],str[e]);
     i++;
     e--;
}
 
// Driver program
int main(){
    string str = "Hello World!";
    reverseStr(str);
    cout << str;
    return 0;
}
