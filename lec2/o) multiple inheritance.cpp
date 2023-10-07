#include<iostream>
using namesace std;

class Animal {
   public:
   int age;
   int weight;

   public:
   void bark(){
      cout<< "barking" << endl;
   }
};

class Human {
   public:
   string color;

   public:
   void speak() {
      cout << "speaking" << endl;
   }
};

//multiple inheritance
class Hybrid: public Animal, public Human{
};

int main(){  
  Hybrid obj1;
  obj1.speak(); //speaking
  obj1.bark(); //barking
  
  return 0;
}
