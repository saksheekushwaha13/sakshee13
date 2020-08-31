#include<iostream>
using namespace std;

class parking
{
private:
    double charges,minimum;
    int z;
public:
    double hours;
    double calculateCharges()
    {
        minimum=2.00;
        if(hours<=3 )
        {
            charges=minimum;
        }
        if(hours>3 && hours <=24)
        {
            charges=2.00;
            z=hours-3;
            for(int i=0;i<z;i++)
            {
                charges=charges+.50;
            }
        }
        if(charges>10.00)
        {
            charges=10.00;
        }
        return charges;
    }
    void input()
    {
        cout<<"Enter number of hours : "<<endl;
        cin>>hours;
    }
};

int main()
{
    parking p1,p2,p3,p4;
    p1.input();
    p2.input();
    p3.input();
    cout<<"car"<<"             "<<"Hours "<<"        "<<"Charge"<<endl;
    cout<<"1  "<<"             "<<p1.hours<<"             "<<p1.calculateCharges()<<endl;
    cout<<"2  "<<"             "<<p2.hours<<"             "<<p2.calculateCharges()<<endl;
    cout<<"3  "<<"             "<<p3.hours<<"             "<<p3.calculateCharges()<<endl;
    cout<<"Total"<<"           "<<p1.hours+p2.hours+p3.hours<<"             "<<p1.calculateCharges()+p2.calculateCharges()+p3.calculateCharges()<<endl;
}