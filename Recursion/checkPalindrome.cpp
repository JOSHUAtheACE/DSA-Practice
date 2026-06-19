#include<iostream>
using namespace std;
bool isPalindrome(string str, int start, int end) {
    if (start>=end) return true;
    if (str[start]==str[end])return isPalindrome(str,start+1,end-1);
    else return false;
}
int main() {
    string str;
    cout<<"Enter A string: ";
    cin>>str;
    if (isPalindrome(str, 0, str.length()-1))cout<<str<<" This is a Palindrome";
    else cout<<str<<" This is not a Palindrome";
}