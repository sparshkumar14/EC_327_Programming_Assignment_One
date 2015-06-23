#include <iostream>
#include <math.h>                                                           // Using the sqrt() function for calculations

using namespace std;

int main()

{
    float X1, X2, Y1, Y2, Area_1, Area_2;                                   // These values will store the 6 inputs the user enter. I use float to account for unusual values
    cout << "Enter the information for the first square" << endl;
    cout << "x-coordinate: " << endl;
    cin >> X1;
    cout << "y-coordinate: " << endl;
    cin >> Y1;
    cout << "area: " << endl;
    cin >> Area_1;

    cout << "Enter the information for the second square" << endl;
    cout << "x-coordinate: " << endl;
    cin >> X2;
    cout << "y-coordinate: " << endl;
    cin >> Y2;
    cout << "area: " << endl;
    cin >> Area_2;

    // float is used to accommodate for imperfect square numbers
    float Square_1_X1 = X1 - ((sqrt(Area_1))/2);                            // The left (smaller) x-coordinate of the first square
    float Square_1_X2 = X1 + ((sqrt(Area_1))/2);                            // The right (larger) x-coordinate of the first square
    float Square_1_Y1 = Y1 - ((sqrt(Area_1))/2);                            // The bottom (smaller) y-coordinate of the first square
    float Square_1_Y2 = Y1 + ((sqrt(Area_1))/2);                            // The top (larger) y-coordinate of the first square
    float Square_2_X1 = X2 - ((sqrt(Area_2))/2);                            // The left (smaller) x-coordinate of the second square
    float Square_2_X2 = X2 + ((sqrt(Area_2))/2);                            // The right (larger) x-coordinate of the second square
    float Square_2_Y1 = Y2 - ((sqrt(Area_2))/2);                            // The bottom (smaller) y-coordinate of the second square
    float Square_2_Y2 = Y2 + ((sqrt(Area_2))/2);                            // The top (larger) y-coordinate of the second square

//    I was testing the output to see if I was getting the correct coordinates
//    cout << Square_1_X1 << endl;
//    cout << Square_1_X2 << endl;
//    cout << Square_1_Y1 << endl;
//    cout << Square_1_Y2 << endl;
//    cout << Square_2_X1 << endl;
//    cout << Square_2_X2 << endl;
//    cout << Square_2_Y1 << endl;
//    cout << Square_2_Y2 << endl;

//    I approached this problem by using logic
//    There was really no need for some complicated math to determine if there was an intersection
//    The squares will NOT OVERLAP if one of the two following conditions is true:

//    One square is on left side of the left edge of other square
    if (Square_1_X1 > Square_2_X2 || Square_2_X1 > Square_1_X2)
        {
            cout << "THE SQUARES DO NOT INTERSECT" << endl;
        }

//    One square is above top edge of other square
    else if (Square_1_Y2 < Square_2_Y1 || Square_2_Y2 < Square_1_Y1)
        {
            cout << "THE SQUARES DO NOT INTERSECT" << endl;
        }
    else
        {
            cout << "THE SQUARES INTERSECT" << endl;                    // If both these conditions fail, then the squares overlap
        }

}
