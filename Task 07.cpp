#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string CustomerType;
    double Totalamount,discountamount,Newtotal;
    cout<<"Enter total amount:";
    cin>>Totalamount;
    cout << "Enter customer type (Regular/VIP): ";
    cin >> CustomerType;
    if(CustomerType=="VIP"){
        discountamount=Totalamount*0.05;
        Newtotal=Totalamount-discountamount;
        cout<<"VIP discount applied:$"<<discountamount<<endl;
    } else{
        Newtotal=Totalamount;
    }  
       cout<<"New total after discount:$ "<<Newtotal<<endl;
    return 0;
}