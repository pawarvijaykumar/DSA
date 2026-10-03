#include <iostream>
using namespace std;

class Hero
{
public:
    int *health;

    Hero(int h)
    {
        health = new int;
        *health = h;
    }

    // Deep copy constructor
    Hero(const Hero &obj)
    {
        health = new int;
        *health = *(obj.health);
    }
};

int main()
{
    Hero h1(100);

    // Deep copy
    Hero h2 = h1;

    // Change h2
    *h2.health = 200;

    cout << "h1 health: " << *h1.health << endl;
    cout << "h2 health: " << *h2.health << endl;

    return 0;
}
//h1 health: 100
//h2 health: 200