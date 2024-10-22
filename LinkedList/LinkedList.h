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
  ~LinkedList()
  {
    DeleteAll();
  }

  /*
  * Function: PrintList.
  * prints the values of all nodes in a linked list.
  */
  void PrintList()	const
  {
    cout<<"\nprinting list contents:\n\n";
    Node<T> *p = Head;

    while(p)
    {
      cout << "[ " << p->getItem() << " ]";
      cout << "--->";
      p = p->getNext();
    }
    cout << "*\n";
  }

  /*
  * Function: InsertBeg.
  * Creates a new node and adds it to the beginning of a linked list.
  * 
  * Parameters:
  *	- data : The value to be stored in the new node.
  */
  void InsertBeg(const T &data)
  {
    Node<T> *R = new Node<T>(data);
    R->setNext(Head);
    Head = R;
  }

  /*
  * Function: DeleteAll.
  * Deletes all nodes of the list.
  */
  void DeleteAll()
  {
    Node<T> *P = Head;
    while (Head)
    {
      P = Head->getNext();
      delete Head;
      Head = P;
    }
  }
  Node<T>* GetNodeAt(int index){
    int ind = 0;
    Node<T> * ptr = Head;
    while(ind != index){
      ptr = ptr->getNext();
      ind++;
    }
    return ptr;
  }

  ////////////////     Requirements   ///////////////////
  //
  // Implement the following member functions


  //[1]InsertEnd 
  //inserts a new node at end if the list

  void InsertEnd(T da){
    Node<T>* ptr = Head;
    Node<T>* node = new Node<T>(da);
    if(Head == nullptr){
      Head = node;
    }
    else{
      if(ptr->getNext() != nullptr){
        ptr = ptr->getNext();
      }
      ptr->setNext(node);
    }
  }

  //[2]Find 
  //searches for a given value in the list, returns true if found; false otherwise.
  bool Find(T key){
    Node<T> *ptr = Head;
    if(Head == nullptr){
      return false;
    }
    else{
      while(ptr->getNext() != nullptr){
      if(ptr->getItem() == key){
        return true;
      }
      else{
        ptr = ptr->getNext();
      }
    }
      return false;
  }
}
  //[3]CountOccurance
  //returns how many times a certain value appeared in the list
   int CountOccurence(T key){
     Node<T> *ptr = Head;
     int count = 0;
     if(Head == nullptr){
       return 0;
     }
     else{
       while(ptr != nullptr){
         if(ptr->getItem() == key){
           count++;
           ptr = ptr->getNext();
         }
         else{
           ptr = ptr->getNext();
         }
       }
     }
     return count;
   }
  //[4] DeleteFirst
  //Deletes the first node in the list
  void DeleteFirst(){
    Node<T> * ptr = Head;
    if(Head == nullptr){
      exit(0);
    }
    else{
      
      Node<T> * no = ptr;
      ptr = ptr->getNext();
      Head = ptr;
      delete no;
    }
  }
  //[5] DeleteLast
  //Deletes the last node in the list
  void DeleteLast(){
    Node<T>* ptr = Head;
    if(Head == nullptr){
        exit(0);
    }
    else{
      while(ptr->getNext()->getNext() != nullptr){
        ptr = ptr->getNext();
      }
      Node<T>* nod = ptr->getNext()->getNext();
      ptr->setNext(nullptr);
      delete nod;
      
    } 
  }
  //[6] DeleteNode
  //deletes the first node with the given value (if found) and returns true
  //if not found, returns false
  //Note: List is not sorted
  bool DeleteNode(T key){
    Node<T>* ptr = Head;
    if(Head == nullptr){
      return false;
    }
  
    else{
      if(Head->getItem() == key){
        if(ptr->getNext() != nullptr){
          Head = ptr->getNext();
          return true;
        }
        else{
          Head = nullptr;
          return true;
        }
      }
      
      while(ptr->getNext() != nullptr){
        if(ptr->getNext()->getItem() == key){
          Head->setNext(ptr->getNext()->getNext());
          
          delete ptr->getNext();
          return true;
        }
        else if(ptr->getNext()->getNext() == nullptr){
          if(ptr->getNext()->getNext()->getItem() == key){
            ptr->getNext()->setNext(nullptr);
            delete ptr->getNext()->getNext();
            return true;
          }
          else{
            ptr = ptr->getNext();
          }
        }
      }
      return false;
      
    }
  }
  //[7] DeleteNodes
  //deletes ALL node with the given value (if found) and returns true
  //if not found, returns false
  //Note: List is not sorted

  //[8]Merge
  //Merges the current list to another list L by making the last Node in the current list 
  //point to the first Node in list L
   void Merge(LinkedList<T> k){
    Node<T>* ptr = Head;
    if(Head == nullptr){
      Head->setNext(k.Head);
    }
    else{
      while(ptr->getNext()->getNext() != nullptr){
        ptr = ptr->getNext();
      }
      ptr = ptr->getNext();
      ptr = k.Head;
      }
   }
/*
  //[9] Reverse
  //Reverses the linked list (without allocating any new Nodes)
  void Reverse(int count){
    Node<T>* ptr = Head;
    int index = 0;
    if(Head == nullptr){
      exit(0);
    }
    else{
      while(ptr->getNext() != nullptr && index <= count){
        
        ptr = ptr->getNext();
        ptr->setNext(GetNodeAt(index));
        index++;
      }
      Head = ptr;
      
      
    }
  }*/
/*
int RecursiveSum(){
  Node<T>* ptr = Head;
  int sum = 0;
  while(ptr->getNext() != nullptr){
    sum += ptr->getItem();
    ptr = ptr->getNext();
  }
  sum += ptr->getItem();
  return sum;
}*/


void KthElement(int k){
  if(k == 0)
    cout << "Beyond the list lenght" << endl;
  else{
    Node<T>* ptr = Head;
    if(Head == nullptr)
      cout << "Empty list " << endl;
    
    int count = 1;
    while(count != k){
      ptr = ptr->getNext();
      count++;
    }
    cout << ptr->getItem() << endl;
  }
}
/*
// Insert Node in Sorted list
bool InsertSorted(T data){
  Node<T>* ptr = Head;
  Node<T>* node = new Node<T>(data);
  if(Head == nullptr){
    Head = node;
    return true;
  }
  while(ptr->getNext() != nullptr){
    if(ptr->getItem() == data){
      return false;
    }
    else if(ptr->getItem() < data && ptr->getNext()->getItem() > data){
      node->setNext(ptr->getNext());
      ptr->setNext(node);
      return true;
    }
    else if(ptr->getItem() > data){
      node->setNext(ptr);
      Head = node;
      return true;
    }
    
    ptr = ptr->getNext();
  }
  if(ptr->getItem() == data){
    return false;
  }
  else if(ptr->getItem() < data){
    ptr->setNext(node);
    node->setNext(nullptr);
    return true;
  }
  return false;
}*/

// remove min Node
int RemoveMin(){
  Node<T>* ptr = Head;
  if(Head == nullptr){
    return -1;
  }
  else{
    int min = Head->getItem();
    while(ptr->getNext() != nullptr){
      if(ptr->getItem() < min){
        min = ptr->getItem();
        ptr = ptr->getNext();
      }
      else{
         ptr = ptr->getNext();
      }
     
    }
    if(ptr->getItem() < min){
      min = ptr->getItem();
    }
   DeleteNode(min);
   //Node<T>* pt = new Node<T>(min); 
    return min;
  }

  
}

};

#endif	
