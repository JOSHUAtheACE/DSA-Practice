#include<iostream>
using namespace std;
class Node {
    public:
    Node *next;
    int data;
    Node(int value) {
        data = value;
        next = NULL;
    }
};
int main() {
    Node *HEAD = NULL;
    Node *TAIL = NULL;
    int arr[] = {2,4,6,8,10};
    for(int i = 0; i < 5; i++) {
        if (HEAD == NULL) {
            HEAD = new Node(arr[i]);
            TAIL = HEAD;
        }
        else {
                TAIL->next = new Node(arr[i]);
                TAIL = TAIL->next;
        }
    }
Node *temp = HEAD;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}