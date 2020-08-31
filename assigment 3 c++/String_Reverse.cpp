#include<iostream>
#include<string>
using namespace std;
void StringReverse(string s,int a)
{
    int i,len;
    string s1;
    len=s.length();
    for(i=len-1;i>=a;i--)
    {
        s1.push_back(s[i]);
    }
    cout<<"Reverse string is : \n"<<s1<<endl;
};
int main()
{
    string s;
    cout<<"Enter the String : "<<endl;
    cin>>s;
    int a=0;
    StringReverse(s,a);
}