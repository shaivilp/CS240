#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float price;
    int numItems;

    cout << "What is the price for a single item? ";
    cin >> price;
    cout << "How many items were purchased? ";
    cin >> numItems;
    cout << endl;

    float total = price * numItems;

    cout << right << setw(5) << numItems << " items at $" << fixed << setprecision(2) << price << " each will cost $" <<  fixed << setprecision(2) << total << endl;
    return 0;
}
