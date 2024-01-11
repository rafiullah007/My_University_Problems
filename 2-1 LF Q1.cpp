/*
2-1 LF Q1 =>
Implement a text editor that uses a stack to manage changes made to the text, allowing
undo operations to revert the most recent action.
Suppose, your task is to design a stack-based data structure to perform the following
operations efficiently.
I. insert(text): Add the given text to the editor.
II. delete(): Remove the last character from the editor.
III. print(): Display the current text in the editor.
IV. undo(): Undo the last operation performed (insert or delete).

*/

#include<iostream>
#include<cstring>
using namespace std;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */

struct Node {
    char data;
    struct Node* link;
};

struct Node* top = NULL;

void push(char x) {
    struct Node* temp = new Node;
    temp->data = x;
    temp->link = top;
    top = temp;
}

void pop() {
    struct Node* temp;
    if (top == NULL) {
        cout << "Stack is empty" << endl;
    } else {
        temp = top;
        top = top->link;
        delete temp;
    }
}

void display() {
    struct Node* temp = top;
    if (temp == NULL) {
        cout << "Editor is empty" << endl;
        return;
    }
    cout << "Current text: ";
    while (temp != NULL) {
        cout << temp->data;
        temp = temp->link;
    }
    cout << endl;
}

void insert(const char* text) {
    int len = strlen(text);
    for (int i = 0; i < len; ++i) {
        push(text[i]);
    }
}

void deleteChar() {
    pop();
}

void undo() {
    pop(); ///undoing last element pop
}

int main() {
    int choice;
    char text[100];

    do {
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Print\n";
        cout << "4. Undo\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter text to insert: ";
                cin >> text;
                insert(text);
                break;
            case 2:
                deleteChar();
                break;
            case 3:
                display();
                break;
            case 4:
                undo();
                break;
            case 5:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
