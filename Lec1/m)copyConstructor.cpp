class Hero{
  private:
  int health;

  public:
  char level;

  //default constructor
  Hero(){
    cout<< "default/ simple constructor called" <<endl;
  }

  //parameterised contructor 1
  Hero(int health){
   cout<< "this ->" << this << endl; //marker...
   this->health = health;
  }

  //parameterised contructor 2
  Hero(int health, char level){
   this -> level = level;
   this -> health = health;
  }    

  //user defined copy constructor
  // Hero(Hero temp){
  //   this->health = temp.health;
  //   this->level = temp.level;
  // } //error
  Hero(Hero& temp){ //pass by reference to save from infinite loop
    cout<< "copy constructor called" << endl;
    this->health = temp.health;
    this->level = temp.level;
  }
    
  void print(){
    cout<< "health: " << this-.health << endl;
    cout<< "level: " << this->level << endl;
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
  /*
  Hero suresh;
  suresh.setHealth(70);
  suresh.setLevel('A');
  alternate way to insitialize..via parameterised constr
  */
  Hero suresh(70, 'C');
  suresh.print();
  
  Hero ritesh(suresh); //copy const called
  ritesh.print();

  /* 
    ritesh.health = suresh.health;
    ritesh.level = suresh.level;
    this lines are written above in a compact way
  */
  
}
