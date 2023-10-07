#include<bits/stdc++.h>
using namespace std;

class Hero{
  private:
  int health;

  public:
  char level;

  // user declared default constructor
  Hero(){
    cout<< "constructor called" <<endl;

  void print(){
    cout<< level<< endl;
  }

  int getHealth(){
    return health;
  }

  char getLevel(){
    return level;
  }

  void setHealth(int h, char name){ //only authorized person i.e. J can access
    if(name == "J"){
      health = h;
    }
  }

  void setLevel(char ch){
    level = ch;
  }  
}

int main(){
  //object created statically
  Hero ramesh;  // default constructor called

  //object created dynamically
  Hero *h = new Hero;  // default constructor called
}
