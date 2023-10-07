class Animal {
   public:
   void speak(){
     cout << "Speaking: " << endl;
   }
};

class Dog: public Animal{
   public:
   void speak() {
       cout << "Barking " << endl;
   }
};

int main(){
   Dog obj;
   obj.speak(); //Barking
}

/************************************************************************************************************/
class Animal {
   public:
   void speak(){
     cout << "Speaking: " << endl;
   }
};

class Dog: public Animal{
   public:
   // not implemented
};

int main(){
   Dog obj;
   obj.speak(); // Speaking
}
