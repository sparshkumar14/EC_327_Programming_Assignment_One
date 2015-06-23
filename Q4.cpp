#include <iostream>
using namespace std;

int main()
{

cout << "Enter character: " << endl;
char input;                                                         // The input can be any character the user desires
cin >> input;
cout << "Offset (enter 0 to convert case): " << endl;               // The offset should be an integer, because it will help in calculations
int offset;
cin >> offset;
if (offset == 0)                                                    // We make an exception if the offset is zero
{
    if (input >= 'A' && input <= 'Z')                               // If the character is an uppercase letter, as we can treat characters as values because of ASCII
    {
    char to_lowercase = 'a' + (input - 'A');                        // This operation converts the uppercase letter to its lowercase letter
    cout << "New character: " << to_lowercase << endl;              // Output the lowercase version
    }
    else if (input >= 'a' && input <= 'z')                          // If the character is an lowercase letter
    {
    char to_uppercase = 'A' + (input - 'a');                        // This operation converts the lowercase letter to its uppercase letter
    cout << "New character: " << to_uppercase << endl;              // Output the uppercase version
    }
    else
    {
    cout << "New character: " << input << endl;                     // If you input anything else like a number or symbol, then return the original value
    }
}
else if (input + offset > 126)                                      // This will make sure that the user does not enter a large value for the offset,as ASCII goes up to 126 in this case
    cout << "Error. Out of range." << endl;

else
{
    for(char new_char = input, i = 0; i != (offset + 1); i++, new_char++)       // This will increment the input. (offset + 1) is used to get the exact value of the offset
                                                                                // I make a new_char so that input is not changing. I also add an i to count the number of increments.
            if (i == offset)                                                    // Once the offset equals i, then the program displays the new character
                cout << "New character: " << new_char << endl;
}
}
