class Hero{
  private:
  int health;

  public:
  char level;
  //char name[100] //not a good practice
  char *name;

  //default constructor
  Hero(){
    cout<< "default/ simple constructor called" <<endl;
    name = new char[100]; //dynamic allo in heap
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
  Hero(Hero& temp){ 
    //FIRST CREATE NEW CHAR ARRAY THEN COPY FROM IT
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
  //static
  Hero a;

  //dynamic
  Hero *b = new Hero();
  delete b; //for dynamic allo , call destructor manually
  
}
