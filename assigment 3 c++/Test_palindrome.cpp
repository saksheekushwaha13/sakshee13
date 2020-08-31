#include<iostream>
#include<string.h>
using namespace std;

string testPalindrome(string s)
{
    int i,len;
    string s1;
    len=s.length();
    for(i=len-1;i>=0;i--)
    {
        s1.push_back(s[i]);
    }
    if(s==s1)
    {
        return "True";
    }
    else
        return "False";
}

int main()
{
    string s;
    cout<<"Enter the string : "<<endl;
    cin>>s;
    cout<<"\nString is palindrome ?  => "<<testPalindrome(s)<<endl;
}