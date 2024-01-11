    /*

    2-1 Lab Assignment#01 =>
    Linked List Operations for Singly and Doubly Both:
    Insert (First, Last, Middle)
    Delete (First, Last, Middle)
    Traverse

    */

#include <iostream>

using namespace std;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */


struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

struct DoublyNode {
    int data;
    DoublyNode* next;
    DoublyNode* prev;
    DoublyNode(int value) : data(value), next(nullptr), prev(nullptr) {}
};

class SinglyLinkedList {
private:
    Node* head;

public:
    SinglyLinkedList() : head(nullptr) {}

    void insertFirst(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void insertLast(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            return;
        }
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }

    void insertMiddle(int value, int position) {
        Node* newNode = new Node(value);
        if (position == 0) {
            newNode->next = head;
            head = newNode;
            return;
        }
        Node* current = head;
        for (int i = 0; i < position - 1 && current; ++i) {
            current = current->next;
        }
        if (!current) {
            cout << "Invalid position for insertion." << endl;
            return;
        }
        newNode->next = current->next;
        current->next = newNode;
    }

    void deleteFirst() {
        if (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void deleteLast() {
        if (!head) {
            return;
        }
        if (!head->next) {
            delete head;
            head = nullptr;
            return;
        }
        Node* current = head;
        while (current->next->next) {
            current = current->next;
        }
        delete current->next;
        current->next = nullptr;
    }

    void deleteMiddle(int position) {
        if (!head) {
            return;
        }
        if (position == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* current = head;
        for (int i = 0; i < position - 1 && current->next; ++i) {
            current = current->next;
        }
        if (!current->next) {
            cout << "Invalid position for deletion." << endl;
            return;
        }
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }

    void traverse() {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

class DoublyLinkedList {
private:
    DoublyNode* head;

public:
    DoublyLinkedList() : head(nullptr) {}

    void insertFirst(int value) {
        DoublyNode* newNode = new DoublyNode(value);
        newNode->next = head;
        if (head) {
            head->prev = newNode;
        }
        head = newNode;
    }

    void insertLast(int value) {
        DoublyNode* newNode = new DoublyNode(value);
        if (!head) {
            head = newNode;
            return;
        }
        DoublyNode* current = head;
        while (current->next) {
            current = current->next;
        }
        newNode->prev = current;
        current->next = newNode;
    }

    void insertMiddle(int value, int position) {
        DoublyNode* newNode = new DoublyNode(value);
        if (position == 0) {
            newNode->next = head;
            if (head) {
                head->prev = newNode;
            }
            head = newNode;
            return;
        }
        DoublyNode* current = head;
        for (int i = 0; i < position - 1 && current; ++i) {
            current = current->next;
        }
        if (!current) {
            cout << "Invalid position for insertion." << endl;
            return;
        }
        newNode->next = current->next;
        newNode->prev = current;
        if (current->next) {
            current->next->prev = newNode;
        }
        current->next = newNode;
    }

    void deleteFirst() {
        if (head) {
            DoublyNode* temp = head;
            head = head->next;
            if (head) {
                head->prev = nullptr;
            }
            delete temp;
        }
    }

    void deleteLast() {
        if (!head) {
            return;
        }
        if (!head->next) {
            delete head;
            head = nullptr;
            return;
        }
        DoublyNode* current = head;
        while (current->next->next) {
            current = current->next;
        }
        delete current->next;
        current->next = nullptr;
    }

    void deleteMiddle(int position) {
        if (!head) {
            return;
        }
        if (position == 0) {
            DoublyNode* temp = head;
            head = head->next;
            if (head) {
                head->prev = nullptr;
            }
            delete temp;
            return;
        }
        DoublyNode* current = head;
        for (int i = 0; i < position - 1 && current->next; ++i) {
            current = current->next;
        }
        if (!current->next) {
            cout << "Invalid position for deletion." << endl;
            return;
        }
        DoublyNode* temp = current->next;
        current->next = current->next->next;
        if (current->next) {
            current->next->prev = current;
        }
        delete temp;
    }

    void traverse() {
        DoublyNode* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    int listType, choice, value, position, size;
    cout << "Enter the size for linked lists: ";
    cin >> size;

    do {
        cout << "\nChoose linked list type:\n";
        cout << "1. Singly Linked List\n2. Doubly Linked List\n3. Exit\nEnter your choice: ";
        cin >> listType;

        switch (listType) {
            case 1: {
                SinglyLinkedList singlyList;
                do {
                    cout << "\nSingly Linked List Operations:\n";
                    cout << "1. Insert\n2. Delete\n3. Traverse\n4. Exit\nEnter your choice: ";
                    cin >> choice;

                    switch (choice) {
                        case 1: {
                            cout << "Enter value to insert: ";
                            cin >> value;
                            cout << "1. Insert at first\n2. Insert at last\n3. Insert at middle\nEnter your choice: ";
                            cin >> position;

                            switch (position) {
                                case 1:
                                    singlyList.insertFirst(value);
                                    break;
                                case 2:
                                    singlyList.insertLast(value);
                                    break;
                                case 3:
                                    cout << "Enter position to insert at: ";
                                    cin >> position;
                                    singlyList.insertMiddle(value, position);
                                    break;
                                default:
                                    cout << "Invalid choice." << endl;
                                    break;
                            }
                            break;
                        }
                        case 2: {
                            cout << "1. Delete at first\n2. Delete at last\n3. Delete at middle\nEnter your choice: ";
                            cin >> position;

                            switch (position) {
                                case 1:
                                    singlyList.deleteFirst();
                                    break;
                                case 2:
                                    singlyList.deleteLast();
                                    break;
                                case 3:
                                    cout << "Enter position to delete from: ";
                                    cin >> position;
                                    singlyList.deleteMiddle(position);
                                    break;
                                default:
                                    cout << "Invalid choice." << endl;
                                    break;
                            }
                            break;
                        }
                        case 3:
                            cout << "Singly Linked List: ";
                            singlyList.traverse();
                            break;
                        case 4:
                            break;
                        default:
                            cout << "Invalid choice." << endl;
                    }
                } while (choice != 4);
                break;
            }
            case 2: {
                DoublyLinkedList doublyList;
                do {
                    cout << "\nDoubly Linked List Operations:\n";
                    cout << "1. Insert\n2. Delete\n3. Traverse\n4. Exit\nEnter your choice: ";
                    cin >> choice;

                    switch (choice) {
                        case 1: {
                            cout << "Enter value to insert: ";
                            cin >> value;
                            cout << "1. Insert at first\n2. Insert at last\n3. Insert at middle\nEnter your choice: ";
                            cin >> position;

                            switch (position) {
                                case 1:
                                    doublyList.insertFirst(value);
                                    break;
                                case 2:
                                    doublyList.insertLast(value);
                                    break;
                                case 3:
                                    cout << "Enter position to insert at: ";
                                    cin >> position;
                                    doublyList.insertMiddle(value, position);
                                    break;
                                default:
                                                                       cout << "Invalid choice." << endl;
                                    break;
                            }
                            break;
                        }
                        case 2: {
                            cout << "1. Delete at first\n2. Delete at last\n3. Delete at middle\nEnter your choice: ";
                            cin >> position;

                            switch (position) {
                                case 1:
                                    doublyList.deleteFirst();
                                    break;
                                case 2:
                                    doublyList.deleteLast();
                                    break;
                                case 3:
                                    cout << "Enter position to delete from: ";
                                    cin >> position;
                                    doublyList.deleteMiddle(position);
                                    break;
                                default:
                                    cout << "Invalid choice." << endl;
                                    break;
                            }
                            break;
                        }
                        case 3:
                            cout << "Doubly Linked List: ";
                            doublyList.traverse();
                            break;
                        case 4:
                            break;
                        default:
                            cout << "Invalid choice." << endl;
                    }
                } while (choice != 4);
                break;
            }
            case 3:
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (listType != 3);

    return 0;
}
