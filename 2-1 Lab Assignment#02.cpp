    /*

    2-1 Lab Assignment#02 =>
    Stack and Queue all operations

    */

#include <iostream>
#include <stack>
#include <queue>

using namespace std;


    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */


void stackOperations(int size) {
    stack<int> myStack;
    int choice, value;

    do {
        cout << "\nStack Operations:\n";
        cout << "1. Push\n2. Pop\n3. Top\n4. Is Full?\n5. Is Empty?\n6. Display\n7. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (myStack.size() < size) {
                    cout << "Enter value to push onto the stack: ";
                    cin >> value;
                    myStack.push(value);
                } else {
                    cout << "Stack is full. Cannot push.\n";
                }
                break;

            case 2:
                if (!myStack.empty()) {
                    cout << "Popped " << myStack.top() << " from the stack.\n";
                    myStack.pop();
                } else {
                    cout << "Stack is empty. Cannot pop.\n";
                }
                break;

            case 3:
                if (!myStack.empty()) {
                    cout << "Top element of the stack: " << myStack.top() << endl;
                } else {
                    cout << "Stack is empty. No top element.\n";
                }
                break;

            case 4:
                if (myStack.size() == size) {
                    cout << "Stack is full.\n";
                } else {
                    cout << "Stack is not full.\n";
                }
                break;

            case 5:
                if (myStack.empty()) {
                    cout << "Stack is empty.\n";
                } else {
                    cout << "Stack is not empty.\n";
                }
                break;

            case 6:
                {
                    stack<int> tempStack = myStack;
                    cout << "Stack: ";
                    while (!tempStack.empty()) {
                        cout << tempStack.top() << " ";
                        tempStack.pop();
                    }
                    cout << endl;
                }
                break;

            case 7:
                break;

            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 7);
}

void queueOperations(int size) {
    queue<int> myQueue;
    int choice, value;

    do {
        cout << "\nQueue Operations:\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Front\n4. Is Full?\n5. Is Empty?\n6. Display\n7. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (myQueue.size() < size) {
                    cout << "Enter value to enqueue into the queue: ";
                    cin >> value;
                    myQueue.push(value);
                } else {
                    cout << "Queue is full. Cannot enqueue.\n";
                }
                break;

            case 2:
                if (!myQueue.empty()) {
                    cout << "Dequeued " << myQueue.front() << " from the queue.\n";
                    myQueue.pop();
                } else {
                    cout << "Queue is empty. Cannot dequeue.\n";
                }
                break;

            case 3:
                if (!myQueue.empty()) {
                    cout << "Front element of the queue: " << myQueue.front() << endl;
                } else {
                    cout << "Queue is empty. No front element.\n";
                }
                break;

            case 4:
                if (myQueue.size() == size) {
                    cout << "Queue is full.\n";
                } else {
                    cout << "Queue is not full.\n";
                }
                break;

            case 5:
                if (myQueue.empty()) {
                    cout << "Queue is empty.\n";
                } else {
                    cout << "Queue is not empty.\n";
                }
                break;

            case 6:
                {
                    queue<int> tempQueue = myQueue;
                    cout << "Queue: ";
                    while (!tempQueue.empty()) {
                        cout << tempQueue.front() << " ";
                        tempQueue.pop();
                    }
                    cout << endl;
                }
                break;

            case 7:
                break;

            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 7);
}

int main() {
    int choice, size;

    cout << "Enter the size for stack and queue: ";
    cin >> size;

    do {
        cout << "\nChoose data structure:\n";
        cout << "1. Stack\n2. Queue\n3. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                stackOperations(size);
                break;

            case 2:
                queueOperations(size);
                break;

            case 3:
                break;

            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 3);

    return 0;
}
