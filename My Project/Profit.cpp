/*Write a C++ program using object oriented programming that will take input money value from the user and convert it to dollars.
Then show the two investors different amounts of money.
Then show an investor's profit share and his capital share separately.*/

#include <bits/stdc++.h>
using namespace std;

class Business
{
    public:
    double Profit,BackToBkash,Amount,Dollar,FirstPerson_90,SecondPerson_10,AnotherProfit;

    void Input_Data()
    {
        cout<<"Enter Your Total Ammount in BDT = ";
        cin>>Amount;
    }
    void Calculation_Data()
    {
        Dollar = Amount / 120;
        Profit = (Dollar * 120) - (Dollar * 92);
        BackToBkash = (Amount - Profit);
        FirstPerson_90 = (Amount * 90)/100 ;
        SecondPerson_10 = (Amount * 10)/100 ;
        AnotherProfit = (Profit - SecondPerson_10);
    }
    void Outout_Data()
    {
        cout << endl <<" Total Dollar = "<< fixed << setprecision(2) <<" Dollar "<<Dollar;
        cout << endl <<" Total Profit of First Person with Cash = "<< fixed << setprecision(2) << " TK "<<FirstPerson_90;
        cout << endl <<" Total Profit of Second Person = "<< fixed << setprecision(2) << " TK "<<SecondPerson_10;

        cout << endl << endl <<" Total Profit of First Person Only Profit = "<<setprecision(2)<<" TK "<<AnotherProfit;
        cout << endl <<" Back to Another Bkash = "<< setprecision(2) <<" TK "<< fixed <<BackToBkash<<endl<<endl;
    }
};
int main()
{
    Business share;
    share.Input_Data();
    share.Calculation_Data();
    share.Outout_Data();

    return 0;
}
