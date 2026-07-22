#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next = NULL;
    Node(int value) {
        data = value;
    }
};
int main() {
    Node *HEAD = NULL;
    int arr[] = {1,2,3,4};
    for (int i=0;i<4;i++) {
        Node *temp;
        temp = new Node(arr[i]);
        temp->next = HEAD;
        HEAD = temp;
    }
    Node *temp = HEAD;
    while (temp!=NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}