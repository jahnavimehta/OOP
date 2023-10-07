#include<iostream>
using namesace std;

class A {
   public:
   void sayHello(){
     cout << "Hello Jahnavi" << endl;
   }

   //number of input arguments changed
   int sayHello(string name, int n){
      cout << "Hello Jahnavi" << endl;
      return n;
   }

   //input argument datatype changed
   void sayHello(string name) {
     cout << "Hello" << name << endl;
   }
};

int main(){    
  A obj;
  obj.sayHello();
  
  return 0;
}
