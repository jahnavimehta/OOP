#include<iostream>
using namesace std;

class A {
   public:
   // default working of plus operator
   int add() {
     return a+b;
   }

   //operator overloading of plus operator - making plus perform subtraction
   void operator+ (B &obj){
     int value1 = this->a;
     int value2 = obj.a;
     cout << "output" << value2 - value1 << endl;
   }

  //operator overloading of plus operator - making plus perform printing statement :)
  /*
   void operator+ (B &obj){
     cout << "plus operator rocks!" << endl;
   }
  */

 //overloading parenthesis operator to print statement
  void operator() (){
     cout<< "Bracket or parenthesis rocksss!" << this->a <<  endl;
  }     
};

int main(){    
  B obj1, obj2;

  obj1.a = 4;
  obj2.a = 7;

  obj1 + obj2; //plus opertaor overloaded

  obj1() //parenthesis operator overloaded
  
  return 0;
}
