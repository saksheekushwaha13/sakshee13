#include <iostream>
using namespace std;
class student
{
public:
    void study()
    {
        cout << "i will study after 2 days" << endl;
    }
};
class undergraduationstudent : public student
{
public:
    void btech()
    {
        cout << "i am studying in GEU" << endl;
    }
};
class freshman : public undergraduationstudent
{
public:
    void motivation()
    {
        cout << "i will score good marks" << endl;
    }
};
class junior : public undergraduationstudent
{
public:
    void coding()
    {
        cout << "my program works" << endl;
    }
};
class senior : public undergraduationstudent
{
public:
    void coding()
    {
        cout << "what to do to get good marks" << endl;
    }
};
class graduationstudent : public student
{
public:
    void knowledge()
    {
        cout << "i want to get knowledge" << endl;
    }
};
class masterstudents : public graduationstudent
{
public:
    void master()
    {
        cout << "i am master of riding" << endl;
    }
};
class doctorstudent : public graduationstudent
{
public:
    void doctoral()
    {
        cout << "i will research for new subject" << endl;
    }
};

int main()
{
    junior j;
    j.btech();
    j.coding();
    j.study();
    doctorstudent a;
    a.doctoral();
    a.study();
}