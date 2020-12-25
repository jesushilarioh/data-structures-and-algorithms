#include <iostream>
using namespace std;
int main()
{
    int num1,
        num2,
        max;

    cout << "Enter two numbers";    // 1

    cin >> num1 >> num2;            // 2

    if (num1 >= num2)               // 1
        max = num1;                 // 1
    else                            // or
        max = num2;                 // 1
    
    cout << "The maximum number is: " << max << endl;
                                    // 3
                                    //-------
                                    // 8

    return 0;
}