#include <iostream>
using namespace std;
int main() {
    int stockA = 10, stockB = 5, stockC = 8;
    int quantityA, quantityB, quantityC;
    cout << "Enter quantity for Product A: ";
    cin >> quantityA;
    cout << "Enter quantity for Product B: ";
    cin >> quantityB;
    cout << "Enter quantity for Product C: ";
    cin >> quantityC;
    if (quantityA > stockA) {
        cout << "Sorry, only " << stockA << " units of Product A are available.\n";
        quantityA = stockA;  
    }
    if (quantityB > stockB) {
        cout << "Sorry, only " << stockB << " units of Product B are available.\n";
        quantityB = stockB;
    }
    if (quantityC > stockC) {
        cout << "Sorry, only " << stockC << " units of Product C are available.\n";
        quantityC = stockC;  
    }
     cout << "\nOrder Summary:\n";
     cout << "Product A: " << quantityA << " units\n";
     cout << "Product B: " << quantityB << " units\n";
     cout << "Product C: " << quantityC << " units\n";
     cout << "Thank you for your order!\n";

    return 0;
}