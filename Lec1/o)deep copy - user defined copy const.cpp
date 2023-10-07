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

  //setter for name
  void setName(char name[]){
    strcpy(this->name, name);
  }
};

int main(){
  Hero hero1;
  
  hero1.setHealth(12);
  hero1.setLevel('D');
  char name[8] = "jahnavi";
  hero1.setName(name);  

  hero1.print();  //jahnavi

  //use default copy const
    //Hero hero2 = hero1; alternate notation
  Hero hero2(hero1);
  hero2.print();  //jahnavi


  hero1.name[0] = 'w';
  hero1.print();  //wahnavi

  hero2.print();  //wahnavi
}
