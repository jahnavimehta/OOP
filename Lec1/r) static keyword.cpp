class Hero{
  private:
  int health;

  public:
  char level;
  char *name;

  //default constructor
  Hero(){
    cout<< "default/ simple constructor called" <<endl;
    name = new char[100]; 
  }

  //parameterised contructor 1
  Hero(int health){
   cout<< "this ->" << this << endl; 
   this->health = health;
  }

  //parameterised contructor 2
  Hero(int health, char level){
   this -> level = level;
   this -> health = health;
  }    

  //user defined copy constructor
  Hero(Hero& temp){ 
    char *charArr = new char[strlen(temp.name) + 1];
    strcpy(charArr, temp.name);
    this->name = ch;
    
    cout<< "copy constructor called" << endl;
    this->health = temp.health;
    this->level = temp.level;
  }
    
  void print(){
    cout<<endl;   
    cout<< "[ name: " << this->name << " ,";
    cout<< "health: " << this->health << " ,";
    cout<< "level: " << this->level << "]";
    cout<< endl<< endl;
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

  void setName(char name[]){
    strcpy(this->name, name);
  }

//DESTRUCTOR
  ~Hero(){
    cout<< "Destructor bhai called" << endl;
  }
};



int main(){
  //correct convention
  cout << Hero::timeToComplete << endl;

  //gives same o/p but not preferred 
  //static members do not belog to object rather class
  Hero a;
  cout<< a.timeToComplete << endl;

  Hero b;
  b.timeToComplete = 10;
  cout<< a.timeToComplete << endl;
  cout<< b.timeToComplete << endl;  
}
