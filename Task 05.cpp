#include<iostream>
using namespace std;
int main(){
    double Product_A_Price=100;
    double Product_B_Price=80;
    double Product_C_Price=60;
    int QuantityA, QuantityB, QuantityC;
    int loyaltypoints=50;
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
    double Totalwithshipping=Totaldiscount+shipping;
    cout<<"Total after discount and shipping:$"<<Totalwithshipping<<endl;
    int i=1;
    if( i<= loyaltypoints){
        cout<<"You have high loyalty points!"<<i<<endl;
    }else{
        cout<<"You can earn more loyalty points"<<i<<endl;
        i++;
    }
    
    
    return 0;
}