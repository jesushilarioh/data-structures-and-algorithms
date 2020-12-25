#include <iostream>
using namespace std;

// Precondition: The value of inches must be nonnegative.
// Postcondition: If the value of inches is < 0, the
//      function returns -1.0; otherwise, the function
//      returns the equivalent length in centimeters.
double inchesToCentimeters(double inches)
{
    if (inches < 0)
    {
        cerr << "The given measurement must be nonnegative." << endl;
        return -1.0;
    }
    else
        return 2.54 * inches;
    
}
int main()
{
    double number = inchesToCentimeters(19);

    cout << endl;
    cout << "number = " << number << endl;
    cout << endl;
    return 0;
}