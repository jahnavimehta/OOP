class Hero{
  private:
  int health;

  public:
  char level;

  //default constructor
  Hero(){
    cout<< "constructor called" <<endl;

  //parameterised contructor
  Hero(int health){
   cout<< "this ->" << this << endl; //marker...
   this->health = health;
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
  //object created statically
  Hero ramesh(10); //param constructor called
  cout<< "address of ramesh" << &ramesh <<endl;  //marker...
  ramesh.getHealth();
  

  //object created dynamically
  Hero *h = new Hero(12);  // default constructor called
}
