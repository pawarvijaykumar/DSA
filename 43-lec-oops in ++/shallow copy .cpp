
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
};

int main()
{
    Hero h1(100);

    // Shallow copy
    Hero h2 = h1;

    // Change h2
    *h2.health = 200;

    cout << "h1 health: " << *h1.health << endl;
    cout << "h2 health: " << *h2.health << endl;

    return 0;
}

/*
h1.health ──┐
            ↓
          [200]
            ↑
h2.health ──┘
Both pointers point to the same address.
*/