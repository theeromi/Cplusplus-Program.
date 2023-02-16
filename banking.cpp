/*Romain Tomlinson*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
//Declaring variables for inputs
float inv, depo, anuIn, yrs, months;
// variable to store year end total
float total;
// vatiables to store interest and year end interest
float inAmt, yrInt;

// Displaying form
cout << "*************************\n";
cout << "********Data Input*******\n";
cout << "Initial Investment Amount: \n";
cout << "Monthly Deposit: \n";
cout << "Annual Interest: \n";
cout << "Number of yrs: \n";
system("PAUSE");

//To obtain data from user
cout << "*************************\n";
cout << "********Data Input*******\n";
cout << "Initial Investment Amount: $ ";
cin >> inv;
cout << "Monthly Deposit: $ ";
cin >> depo;
cout << "Annual Interest: % ";
cin >> anuIn;
cout << "Number of yrs: ";
cin >> yrs;
months = yrs * 12;

system("PAUSE");

// Set total = inv
total = inv;
// To display year data (no monthly deposits data)
cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
cout << "==============================================================\n";
cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
cout << "--------------------------------------------------------------\n";
for(int i=0; i<yrs ;i++){
//Calculating yearly interest
inAmt = (total) * ((anuIn/100));
//Calculating year end total
total = total + inAmt;
//To show only 2 decimal points
cout << (i+1) << "\t\t" << fixed << setprecision(2) << total << "\t\t\t" << inAmt << "\n";

}

//Monthly calculation
total = inv;
// Displaying year data with monthly deposits
cout << "\n\nBalance and Interest With Additional Monthly Deposits\n";
cout << "==============================================================\n";
cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
cout << "--------------------------------------------------------------\n";
for(int i=0; i<yrs ;i++){
// Yearly interest = 0 -- at the start of the year
yrInt = 0;
for(int j=0; j<12; j++){
// Calculating monthly interest
inAmt = (total + depo) * ((anuIn/100)/12);
// To calculate month end interest
yrInt = yrInt + inAmt;
// Calculating month end total
total = total + depo + inAmt;
}
//To show only 2 decimal points
cout << (i+1) << "\t\t" << fixed << setprecision(2) << total << "\t\t\t" << yrInt << "\n";
}
return 0;
}