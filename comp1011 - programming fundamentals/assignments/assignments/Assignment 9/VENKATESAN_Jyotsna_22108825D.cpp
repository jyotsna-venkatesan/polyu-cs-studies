#include <iostream>
using namespace std;

struct Linkedlist {
    int data;
    Linkedlist *next;
};

void printList(Linkedlist **head) {
    Linkedlist *current = *head;
    while (current != NULL) {
        cout << current -> data << " ";
        current = current -> next;
    }
    cout << endl ;
}

void addAtEnd(Linkedlist **head, int data) {
    Linkedlist *newNode = new Linkedlist;
    newNode -> data = data;
    newNode -> next = NULL;
    Linkedlist *current = *head;
    if (current == NULL) {
        *head = newNode;
    }
    else {
        while (current -> next != NULL) {
            current = current -> next;
            }
        current -> next = newNode;
    }
}

void addAtBeginning(Linkedlist **head, int value){
    Linkedlist *newNode = new Linkedlist;
    newNode -> data = value;
    newNode -> next = *head;
    *head = newNode;
};


bool deleteNthNode(Linkedlist **head, int n) {
    if (*head == NULL) {
        return false;
    }
    if (n == 1) {
        Linkedlist *temp = *head;
        *head = (*head) -> next;
        delete temp;
        return true;
    }
    Linkedlist *current = *head;
    for (int i = 1; i < n - 1; i++) {
        if (current -> next == NULL) {
            return false;
        }
        current = current -> next;
    }
    Linkedlist *temp = current -> next;
    current -> next = temp -> next;
    delete temp;
    return true;
}


int main() {
    Linkedlist *head = NULL;
    addAtEnd(&head, 4);
    addAtEnd(&head, 5);
    addAtEnd(&head, 6);
    printList(&head);
    addAtBeginning(&head, 3);
    addAtBeginning(&head, 2);
    addAtBeginning(&head, 1);
    printList(&head);
    deleteNthNode(&head, 3);
    printList(&head);
    deleteNthNode(&head, 1);
    printList(&head);
    deleteNthNode(&head, 1);
    printList(&head);
    deleteNthNode(&head, 3);
    printList(&head);
    deleteNthNode(&head, 2);
    printList(&head);
    return 0;
}
