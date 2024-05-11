#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

template <typename T>
class LinkedList {
public:
  // Constructor
  LinkedList();

  // Destructor
  ~LinkedList();

  // Add a new element to the linked list
  void add(const T& element);

  // Remove an element from the linked list
  void remove(const T& element);

  // Get the size of the linked list
  int size() const; 


  // Other member functions and data members
private:
  Node<T>* head;
  Node<T>* tail;
  int numElements;

};

#endif // LINKEDLIST_H