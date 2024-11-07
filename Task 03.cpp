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
     double Total=(Product_A_Price*QuantityA)+(Product_B_Price*QuantityB)+(Product_C_Price*QuantityC);
    cout<<"Total:$"<<Total<<endl;
    double Totaldiscount=(Total>200)? Total*0.9:Total;
    double shipping=(Totaldiscount<150)? 15.0:0.0;
    cout<<"Total after discount and shipping:$"<<Totaldiscount+shipping<<endl;
    return 0;
}