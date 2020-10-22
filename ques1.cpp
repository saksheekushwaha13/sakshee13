#include <iostream>
using namespace std;
class pets
{
public:
    void whattodo()
    {
        cout << "Eat Sleep Repeat" << endl;
    }
};
class dogs : public pets
{
public:
    void woff()
    {
        cout << "woff!Let go for a walk Human!!" << endl;
    }
};
int main()
{
    dogs e;
    e.woff();
    e.whattodo();
}
