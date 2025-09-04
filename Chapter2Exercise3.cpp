
#include <iostream>
using namespace std;
int main()
{
	float purchaseAmount = 95.00;
	float stateSalesTax = 0.04;
	float countySalesTax = 0.02;
	float totalSalesTax = stateSalesTax + countySalesTax;
	float salesTaxAmount = purchaseAmount * totalSalesTax;
	float totalPurchaseAmount = purchaseAmount + salesTaxAmount;

	cout << "Purchase Amount: $" << purchaseAmount << endl;
	cout << "State Sales Tax: $" << purchaseAmount * stateSalesTax << endl;
	cout << "County Sales Tax: $" << purchaseAmount * countySalesTax << endl;
	cout << "Total Sales Tax: $" << salesTaxAmount << endl;
	cout << "Total Purchase Amount: $" << totalPurchaseAmount << endl;
}
