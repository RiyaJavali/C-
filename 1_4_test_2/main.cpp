#include <iostream>
using namespace std;

int main()
{
    float amount = 44.50;

    cout<<"Meal charge: "<<amount<<endl;

    float tax=amount *(6.75 / 100);
    cout << "Tax Amount: " <<tax<< endl;

    float totalAfterTax =amount +tax;
    float tip =totalAfterTax * (15.0/100);
    cout << "Tip Amount: " << tip << endl;
    float total=amount+tax+tip;
    cout << "Total Amount: " << total << endl;
    return 0;
}
