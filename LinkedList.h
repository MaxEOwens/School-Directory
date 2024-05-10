#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <string>
#include <vector>
class Student;
class Teacher;
class Person
{
public:
  std::string name;
  std::string email;
};

class Student : public Person {
    std::vector<std::string> classes;
    void printInfo() const;

};
class Teacher : public Person {
public:
    std::string department;
    void printInfo() const;
};


class Node {
public:
    Person data;
    Person* pointer;
    Node* next;
    Node(Person person) : data(person), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList();
    ~LinkedList();
    void insert(Person person);
    void display() const;
};

#endif // LINKEDLIST_H