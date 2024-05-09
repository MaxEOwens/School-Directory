#ifndef LINKEDLIST_H
#define LINKEDLIST_H

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


  // Other member functions and data members can be added here


private:
  // Private data members can be added here
};






#endif // LINKEDLIST_H