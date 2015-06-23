#include <iostream>
#include <string>                                                       // I have the values as strings in order to determine the hamming distance
#include <sstream>                                                      // This is used to convert the ternary numbers to strings


using namespace std;
int main()
{
    int dec, dec1, rem1, rem2, i = 1, j = 1, sum1 = 0, sum2 = 0;       // Some of these integers will be used to calculate the ternary value
    cout << "Enter two numbers between 0-100: ";
    cin  >> dec;
    cin  >> dec1;
    if (dec < 0 || dec > 100 || dec1 < 0 || dec1 > 100 )               // This makes sure that the user only enters numbers in the correct range
        cout << "Invalid Numbers!" << endl;
    else
    {
    const int value_1 = dec;                                           // Will store the inputs to display in the output text
    const int value_2 = dec1;
    do                                                                 // This do while loop will convert the input to ternary
    {
        rem1 = dec % 3;                                                // This will get the remainder when you divide the input by 3
        sum1 = sum1 + (i * rem1);                                      // This is where the ternary value will be built. You keep on adding (i * rem1)
        dec = dec / 3;                                                 // This divides the value by 3 so that the remainder will be different
        i = i * 10;                                                    // To make sure that higher bit values are added, i is multiplied by 10 so that a new numbers place can be added

    }while( dec > 0 );                                                 // Once the input reaches zero, the loop ends

    do                                                                 // The second do while loop does the same calculations for the second input
    {                                                                  // This will result in two ternary values
        rem2 = dec1 % 3;
        sum2 = sum2 + (j * rem2);
        dec1 = dec1 / 3;
        j = j * 10;

    }while( dec1 > 0 );

   string sum3;                                                       // sum3 and sum4 will be where the two new string values will be stored
   string sum4;

   stringstream convert1;                                             // stringstream is like a loaded file that resembles a string
   stringstream convert2;                                             // You have a stringstream value which you can read or write into it

   convert1 << sum1;                                                  // Therefore I am writing the ternary values into the stringstream type
   convert2 << sum2;                                                  // This will allow for conversion from an integer to a string

   sum3 = convert1.str();                                             // You can then convert the stringstream values to strings
   sum4 = convert2.str();                                             // Having them as strings will make it easier to calculate the hamming distance

while(sum3.length() < 5)                                              // These two while loops will add zeros to the ternary string
{                                                                     // This will make sure that the comparison is between 5 characters
  sum3 = "0" + sum3;
}

while(sum4.length() < 5)
{
  sum4 = "0" + sum4;
}


   int len = sum3.length(), mismatch = 0;                            // The mismatch integer will count the number of mismatches
    if(len > sum3.length())                                          // This if statement will make sure that it will use the smaller length for the calculations
        len = sum4.length();                                         // However in this case, the numbers of characters will always remain consistent (len = 5)
   for(int k = 0; k < len; k++)                                      // From 0 to 4, which is the five characters
    {
   if(sum3[k] != sum4[k])                                            // The [] index accesses the position of each character in the string
    mismatch++;                                                      // If the character does not equal, then increment mismatch
    }

    cout << "Hamming distance between " << value_1 <<  " and " << value_2 << " when numbers are in ternary format is: " << mismatch << endl;
    // This is why I created value_1 and value_2. To have the input numbers to use in the output
}
}
