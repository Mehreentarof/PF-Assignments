
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    double Totalprice;
    double Discount=0, Salestax=0, Totalaftercoupon, Finalprice;
    string coupon_code;
    int region;
    cout<<"Enter the total price: ";
    cin>>Totalprice;
    cout<<"Enter the coupon code: ";
    cin>>coupon_code;
    if(coupon_code == "Save10"){
        Discount=10;
    }
    Totalaftercoupon=Totalprice-Discount;
    cout<<"Enter your region(1,2,3):";
    cin>>region;
    switch(region){
        case 1:
        Salestax=0.05*Totalaftercoupon;
        break;
        case 2:
        Salestax=0.10*Totalaftercoupon;
        break;
        case 3:
        Salestax=0.08*Totalaftercoupon;
        break;
        default:
        cout<<"Invalid region entered.No tax applied."<<endl;
        Salestax=0;
    }
     Finalprice=Totalaftercoupon+Salestax;
     cout<<"Final price after tax:$ "<<Finalprice<<endl;
    return 0;
}