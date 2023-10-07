#include<bits/stdc++.h>
using namespace std;

class Hero{
  private:
  int health; // 4 bytes

  public:
  char level; // 1 byte

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
      health = h;
  }

  void setLevel(char ch){
    level = ch;
  }  
}

int main(){
  Hero ramesh;
  cout << "size of ramesh is: " << sizeof(ramesh) << endl; 
  /*
    expected = 4 + 1 = 5 bytes
    output = 8 bytes
  */
  cout<< "ramesh health is" << ramesh.getHealth() << endl;
}
