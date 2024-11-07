#include<iostream>
using namespace std;
int main(){
    double Product_A_Price=100;
    double Product_B_Price=80;
    double Product_C_Price=60;
    int QuantityA, QuantityB, QuantityC;
    cout<<"Enter the quantity of product A:";
    cin>>QuantityA;
    cout<<"Enter the quantity of product B:";
    cin>>QuantityB;
    cout<<"Enter the quantity of product C:";
    cin>>QuantityC;
    double Totalcost=(Product_A_Price*QuantityA)+(Product_B_Price*QuantityB)+(Product_C_Price*QuantityC);
    cout<<"Total Cost:$"<<Totalcost<<endl;
    return 0;
}