#include<iostream>
using namespace std;

class Complex
{
friend Complex operator==(Complex const &,Complex const &);
friend Complex operator!=(Complex const &,Complex const &);
public:
Complex(int r=0,int i=0)
{
real=r;
img=i;
}
void print()
{
cout<<real<<" + i"<<img<<endl;
}


private:
int real,img;
};

Complex operator==(Complex const &obj1,Complex const &obj2)
{

return Complex(obj1.real == obj2.real, obj1.img == obj2.img);

}

Complex operator!=(Complex const &obj1,Complex const &obj2)
{

return Complex(obj1.real != obj2.real, obj1.img != obj2.img);

}



int main()
{
Complex c1(10,5),c2(1,0);
Complex c3 = c1 == c2;
Complex c4 = c1 != c2;
c1.print();
c2.print();
c3.print();
c4.print();

}