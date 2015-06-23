#include <iostream>
#include <iomanip>                                              // Needed for setprecision to round out decimal values to 2 spots
using namespace std;

int main()
{
float bill_amount;
double tax_rate;
int tip_level;                                                  // For the tip_level, the user should only enter 1, 2, or 3
int post_tip_amount;                                            // For post_tip_amount, the user should only enter either 1 or 2
double tip_15 = 0.15;                                           // 15% tip value
double tip_20 = 0.20;                                           // 20% tip value
double tip_25 = 0.25;                                           // 25% tip value
float tip_amount;                                               // After user input, this value will become the desired tip rate

cout << "Enter the original bill amount: " << endl;
cin >> bill_amount;                                             // This represents the initial bill value

cout << "Enter the tax rate %: " << endl;
cin >> tax_rate;                                                // This represents the tax rate


do {
cout << "Enter tip level (1=15%, 2=20%, 3=25%): " << endl;      // This calculates the tip value that will be placed in tip_amount
cin >> tip_level;
if (tip_level == 1)
{
    tip_amount = tip_15;
}

else if (tip_level == 2)
{
    tip_amount = tip_20;
}

else if (tip_level == 3)
{
    tip_amount = tip_25;
}
else
    cout << "Invalid Input. Please Try again" << endl;
} while (tip_level != 1 && tip_level != 2 && tip_level != 3);   // The while loop ensures that the user enters a correct input, and it will make sure either 1, 2, or 3 are entered



do {
cout << "Tip on post-tax amount? (1=yes, 2=no): " << endl;
cin >> post_tip_amount;

//setprecision sets the decimal value to 2, because that is standard for money values
if (post_tip_amount == 1)                                       // This does the tax calculation with the tip amount
{
    cout << "The total bill pre-tip is: $" << setprecision(2) << fixed << (bill_amount * (1 +(tax_rate/100))) << endl;          //Multiplies the tax rate with the bill
    double pre_bill_1 = (bill_amount * (1 +(tax_rate/100)));                                                                    //Separates the pre-tip bill into a double
    cout << "The total tip is: $" << setprecision(2) << fixed << ((bill_amount * (1 +(tax_rate/100))) * tip_amount) << endl;    //Multiplies the taxed amount with tip percentage to get the tip value
    double final_tip_1 =  ((bill_amount * (1 +(tax_rate/100))) * tip_amount);                                                   //Separates the final tip value into another variable
    cout << "The total bill post-tip is: $" << (pre_bill_1 + final_tip_1) << endl;                                              //Adds the bill with the tax and the tip which incorporates the tax
}

else if (post_tip_amount == 2)                                 // This does the calculations without the tip amount taxed
{
    cout << "The total bill pre-tip is: $" << setprecision(2) << fixed << (bill_amount * (1 +(tax_rate/100))) << endl;          //Multiplies the tax rate with the bill
    double pre_bill_2 = (bill_amount * (1 +(tax_rate/100)));
    cout << "The total tip is: $" << (bill_amount * tip_amount) << endl;                                                        //This will calculate the tip by multiplying the bill without the taxed amount
    double final_tip_2 =  (bill_amount * tip_amount);
    cout << "The total bill post-tip is: $" << (pre_bill_2 + final_tip_2) << endl;                                              //Add the taxed bill and the tip which did not include the tax portion of the bill
}
else
    cout << "Invalid Input. Please Try again" << endl;      // Will loop back when the user enters a wrong value

} while (post_tip_amount != 1 && post_tip_amount != 2);     // This makes sure that the user enters a correct input (1 or 2)


return 0;
}

