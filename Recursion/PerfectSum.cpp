#include<iostream>  // Target sum
using namespace std;
int perfectSum(int arr[],int index,int sum,int n) {
   if (index==n)return sum == 0;
    return perfectSum(arr,index+1,sum,n) + perfectSum(arr,index+1,sum-arr[index],n);
   }

int main() {
    int arr[] = {2,5,6,1};
    int sum = 8;
    cout<<perfectSum(arr,0,sum,4)<<endl;
}