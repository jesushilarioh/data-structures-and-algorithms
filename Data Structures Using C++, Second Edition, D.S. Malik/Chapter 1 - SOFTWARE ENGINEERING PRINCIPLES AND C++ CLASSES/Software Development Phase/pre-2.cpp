#include <iostream>
#include <cassert>
using namespace std;

// Precondition: The value of inches must be nonnegatice.
// Postcondition: If the value of inches is < 0, the
//      function returns -1.0; otherwise, the function
//      returns the equivalent length in centimeters.
double inchesToCentimeters(double inches)
{
    assert(inches >= 0);
    return 2.54 * inches;
}
int main()
{
    double number = inchesToCentimeters(-1);

    cout << endl;
    cout << "number = " << number << endl;
    cout << endl;
    return 0;
}