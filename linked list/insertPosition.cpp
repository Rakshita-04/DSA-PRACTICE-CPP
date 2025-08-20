#include <iostream>
using namespace std;

struct Node {
    int info;
    Node* next;
};

Node* head = NULL;

void insertAtPosition(int v, int p) {
    Node* temp = new Node();
    temp->info = v;
    temp->next = NULL;

    if (p == 1) {
        temp->next = head;
        head = temp;
    } else {
        Node* temp2 = head;
        for (int i = 1; i < p - 1 && temp2 != NULL; i++) {
            temp2 = temp2->next;
        }
        if (temp2 == NULL) {
            cout << "Invalid position" << endl;
            delete temp;
            return;
        }
        temp->next = temp2->next;
        temp2->next = temp;
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
    int n, value, pos;
    cout << "Enter number of elements to insert: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value and position: ";
        cin >> value >> pos;
        insertAtPosition(value, pos);
    }

    cout << "Linked list after inserting:\n";
    display();

    return 0;
}
