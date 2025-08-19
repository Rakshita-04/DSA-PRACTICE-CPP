#include <iostream>
using namespace std;

struct Node {
    int info;
    Node* next;
};

Node* head = NULL;

void insertAtLast(int value) {
    Node* temp;
    temp=(Node*)malloc(sizeof(Node));
    temp->info=value;
    temp->next = NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        Node* temp2=head;
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        temp2->next=temp;
    }
}

void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->info << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int n, value;
    cout << "Enter number of elements to insert at last: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value to insert at last: ";
        cin >> value;
        insertAtLast(value);
    }

    cout << "Linked list after inserting at Last:\n";
    display();

    return 0;
}
