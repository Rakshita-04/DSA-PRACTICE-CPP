#include <iostream>
using namespace std;

struct Node {
    int info;
    Node* next;
};

Node* head = NULL;

void insertAtFirst(int value) {
    Node* temp = new Node;
    temp->info = value;
    temp->next = head;
    head = temp;
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
    cout << "Enter number of elements to insert at first: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value to insert at first: ";
        cin >> value;
        insertAtFirst(value);
    }

    cout << "Linked list after inserting at first:\n";
    display();

    return 0;
}
