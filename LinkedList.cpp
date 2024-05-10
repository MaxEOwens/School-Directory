#include "LinkedList.h"
using namespace std;
//constructor
LinkedList::LinkedList() : head(nullptr) {}

//deconstructor
LinkedList::~LinkedList() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

//newPerson
void LinkedList::insert(Person person) {
    Node* newNode = new Node(person);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

//default display
void LinkedList::display() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << "Name: " << temp->data.name <<endl;
        cout << "Email: " << temp->data.email << endl;
        if (dynamic_cast<Student*>(&temp->data)) {
            std::cout << "Classes: ";
            for (const auto& className : temp->data.classes) {
                std::cout << className << ", ";
            }
        cout << endl;
        temp = temp->next;
    }
}