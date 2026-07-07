#include<iostream>
using namespace std;

int subset(int arr[],int index,int sum,int n) {
    if (sum<0 || index==n) return 0;
    if (sum==0) return 1;
    return subset(arr,index+1,sum,n) + subset(arr,index,sum-arr[index],n);
}

int main() {

    int arr[] = {2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<subset(arr,0,6,n)<<endl;
}