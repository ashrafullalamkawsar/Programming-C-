#include<bits/stdc++.h>
using namespace std;

class SimpleInterest
{
    public:
    int p,t,r,si;

    void InputData()
    {
        cout<<"Enter The value of P ,T and R = ";
        cin>>p>>t>>r;
    }

    void calculateData()
    {
        si = (p * p * r)/100;
    }

    void ShowData()
    {
        cout<<"Your Simple Interest is = "<<si<<endl;
        cout<<"Your Total Amount With Interest is = "<<si+p<<endl;
    }
};
int main()
{
    SimpleInterest Result;
    Result.InputData();
    Result.calculateData();
    Result.ShowData();

    return 0;
}