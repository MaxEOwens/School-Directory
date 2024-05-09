#ifndef NODE_H
#define NODE_H

template <typename T>
class Node {

public:
  // Constructors
  Node();

  Node(const T& data);
  
  // Getters and Setters
  Node<T> *getPrev() const;

  void setPrev(Node<T> *newPrev);

  Node<T>* getNext() const;

  void setNext(Node<T>* newNext);

private:
  T data;
  Node<T>* next;
  Node<T>* prev;

};

#endif // NODE_H