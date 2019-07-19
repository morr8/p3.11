/*
 •• P3.11
 Write a program that reads in the x- and y-coordinates of three corner points of a triangle and prints out whether it has an obtuse angle, a right angle, or only acute angles.
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "coordinate A: ";
    float x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1;
    cout << "coordinate B: ";
    cin >> x2 >> y2;
    cout << "coordinate C: ";
    cin >> x3 >> y3;
    float sidec = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // distance formula
    float sidea = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float sideb = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    float angleA = acos((pow(sideb, 2) + pow(sidec, 2) - pow(sidea, 2)) / (2 * sideb * sidec)) * 180/M_PI; // law of cosines/ trig
    float angleB = acos((pow(sidec, 2) + pow(sidea, 2) - pow(sideb, 2)) / (2 * sidec * sidea)) * 180/M_PI;
    float angleC = acos((pow(sidea, 2) + pow(sideb, 2) - pow(sidec, 2)) / (2 * sidea * sideb)) * 180/M_PI;
    cout << "angle A: " << angleA << "\nangle B: " << angleB << "\nangle C: " << angleC << "\nsum of 3 angles: " << angleA + angleB + angleC << endl;
    
    if (angleA > 90 || angleB > 90 || angleC > 90) // obtuse triangle definition
    {
        cout << "obtuse";
    }
    else if (angleA == 90 || angleB == 90 || angleC == 90) // right angle definition
    {
        cout << "right angle";
    }
    else if (angleA > 90 && angleB > 90 && angleC > 90) // acute angle definition
    {
        cout << "acute";
    }
    cout << endl;
}
