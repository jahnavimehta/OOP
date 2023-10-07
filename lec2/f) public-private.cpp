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

class Male: private Human{
  public:
    string color;

    void sleep(){
      cout << "Male Sleeping" << endl;
    }

    int getHeight() {
       return this->height; //public mem are accessible from child class
    }
};

int main(){
  Male object1;
  cout << object1.age << endl;   //INACESSIBLE

  cout<< m1.getHeight << endl; // ACCESSIBLE
  
  return 0;
}
