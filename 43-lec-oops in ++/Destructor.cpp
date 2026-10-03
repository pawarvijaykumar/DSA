#include <iostream>
using namespace std;

class Hero
{
private:
    int *health;

public:
static int vijay;

    // Constructor
    Hero(int h)
    {
        health = new int;
        *health = h;

        cout << "Constructor called" << endl;
    }

    // Destructor
    ~Hero()
    {
        delete health;

        cout << "Destructor called" << endl;
    }

    int getHealth()
    {
        return *health;
    }
};
int Hero::vijay=8;
int main()

   
{
  cout<<Hero::vijay<<endl;
    // Hero h1(100);

    // cout << "Health: " << h1.getHealth() << endl;

    return 0;
}

/*
When is the Destructor Called?

For a normal local object:

int main()
{
    Hero h1;

} // ← object goes out of scope here

When h1 goes out of scope, its destructor is automatically called.

You normally don't call the destructor yourself.
*/