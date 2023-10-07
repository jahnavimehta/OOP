class Hero{
  private:
  int health;

  public:
  char level;

  //default constructor
  Hero(){
    cout<< "constructor called" <<endl;

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
  // statically
  Hero ramesh(10);  //parameterised contructor 1
  ramesh.print();
  
  // dynamically
  Hero *h = new Hero(12);  //parameterised contructor 1
  h->print();

  Hero temp(22, 'B'); ////parameterised contructor 2
  temp.print();
}
