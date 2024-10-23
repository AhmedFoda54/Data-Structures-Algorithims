#ifndef _LINKEDLIST
#define _LINKEDLIST

#include "Node.h"
#include <iostream>

using namespace std;

template <typename T>
class LinkedList
{
private:
  Node<T> *Head;	//Pointer to the head of the list
  //You can add tail pointer too (depending on your problem)

public:


  LinkedList()
  {
    Head = nullptr;
  }

  //List is being desturcted ==> delete all items in the list


bool IsEmpty(){
  if(Head == nullptr){
    return true;
  }
  return false;
}

void push(T val){
  Node<T>* node1 = new Node<T>(val);
  if(Head == nullptr){
    Head = node1;
  }
  else{
    node1->setNext(Head);
    Head = node1;
  }

}

void pop(){

  if(IsEmpty() == 1){
    exit(0);
  }
  else{
    Node<T>* ptr = Head;
    Head = ptr->getNext();
    delete ptr;
  }
}

T peek(){
  if(IsEmpty() == 1)
    return -1;
  return Head->getItem();
}

void print(){
  if(!IsEmpty()){
    Node<T>* ptr = Head;
    while(ptr->getNext() != nullptr){
      cout << ptr->getItem() << endl;
      ptr = ptr->getNext();
    }
    cout << ptr->getItem() << endl;
  }
  else{
    cout << "list is empty " ;
  }

}
};
#endif