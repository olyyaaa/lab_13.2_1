// lab_13.2_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//2 частина//
// Довести, що катети і висота, проведена до гіпотенузи, 
// пов'язані співвідношенням: 1/H2 = 1/a2 + 1/b2, де H - висота, a, b - катети.
//  Попередньо перевірити, чи є трикутник прямокутним. 
// Необхідні обчислення і початкові дані задати самостійно.
#include <iostream>
#include <cmath>
using namespace std;

float findArea(float a, float b, float c, float h)
{
    // Length of sides must be positive
    // and sum of any two sides
    // must be smaller than third side.
    if (a < 0 || b < 0 || c < 0 ||
        (a + b <= c) || a + c <= b ||
        b + c <= a)
    {
        cout << "Not a valid triangle";
        exit(0);
    }
    float F = 1 / (h * h);
    float A = 1 / (a * a);
    float B = 1 / (b * b);
    float result;

    return result = A + B;
}

// Driver Code
int main()
{
    float a = 3;
    float b = 4;
    float c = 5;
    float h = 2.4;

    cout << "Area is " << findArea(a, b, c, h) << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
