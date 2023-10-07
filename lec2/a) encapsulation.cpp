#include<iostream>
using namesace std;

class Student{
  private:
    string name;
    int age;
    int height;

  public:
    int getAge(){
      return this -> age;
    }
};

int main(){
  Student first;
  cout<< "working code" << endl;
  return 0;
}
