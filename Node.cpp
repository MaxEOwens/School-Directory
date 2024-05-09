
#include "Node.h"

  // Constructors
  template <typename T>
  Node<T>::Node() {
    next = nullptr;
    prev = nullptr; 
  }

  template <typename T>
  Node<T>::Node(const T& data) {
    this->data = data;
    next = nullptr;
    prev = nullptr; 
  }

  // Getters and Setters
  template <typename T>
  Node<T>* Node<T>::getPrev() const {
    return prev;
  }

  template <typename T>
  void Node<T>::setPrev(Node<T>* newPrev) {
    prev = newPrev;
  }

  template <typename T> 
  Node<T>* Node<T>::getNext() const {
    return next;
  }

  template <typename T>
  void Node<T>::setNext(Node<T>* newNext) {
    next = newNext;
  }