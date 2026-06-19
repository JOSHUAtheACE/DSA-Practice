#include<iostream>
#include <queue>
using namespace std;
int partiton(int arr[],int start,int end) {
    int pos = start;
    for (int i=start;i<=end;i++) {
        if (arr[i]<=arr[end]) {
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}
void quickSort(int arr[],int start,int end) {
    if (start>=end)return;
    int pivot = partiton(arr,start,end);
    quickSort(arr,start,pivot-1);
    quickSort(arr,pivot+1,end);
}
int main() {
    int arr[] = {5, 2, 8, 2, 1, 5, 7};
    quickSort(arr,0,6);
    for (int i=0;i<7;i++)std::cout<<arr[i]<<" ";
}
