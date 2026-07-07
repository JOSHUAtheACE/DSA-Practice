#include<iostream>  // Target sum
using namespace std;
bool find(int arr[],int n,int sum,int index,int target)
{
if(index==n)
{
    if (sum==target)return true;
    else return false;
}
if (find(arr,n,sum,index+1,target))return true;// No
sum+=arr[index];
if (find(arr,n,sum,index+1,target))return true;
    return false;//yes
}

int main(){
int arr[] = {3,4,5};
int n = sizeof(arr)/sizeof(arr[0]);
if (find(arr,n,0,0,12)==true)cout<<"TARGET found"<<endl;
    else cout<<"TARGET NOT FOUND"<<endl;
}