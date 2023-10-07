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

  void setHealth(int h){
    health = h;
  }

  void setLevel(char ch){
    level = ch;
  }  
}

int main(){
  Hero ramesh;

  ramesh.health = 70;
  ramesh.level = 'A';
  
  cout << "health is: " << ramesh.health << endl; // error
  cout << "level is: " << ramesh.level << endl;  

  //access health via getter
  cout<< "ramesh health is" << ramesh.getHealth() << endl; //prints garbage value

  //set health via setter
  ramesh.setHealth(70);
  cout<< "ramesh health is" << ramesh.getHealth() << endl; //prints 70
}
