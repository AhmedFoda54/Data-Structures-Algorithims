#include "LinkedList.h"
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////

int main()
{
  LinkedList<int> L;	//create an object of class LinkedList
  int val;
  int count = 0;
  cout<<"\nPlease enter int values to add to the list (-1 to stop):\n";
  cin>>val;
  while(val != -1)
  {
    L.InsertBeg(val);
    cin>>val;
    count++;
  }
  L.PrintList();

/*
    // Code to test InsertEnd function
  cout<<"\nPlease enter int values to add to the end of the list (-1 to stop):\n";
  cin>>val;
  while(val != -1)
  {
    L.InsertEnd(val);
    cin>>val;
  }
  L.PrintList();
*/

/*
  // Code to test Find function
  cout<<"\nPlease enter a value to search for:\n";
  cin>>val;
  if(L.Find(val))
    cout<<val<<" is in the list\n";
  else
    cout<<val<<" is NOT in the list\n";
*/

/*
  // Code to test CountOccurance function
  cout<<"\nPlease enter a value to count its occurances:\n";
  cin>>val;
  cout<<val<<" occurs "<<L.CountOccurence(val)<<" times in the list\n";*/

/*
  // Code to test DeleteFirst function
  cout<<"\nBefore deleting first node:\n";
  L.PrintList();
  L.DeleteFirst();
  cout<<"\nAfter deleting first node:\n";
  L.PrintList();
*/
  
// complete getnodeat function 

/*
  // Code to test DeleteLast function
  cout<<"\nBefore deleting last node:\n";
  L.PrintList();
  L.DeleteLast();
  cout<<"\nAfter deleting last node:\n";
  L.PrintList();
*/

/*
 // Code to test Merge function
  LinkedList<int> L2;
  cout<<"\nPlease enter int values to add to the second list (-1 to stop):\n";
  cin>>val;
  while(val != -1)
  {
    L2.InsertEnd(val);
    cin>>val;
  }
  L2.PrintList();
  cout << "////////////" << endl;
  L.Merge(L2);
  L.PrintList();
*/
  
/*
  // Code to test Reverse function
  L.Reverse(count);
  cout<<"\nAfter reversing the list:\n";
  L.PrintList();
*/
/*
// Code to test Recursive sum
 
  cout << "Recursive sum is " << L.RecursiveSum() << endl;
*/
/*
// Code to test KTH elemnt
  int kt;
  cout << "please enter the index you want " << endl;
  cin >> kt;
  L.KthElement(kt);
*/

/*
// Code to test InsertSorted
  int va;
  cout << "insert the value to be added to the list " << endl;
  cin >> va;
  L.InsertSorted(va);
  cout << "after inserting the new element " << endl;
  L.PrintList();
*/

// Code to test the function RemoveMin
 cout << L.RemoveMin() << endl;
  L.PrintList();
}

