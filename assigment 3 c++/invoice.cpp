#include<iostream>
#include<string>
using namespace std;

class Invoice
{
private:
    string partNum,partDes;
    int quantity,price;
    int invoiceamount,r;
public:
    Invoice(string a,string b,int c,int d){
    partNum=a;
    partDes=b;
    quantity=c;
    price=d;
    }

    void setPartNum(string a){
    partNum=a;
    }
    string getPartNum()
    {
    return partNum;
    }

    void setPartDes(string b){
    partDes=b;
    }
    string getPartDes()
    {
    return partDes;
    }

    void setquantity(int c){
    quantity=c;
    }
    int getquantity(){
    return quantity;
    }

    void setprice(int d){
    price=d;
    }
    int getprice(){
    return price;
    }



    int getinvoiceamount()
    {
        if(quantity<0 || price<0)
        {
            r=0;
        }
        else
        {
            r=quantity*price;
        }
        return r;
    }

};
int main()
{
    Invoice g1("X","Good for X part",3,100);
    Invoice g2("Y","Essential part",0,100);
    Invoice g3("Y","Important part",2,0);
    cout<<"Part Number => "<<g1.getPartNum()<<"\nPart Description => "<<g1.getPartDes()<<"\nQuantity => "<<g1.getquantity()<<"\nPrice => "<<g1.getprice()<<"\nInvoice amount => "<<g1.getinvoiceamount()<<"\n"<<endl;
    cout<<"Part Number => "<<g2.getPartNum()<<"\nPart Description => "<<g2.getPartDes()<<"\nQuantity => "<<g2.getquantity()<<"\nPrice => "<<g2.getprice()<<"\nInvoice amount => "<<g2.getinvoiceamount()<<"\n"<<endl;
    cout<<"Part Number => "<<g3.getPartNum()<<"\nPart Description => "<<g3.getPartDes()<<"\nQuantity => "<<g3.getquantity()<<"\nPrice => "<<g3.getprice()<<"\nInvoice amount => "<<g3.getinvoiceamount()<<"\n"<<endl;

}