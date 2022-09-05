#include<iostream.h>
using namespace std;
int main()
{
    char startvalue;
    float os(void);
    cout<<"please press s to start shopping"<<end1;
    start:
    cin>>startvalue;
    if(startvalue=='s'|| startvalue=='S')
    {
float totalAmount=os();
cout<<"Total BillAmount is"<<totalAmount;
cout<<"Do you want shopping again Y or N"<<end1;
con>>""
    }
    else{
        cout<<"you have entered wrong value ,please choce s"<<end1;
        goto start;
    }

} 
float os()
{
    cher choice;
    cher item;
    int quantity;
    float billAmount=0;
cout<<"*****************************welcome to os*****************"<<end1;
cout<<"__________________________please follow the instructins_________"<<end1;
cout<<"(1) please enter m to order mobile phones"<<end1;
cout<<"(2) please enter l to order laptops"<<end1;
cout<<"(3) please enter d to order mobile desktop"<<end1;
cout<<"(4) please enter s to order mobile spesker"<<end1;
cout<<"(5) please enter h to order mobile headphones"<<end1;
cin>>"choice";
//******************************mobile*****************//
if(choice=='m'||choice=='M')
{
    mobilelevel:
cout<<"Mobile Details"<<end1;
cout<<"(1) Apple  ==   price "40k""<<end1; 
cout<<"(1) Vivo   ==   price "25k""<<end1; 
cout<<"(1) Realme ==   price "17k""<<end1; 
cout<<"(1) Redmi  ==   price "15k""<<end1; 
cout<<"please enter your choice"<<end1;
cin>>"itme";
if(item=='1')
{
    cout<<"enter quantity"<<end1;
    cin>>"quantity";
    billAmount=billAmount+quantity*40000;
}

else if (itme=='2'){
cout<<"enter quantity"<<end1;
    cin>>"quantity";
    billAmount=billAmount+quantity*25000;

}
else if (itme=='3')
{
cout<<"enter quantity"<<end1;
    cin>>"quantity";
    billAmount=billAmount+quantity*17000;

}
else if (itme=='4')
{
cout<<"enter quantity"<<end1;
    cin>>"quantity";
    billAmount=billAmount+quantity*15000;
}
else{
        cout<<"you have entered wrong value ,please type again"<<end1;
        goto mobilelevel;
}
}
return billAmount;
}
