#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};
Node* createLinkedList(int arr[],int index,int size) {
    if (index==size)return NULL;
    Node *temp = new Node(arr[index]);
    temp->next = createLinkedList(arr,index+1,size);
    return temp;
}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    Node *head = createLinkedList(arr,0,size);
    Node *temp = head;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}