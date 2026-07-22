#include<iostream>
using namespace std;
int josephus(int n,int k) {
    if (n==1)return 0;
    return (josephus(n-1,k)+k)%n; //return index of winner as per original person list
}
int main() {
    cout<<josephus(5,2)<<endl;
}