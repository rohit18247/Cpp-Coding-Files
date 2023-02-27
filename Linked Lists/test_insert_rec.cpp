#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }

    ~Node() {
        delete next;
    }
};

Node *insertRecursively(Node *head) {
    int data;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    Node *newNode = new Node(data);
    if (head == NULL) {
        return newNode;
    }

    head->next = insertRecursively(head->next);
    return head;
}

void printList(Node *head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node *head = NULL;
    head = insertRecursively(head);
    printList(head);
    delete head;
    return 0;
}

