#include<bits/stdc++.h>
using namespace std;

class Shopitem
{
    int id;
    float price;
    public:
        void setData(int a,float b)
        {
            id=a;
            price=b;
        }
        void getData()
        {
            cout<<"The code of item is: "<<id<<endl;
            cout<<"The price of the item is: "<<price<<endl;
        }
};

int main()
{
    int size,p,i;
    float q;
    cout<<"Enter the number of items in the shop: "<<endl;
    cin>>size;
    Shopitem *ptr = new Shopitem[size];
    Shopitem *ptr2 = ptr;
    for(i=0;i<size;i++)
    {
        cout<<"Enter the ID and the price of the item: "<<i+1<<endl;
        cin>>p>>q;
        // (*ptr).setData(p,q);
        ptr->setData(p,q);
        ptr++;
    }
    for(i=0;i<size;i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptr2->getData();
        ptr2++;
    }
    return 0;
}