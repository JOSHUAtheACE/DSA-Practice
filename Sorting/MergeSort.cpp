#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int start,int end,int mid) {
    vector<int> temp(end-start+1);
    int left = start,right =mid+1,index=0;
    while (left<=mid && right<=end) {
        if (arr[left]<=arr[right]) {
            temp[index] = arr[left];
            index++;
            left++;
        }
        else {
            temp[index] = arr[right];
            right++;
            index++;
        }
    }
    while (left<=mid) {
        temp[index] = arr[left];
        index++;
        left++;
    }
    while (right<=end) {
        temp[index] = arr[right];
        index++;
        right++;
    }
    index = 0;
    while (start<=end) {
        arr[start] = temp[index];
        start++;
        index++;
    }
}
void mergeSort(int arr[],int start,int end) {
    if (start>=end)return;
    int mid = start + (end-start)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,end,mid);
}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8};
    mergeSort(arr,0,6);
    for (int i=0;i<7;i++)std::cout<<arr[i]<<" ";
}