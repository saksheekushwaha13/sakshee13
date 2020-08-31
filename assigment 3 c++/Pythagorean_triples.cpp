#include<iostream>
using namespace std;
int main()
{
    int ab,bc,ca,side1,side2,hypotenuse,sum=0,count=1;
        for(side1=0;side1<500;side1++)
        {
            ab=side1*side1;
            for(side2=side1+1;side2<500;side2++)
            {
                 bc=side2*side2;
                 sum=ab+bc;
                for(hypotenuse=side2+1;hypotenuse<500;hypotenuse++)
                {
                     ca=hypotenuse*hypotenuse;

                     if(sum==ca)
                     {
                         cout<<count<<"=>"<<"("<<side1<<","<<side2<<","<<hypotenuse<<")"<<endl;
                         count++;
                     }
                     if(ca>=sum)
                     {
                         break;
                     }
                }
            }
        }
}