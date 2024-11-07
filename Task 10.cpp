#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double priceA = 20.0, priceB = 15.0, priceC = 30.0;
    int stockA = 10, stockB = 5, stockC = 8, quantityA, quantityB, quantityC;
    cout << "Enter quantity for Product A: ";
    cin >> quantityA;
    cout << "Enter quantity for Product B: ";
    cin >> quantityB;
    cout << "Enter quantity for Product C: ";
    cin >> quantityC;
    quantityA = min(quantityA, stockA);
    quantityB = min(quantityB, stockB);
    quantityC = min(quantityC, stockC);
    double subtotal = priceA * quantityA + priceB * quantityB + priceC * quantityC;
    double discount = 0.10 * subtotal, couponDiscount = 0.05 * (subtotal - discount);
    double shipping = 5.0, transactionFee = 2.0, salesTax = 0.08 * (subtotal - discount - couponDiscount);
    double finalTotal = subtotal - discount - couponDiscount + shipping + transactionFee + salesTax;
    cout << fixed << setprecision(2) 
         << "\nOrder Summary:\n-----------------------------------\n"
         << "Product A (x" << quantityA << "): $" << priceA * quantityA << "\n"
         << "Product B (x" << quantityB << "): $" << priceB * quantityB << "\n"
         << "Product C (x" << quantityC << "): $" << priceC * quantityC << "\n"
         << "-----------------------------------\n"
         << "Subtotal: $" << subtotal << "\nDiscount: -$" << discount 
         << "\nSubtotal After Discount: $" << (subtotal - discount) 
         << "\nShipping: $" << shipping << "\nTransaction Fee: $" << transactionFee
         << "\nCoupon Discount: -$" << couponDiscount << "\nSales Tax: $" << salesTax
         << "\n-----------------------------------\n"
         << "Total Amount to Pay: $" << finalTotal << endl;

    return 0;
}
