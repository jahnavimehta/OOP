#include<iostream>
using namesace std;

class Human{
  protected:
    int height;
  public:
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

    int getHeight() {
       return this->height; //public mem are accessible from child class
    }
};

int main(){
  Male m1;
  cout << m1.height << endl;   //INACESSIBLE
  
  return 0;
}
