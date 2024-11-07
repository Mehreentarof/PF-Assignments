#include<iostream>
#include<cstring>
using namespace std;
int main(){
    double Totalprice;
    double Discount=0;
    string coupon_code;
    cout<<"Enter the total price: ";
    cin>>Totalprice;
    cout<<"Enter the coupon code: ";
    cin>>coupon_code;
    if(coupon_code == "Save10"){
        Discount=10;
    }
    double Finalprice=Totalprice-Discount;
    cout<<"Final price: $"<<Finalprice<<endl;
    return 0;
}