#include<iostream>
using namesace std;

class A {
   public:
   void func(){
     cout << "I am A << endl;
};

class B: public A {
   public:
   void func(){
     cout << "I am B" << endl;
};

class C: public A, public B {
};

int main(){  
  C obj;
  obj.func();  //ERROR- inheritance ambiguity

 //ambiguity resolved
  obj.A::func() // I am A
  obj.B::func() // I am B  
 
  return 0;
}
