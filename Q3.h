#pragma once

/*
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


class Node {
public:
    Node(std::string data) : data(data), next(nullptr) {}
    std::string data;
    Node* next;
};

class Stack {
public:
    Stack() : head(nullptr) {}
    ~Stack() {
        while (!is_empty()) {
            pop();
        }
    }
    bool is_empty() const {
        return head == nullptr;
    }
    void push(std::string data) {
        Node* new_node = new Node(data);
        new_node->next = head;
        head = new_node;
    }
    string top() const {
        if (is_empty()) {
            throw std::runtime_error("stack is empty");
        }
        return head->data;
    }
    void pop() {
        if (is_empty()) 
        {
            throw std::runtime_error("stack is empty");
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }
private:
    Node* head;
};

template <typename T>
class Queue {
public:
    void push(const T& value) {
        data.push_back(value);
    }

    T pop() {
        T value = data.front();
        data.erase(data.begin());
        return value;
    }

    const T& front() const {
        return data.front();
    }

    bool is_empty() const {
        return data.empty();
    }

private:
    vector<T> data;
};


class TPS {
public:
    void createNewDocument(const string& documentName) {
        currentDoc = documentName;
        ofstream file(documentName);
        file.close();
        myQueue.push(getDocumentText(currentDoc));
    }


    void addText(const string& text)
    {
        ofstream file(currentDoc, ios::app);
        if (!file.is_open()) {
            cout << "Error opening the file" << endl;
            return;
        }
        if (!getDocumentText(currentDoc).empty() && !text.empty()) {
            file << " ";
        }
        file << text;
        if (!text.empty() && (text.back() == '.' || text.back() == '\n') && !getDocumentText(currentDoc).empty()) {
            file << "\n";
        }
        file.close();
        myQueue.push(getDocumentText(currentDoc));
    }


    string getDocumentText(string documentName) {
        ifstream file(documentName);
        if (!file.is_open()) {
           // throw std::runtime_error("Unable to open file: " + documentName);
            cout << "Error" << endl;
        }

        string text = "";
        string line;
        while (getline(file, line)) {
            text += line + "\n";
        }

        file.close();

        // Remove the last newline character if it exists
        if (!text.empty() && text.back() == '\n') {
            text.pop_back();
        }

        return text;
    }

    void readDocument(const std::string& documentName) {
        currentDoc = documentName;
        ifstream file;
        file.open(documentName);

        std::string line;
        while (getline(file, line)) {
            addText(line + "\n");
        }

        file.close();
    }

private:
   string currentDoc;
   Queue<string> myQueue;
};

*/