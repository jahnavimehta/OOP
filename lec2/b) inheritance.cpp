#include<iostream>
using namesace std;

class Human{
  private:
    int height;
    int weight;
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
  cout << object1.age << endl;   //garbage value
  cout << object1.weight << endl;  //garbage value
  cout << object1.height <<endl;  //garbage value
  
  cout<< object1.color << endl;  //garbage value
  object1.sleep();  // Male Sleeping

  object1.setWeight(84);
  cout << object1.weight << endl; //84
  
  return 0;
}
