#include<bits/stdc++.h>
using namespace std;

unordered_map<string,bool> codes;
class Apartment
{
    int floorno;
    int flatno;
    bool iselectricity;
    int amount=0;
    public:
        void recharge(string s, int am)
        {
            if(codes.find(s)==codes.end())
            {
                cout<<"Invalid Code"<<endl;
            }
            else
            {
                amount+=am;
                cout<<"Recharge of "<<am<<" successful"<<endl;
            }
        }
        Apartment(int Flno, int Ftno): floorno(Flno),flatno(Ftno){}
        void display(void)
        {
            cout<<"This is the floor number "<<floorno<<" and the flat no: "<<flatno<<endl;
        }
};

class Payment
{
    int amount;

    public:
        Payment(int am)
        {
            this->amount=am;
        }
        int a;
        string gencode()
        {
            string s="";
            for(int i=0;i<20;i++)
            {
                a=rand()%10;
                s+='0';
            }
            return s;
        }
        pair<string,int> transaction(int amount)
        {
            string code=gencode();
            while(codes.find(code)==codes.end())
            {
                code=gencode();
            }
            codes[code]=false;
            return {code,amount};
        }
};

int main()
{
    Apartment a1(3,305);
    a1.display();
    return 0;
}