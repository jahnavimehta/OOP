#include<bits/stdc++.h>
using namespace std;

class Hero{
  private:
  int health;

  public:
  char level;

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
  //static allocation
  Hero a;
  a.setHealth(80);
  a.setLevel('B');
  
  cout << "level is: " << a.level << endl;
  cout << "health is: " << a.getHealth() << endl;
  
  //dynamic allocation
  Hero *b = new Hero; 
  b->setHealth(70);
  a.setLevel('A');
  
  cout << "level is: " << (*b).level << endl;
  cout << "health is: " << (*b).getHealth() << endl; 
  //alternate notation
  cout << "level is: " << b->level << endl;
  cout << "health is: " << b->getHealth() << endl; 
}
