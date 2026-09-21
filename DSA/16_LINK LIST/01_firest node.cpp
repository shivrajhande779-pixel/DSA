#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    // Create a linked list with n nodes
    struct Node {
        int data;
        Node* next;
    };

    Node* head = nullptr;
    Node* temp = nullptr;

    for (int i = 0; i < n; ++i) {
        Node* newNode = new Node();
        cout << "Enter data for node " << i + 1 << ": ";
        cin >> newNode->data;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = temp->next;
        }
    }

    // Display the linked list
    cout << "The linked list is: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Free allocated memory
    temp = head;
    while (temp != nullptr) {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }

    return 0;
}