#include <iostream>

using namespace std;

int main()
{
double merchandiseCost , yearlyrent ,employeersSalary , electricityCost;
double wantedProfit = 0.10;
double salePercentage = 0.15;

cout<<"Enter the total cost of the merchandise;";
cin>>merchandiseCost;
cout<<"Enter the salary of employees:";
cin>>employeersSalary;
cout<<"Enter yearly rent:";
cin>>yearlyrent;
cout<<"Enter the yearly electricity cost:";
cin>>electricityCost;

double totalExpenses = merchandiseCost+employeersSalary+yearlyrent+electricityCost;
double totalprofitNeeded = totalExpenses/(1-wantedProfit);
double markbefore = totalprofitNeeded/(1-salePercentage);
double markAfter = markAfter/(1-salePercentage);
cout<<"The  merchandise should be marked up approximately"<<markAfter,markAfter;

    return 0;
}
