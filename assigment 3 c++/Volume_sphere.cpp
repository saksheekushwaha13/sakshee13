#include<iostream>
using namespace std;

class sphere
{
private:
    double r,s;
    double pi;
public:
    inline double spherevolume()
    {
        pi=3.14;
        s=(4*pi*r*r*r)/3;
        return s;
    }
    void input()
    {
        cout<<"Enter the radius : "<<endl;
        cin>>r;
    }
};
int main()
{
    sphere v;
    v.input();
    cout<<"Volume of sphere is "<<v.spherevolume()<<endl;
    return 0;
}