#include<iostream>
using namesace std;

class Animal {
   public:
   int age;
   int weight;

   public:
   void speak(){
      cout<< "speaking" << endl;
   }
};

class Dog: public Animal{
};

class GermanShephard: public Dog{
};

int main(){  
  GermanShephard g;
  g.speak;
  cout<< g.age << endl;
  
  return 0;
}
