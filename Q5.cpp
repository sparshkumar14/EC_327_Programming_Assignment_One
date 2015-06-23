//I use a combination of if, else if, and else to represent the 9 possible combinations of the classic Rock, Paper, Scissors game

#include <iostream>
#include <cstdlib>                                                          //This library consists of the rand() function which will represent the computer

using namespace std;

int main ()
{
    int User_Choice, Computer_Choice;
    Computer_Choice = rand() % 3;                                           //rand() % 3 means that the random number range will be 0, 1, or 2
    cout << "Choose Rock (0), Paper (1), or Scissors (2): " << endl;
    cin >> User_Choice;                                                     //Input either 0, 1, 2 to represent Rock, Paper, or Scissors respectively
    if (User_Choice == 0)                                                   //This is where the program goes when the user enters 0, or "Rock"
	    {
            if  (Computer_Choice == 0)                                      //Rock and Rock leads to a tie
                {
                cout << "Computer chooses: Rock" << endl;
                cout << "You tie!" << endl;
                }
            else if (Computer_Choice == 1)                                  //Paper beats Rock, so user loses
                {
                cout << "Computer chooses: Paper" << endl;
                cout << "You lose!" << endl;
                }
            else if (Computer_Choice == 2)                                  //Rock beats Scissors, so user wins
                {
                cout << "Computer chooses: Scissors" << endl;
                cout << "You win!" << endl;
                }
	    }
    else if (User_Choice == 1)                                              //This is where the program goes when the user enters 1, or "Paper"
        {
            if  (Computer_Choice == 0)                                      //Paper beats Rock, so user wins
                {
                cout << "Computer chooses: Rock" << endl;
                cout << "You win!" << endl;
                }
            else if (Computer_Choice == 1)                                  //Paper and Paper leads to a tie
                {
                cout << "Computer chooses: Paper" << endl;
                cout << "You tie!" << endl;
                }
            else if (Computer_Choice == 2)                                  //Scissors beats Paper, so user loses
                {
                cout << "Computer chooses: Scissors" << endl;
                cout << "You lose!" << endl;
                }
        }
    else if (User_Choice == 2 )                                             //This is where the program goes when the user enters 2, or "Scissors"
	    {
            if  (Computer_Choice == 0)                                      //Rocks beats Scissors, so user loses
                {
                cout << "Computer chooses: Rock" << endl;
                cout << "You lose!" << endl;
                }
            else if (Computer_Choice == 1)                                  //Scissors beats Paper, so user wins
                {
                cout << "Computer chooses: Paper" << endl;
                cout << "You win!" << endl;
                }
            else if (Computer_Choice == 2)                                  //Scissors and Scissors leads to a tie
                {
                cout << "Computer chooses: Scissors" << endl;
                cout << "You tie!" << endl;
                }
	    }
    else
        cout << "Invalid Input. Please restart the program." << endl;       //If the user does not enter a correct number, then it will notify the user
 }                                                                          //and end the program


