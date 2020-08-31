#include <iostream>
using namespace std;

void printArray(int a[],int x,int y)
{
    if(x!=y)
    {
        cout<<a[x]<<" ";
        printArray(a,x+1,y);
    }
}

int main()
{
    int n,i,x,y;
    cout<<"Enter the number of elements in an array : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements in an array : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Elements of an array are : "<<endl;
    x=0;
    y=n;
    printArray(a,x,y);
}