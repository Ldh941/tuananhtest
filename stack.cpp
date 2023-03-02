#include <iostream>

using namespace std;

// Định nghĩa một nút trong danh sách liên kết đơn
struct Node {
    int data;
    Node* next;
};

// Định nghĩa lớp Stack sử dụng danh sách liên kết đơn
struct Stack {
    Node* top; // con trỏ trỏ đến phần tử đầu tiên của stack
    // Khởi tạo stack trống
    Stack() {
        top = NULL;
    }

    // Thêm một phần tử vào đầu stack
    void push(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = top;
        top = newNode;
    }

    // Xóa phần tử đầu tiên của stack và trả về giá trị của phần tử đó
    int pop() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return -1;
        }
        int value = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return value;
    }

    // Kiểm tra xem stack có rỗng không
    bool isEmpty() {
        return top == NULL;
    }

    // Trả về giá trị của phần tử đầu tiên của stack mà không xóa nó
    int peek() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return -1;
        }
        return top->data;
    }

    // Hiển thị tất cả các phần tử trong stack
    void display() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return;
        }
        Node* temp = top;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack myStack;

    myStack.push(1);
    myStack.push(3);
    myStack.push(5);
    myStack.push(7);
    myStack.push(9);

    myStack.display(); // Hiển thị các phần tử trong stack: 9 7 5 3 1

    int topValue = myStack.peek(); // topValue = 9
    cout << "Top value: " << topValue << endl;

    int poppedValue = myStack.pop(); // poppedValue = 9
    cout << "Popped value: " << poppedValue << endl;

    myStack.display(); // Hiển thị các phần tử trong stack sau khi xóa phần tử đầu tiên: 7 5 3 1

    return 0;
}
