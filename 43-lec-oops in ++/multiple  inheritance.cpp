
/*
One child has multiple parents.
      
      Father       Mother
         \           /
          \         /
           ↓       ↓
             Child*/

#include <iostream>
using namespace std;

class Father
{
public:
    void money()
    {
        cout << "Father's money" << endl;
    }
};

class Mother
{
public:
    void house()
    {
        cout << "Mother's house" << endl;
    }
};
//multiple inheritance
class Child : public Father, public Mother
{
public:
    void play()
    {
        cout << "Child is playing" << endl;
    }
};

int main()
{
    Child c;

    c.money();   // Father
    c.house();   // Mother
    c.play();    // Child

    return 0;
}