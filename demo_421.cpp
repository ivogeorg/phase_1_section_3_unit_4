#include<iostream>

class GrandDad{
    int age;
    protected:
      void run();
    public:
      void walk();
};

class Father: private GrandDad{
    int height;
    public:
      void sleep();
      void wake();
};
    
class You : public Father{
    int weight;
    public:
      void eat();
      void dance();
};

int main() {
    You Tom;

    Tom.sleep();
    Tom.weight; // ERROR: weight is private

    return 0;
}