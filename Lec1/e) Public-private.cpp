#include<bits/stdc++.h>
using namespace std;

class Hero{
//prop
  public:
  int health;
  private:
  char level;

//func
  void print(){
    cout<< level <<endl; //no error even tho private
  }
}

int main(){
  //creation of object
  Hero ramesh;

  ramesh.health = 70;
  ramesh.level = 'A';
  
  cout << "health is: " << ramesh.health << endl; // prints 70
  cout << "level is: " << ramesh.level << endl;  //error
}
}
