
#include "ArrayStack.h"
#include"LinkedList.h"
#include <iostream>		//To use C++ console I/O functionality
            //, we need to include iostream which contains necessary declarations.

using namespace std;	//This statement enables us to use classes and objects in the standard C++ library
            //without prefixing them with "std::"

// This caod has 1 checkpoint [CheckPoint 1]
//Follow the provided instructions at each check point

//This is the program starting point.
class Car{
private:
  int carnum,enginenum;
public:
  Car(int c,int e){
    carnum = c;
    enginenum = e;
  }
void SetCar(int carn,int engnum){
  carnum = carn;
  enginenum = engnum;
}
void GetCar(){
  cout << "Car number is " << carnum << " Car engine number is " << enginenum << endl;
}
};


int main()
{


/* Example 2
  ArrayStack<Car*> S;
  Car car1(11,150);
  Car car2(12,350);
  Car car3(111,200);
  Car* ptr1 = &car1;
  Car* ptr2 = &car2;
  Car* ptr3 = &car3;
  S.push(ptr1);
  S.push(ptr2);
  S.push(ptr3);
  car1.GetCar();
  S.pop(ptr3);
  car2.GetCar();
  S.pop(ptr2);
  car3.GetCar();
  S.pop(ptr1);
*/
  LinkedList<int> stack;
  stack.push(10);
  stack.push(9);
  stack.push(1);
  stack.push(7);
  stack.push(13);
  stack.push(4);
  stack.push(9);
  stack.push(8);
  stack.push(2);
  stack.push(7);

stack.print();

}

