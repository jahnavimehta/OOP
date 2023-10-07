#include<iostream>
using namesace std;

class Human{
  public:
    int height;
    int weight;
  private:
    int age;

  public:
    int getAge(){
      return this -> age;
    }

    void setWeight(int w){
      this->weight = w;
    }
};

class Male: public Human{
  public:
    string color;

    void sleep(){
      cout << "Male Sleeping" << endl;
    }
};

int main(){
  Male object1;
  cout << object1.age << endl;   //INACESSIBLE
  
  return 0;
}
