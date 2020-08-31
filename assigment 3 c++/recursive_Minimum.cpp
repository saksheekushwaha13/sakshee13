#include <iostream>
#include <string>
using namespace std;

int recursiveMinimum (int a[],int x,int y)
{
    if(y ==1)
    {
        return a[x];
    }
    else
    {
        return min(a[y-1],recursiveMinimum(a,x,y-1));
    }
}


int main ()
{
    int n,x,y,i;
    cout<<"enter the size of array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter elements: "<<endl;
    for(i=0;i<n;i++){
      cin>>a[i];
    }
    x=0;
    y=n;
    cout<<"The minimum number in the array is : "<<recursiveMinimum(a,x,y)<<endl;
}