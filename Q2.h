#pragma once

/*
#include <iostream>
#include <string>
using namespace std;

// Double linked list node class
class Node {
public:
    string data;
    Node* prev;
    Node* next;

    Node(string value) {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

// Double linked list class
class DoubleLinkedList {
private:
    Node* head;
    Node* tail;
public:
    DoubleLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    bool is_empty() {
        return head == nullptr;
    }

    void push(string value) {
        Node* new_node = new Node(value);
        if (is_empty()) {
            head = new_node;
            tail = new_node;
        }
        else {
            new_node->prev = tail;
            tail->next = new_node;
            tail = new_node;
        }
    }

    string pop() {
        if (is_empty()) {
            return "";
        }
        string value = tail->data;
        if (head == tail) {
            delete tail;
            head = nullptr;
            tail = nullptr;
        }
        else {
            tail = tail->prev;
            delete tail->next;
            tail->next = nullptr;
        }
        return value;
    }

    string top() {
        return tail->data;
    }
};

bool is_operator(string ch, string infix, int pos_output) {
    if (ch == "A") {
        if (pos_output + 2 < infix.length() && infix[pos_output + 1] == 'B' && infix[pos_output + 2] == 'C') {
            return true;
        }
    }
    return ch == "+" || ch == "-" || ch == "*" || ch == "/" || ch == "%" || ch == "^" || ch == "A" || ch == "B" || ch == "C" || ch == "ABC";
}

int precedence(string op, string infix, int pos_output) {
    if (op == "/") {
        return 6;
    }
    else if (op == "*") {
        return 5;
    }
    else if (op == "%") {
        return 4;
    }
    else if (op == "^") {
        return 3;
    }
    else if (op == "+") {
        return 2;
    }
    else if (op == "A") {
        if (pos_output + 2 < infix.length() && infix.substr(pos_output, 3) == "ABC") {
            return 7;
        }
        else {
            return 1;
        }
    }
    else {
        return 0;
    }
}


int infix_to_postfix_A(string infix, char* outputStack, DoubleLinkedList& operatorStack) {
    int outputPos = 0;
    for (int i = 0; i < infix.length(); i++) {
        char ch = infix[i];
        if (ch == '(') {
            operatorStack.push("(");
        }
        else if (ch == ')') {
            for (; !operatorStack.is_empty() && operatorStack.top() != "("; ) {
                outputStack[outputPos++] = operatorStack.pop()[0];
            }
            if (!operatorStack.is_empty() && operatorStack.top() == "(") {
                operatorStack.pop();
            }
        }
        else if (is_operator(string(1, ch), infix, outputPos)) {
            string currentOp = "";
            currentOp += ch;
            if (ch == 'a' || ch == 'A') {
                currentOp += infix.substr(i + 1, 2);
                outputPos += 2;
                i += 2;
            }
            else if (ch == 'A') {
                currentOp += infix.substr(i + 1, 2);
            }
            for (; !operatorStack.is_empty() && precedence(operatorStack.top(), infix, outputPos) >= precedence(currentOp, infix, outputPos); ) {
                outputStack[outputPos++] = operatorStack.pop()[0];
            }
            operatorStack.push(currentOp);
        }
        else {
            // It is operand
            outputStack[outputPos++] = ch;
        }
    }
    for (; !operatorStack.is_empty(); ) {
        outputStack[outputPos++] = operatorStack.pop()[0];
    }

    cout << "Postfix expression: " << outputStack << endl;
    return outputPos;
}

*/