#include<iostream>
void reverseArray(int arr[],int start,int end) {
    if (start>=end)return;
    std::swap(arr[start],arr[end]);
    reverseArray(arr,start+1,end-1);
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    reverseArray(arr,0,9);
    for (int i=0;i<10;i++)std::cout<<arr[i]<<" ";
}
