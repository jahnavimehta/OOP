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

class Male: protected Human{
  public:
    string color;

    void sleep(){
      cout << "Male Sleeping" << endl;
    }

    int getHeight() {
       return this->height; //protected mem are accessible from child class
    }
};

int main(){
  Male m1;
  cout << m1.age << endl;   //INACESSIBLE

  cout<< m1.getHeight << endl; //ACCESSIBLE, prints garbage value;
  
  return 0;
}
