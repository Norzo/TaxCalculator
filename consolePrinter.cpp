#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Welcome! To begin with, I will require your income and tax paid from last year. Type it in one by one in the aforementioned order.\n";

	int incLastYr;
	cout << "Income last year: ";
	cin >> incLastYr;
	
	int taxLastYr;
	cout << "Tax paid last year: ";
	cin >> taxLastYr;
	cout << "Thank you! Rest assured, we will not store this information, we will use it to calculate the % of your income you paid in tax.\nUsing this, we will calculate the tax you will pay this year.\n";

	double percTax = incLastYr - taxLastYr;
	cout << "Your income subtracted with your tax: " << percTax << "\n";
	percTax = percTax / incLastYr;
	cout << "Dividing the previous result with your total income last year to find our percentage: " << percTax << "\n";
	percTax = percTax * 100;
	cout << "Times the previous result with 100 to get an actual number: " << percTax << "\n";
	int result = 100 - round(percTax);
	cout << "The final result, you paid " << result << "% in tax last year.";
}