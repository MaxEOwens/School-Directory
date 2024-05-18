#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <string>
#include <typeinfo>
#include <iostream>
#include <cassert>
#include "Node.h"


class LinkedList {
public:
  // Constructor
  LinkedList(){
    std::cout << "LinkedList::LinkedList()" << std::endl;
    Node * headPtr = new Node;
    std::cout << "headPtr created" << std::endl; 
    std::cout << headPtr << std::endl;
    
    Node * tailPtr = new Node;
    std::cout << "tailPtr created" << std::endl;
    std::cout << tailPtr << std::endl;

    headPtr->setNext(tailPtr);
    std::cout << "headPtr->setNext(tailPtr)" << std::endl;
    std::cout << headPtr->getNext() << std::endl;

    tailPtr->setPrev(headPtr);
    std::cout << "tailPtr->setPrev(headPtr)" << std::endl;
    std::cout << tailPtr->getPrev() << std::endl;

    // Testing setData function
    // headPtr->setData(0);
    // std::cout << "headPtr->setData(0)" << std::endl;
    // std::cout << "headPtr->getData() = " << headPtr->getData() << std::endl;
    // tailPtr->setData(1);
    // std::cout << "tailPtr->setData(1)" << std::endl;
    // std::cout << "tailPtr->getData() = " << tailPtr->getData() << std::endl;
    // ------------------------

    numElements = 0;
    std::cout << "numElements = 0" << std::endl;
  }



  // Destructor
  ~LinkedList(){
    std::cout << "LinkedList::~LinkedList()" << std::endl;

    Node* next;
    Node* current = headPtr;

    for (int i = 0; i < numElements; i++) {
      next = current->getNext();
      delete current;
      current = next;
    }
    delete tailPtr;
  }



  // Add a new element to the linked list
  void push_back(int element){
    std::cout << "LinkedList::push_back(" << element << ")" << std::endl;
    std::cout << "numElements = " << numElements << std::endl;

    std::cout << headPtr << std::endl;
    std::cout << tailPtr << std::endl;

    if (numElements == 0){ 
      headPtr->setData(element);
      std::cout << "headPtr->setData(" << element << ")" << std::endl;
      numElements++;
      std::cout << "numElements++" << std::endl;

    } else if (numElements == 1){ 
      tailPtr->setData(element);
      std::cout << "tailPtr->setData(" << element << ")" << std::endl;
      numElements++;
      std::cout << "numElements++" << std::endl;

    } else { 
      Node* newNode = new Node;
      newNode->setData(element);

      newNode->setPrev(tailPtr);
      // newNode->setNext(nullptr);
      tailPtr->setNext(newNode);
      tailPtr = newNode;
      numElements++;
    }
  }



  // Get the size of the linked list
  int size() const{
    return numElements; 
  }



  // Print the linked list
  void print() const{
    Node * current = headPtr;
    for (int i = 0; i < numElements; i++) {
      std::cout << current->getData() << std::endl;
      current = current->getNext();
    }
  }


  // Other member functions and data members


private:
  Node* headPtr;
  Node* tailPtr;
  int numElements;

};


#endif // LINKEDLIST_H