#ifndef _NODE
#define _NODE

template <typename ItemType>
class Node {
 private:
  ItemType item;
  Node<ItemType>* next;

 public:
  Node();
  Node(const ItemType& anItem);
  Node(const ItemType& anItem,
       Node<ItemType>* nextNodePtr);

  void setItem(const ItemType& anItem);
  void setNext(Node<ItemType>* nextNodePtr);

  ItemType getItem() const;
  Node<ItemType>* getNext() const;
};

#include "Node.cpp"

#endif
