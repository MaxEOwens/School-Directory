#ifndef NODE_H
#define NODE_H


class Node {

public:
  // Constructors
  Node(){
    next = nullptr;
    prev = nullptr;
  }
  
  // Getters and Setters
  Node *getPrev() {
    return prev;
  }

  void setPrev(Node *newPrev) {
    prev = newPrev;
  }

  Node* getNext() {
    return next;
  }

  void setNext(Node* newNext){  
    next = newNext;
  }

  int getData() {
    return data;
  }

  void setData(const int& newData){
    data = newData;
  }


private:
  int data;
  Node* next;
  Node* prev;

};


#endif // NODE_H