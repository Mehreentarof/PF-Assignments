#include <iostream>
using namespace std;
int main() {
    double PriceA = 40, PriceB = 60, PriceC = 80;
    int QuantityA, QuantityB, QuantityC;
    int PaymentMethod;
    cout << "Select a payment method (1 for Credit Card, 2 for PayPal, 3 for Cash): ";
    cin >> PaymentMethod;
    double Totalwithshipping=(PriceA*QuantityA)+(PriceB*QuantityB)+(PriceB*QuantityC);
    cout<<"Total with shipping:$"<<Totalwithshipping<<endl;
    double TransactionFee = (PaymentMethod == 1) ? Totalwithshipping * 0.02:(PaymentMethod == 2) ? Totalwithshipping * 0.03 : 0.0;               
    double Totalafterpayment = Totalwithshipping + TransactionFee;
    
    cout << "Total after applying transaction fee: $" << Totalafterpayment<<endl;

    return 0;
}
