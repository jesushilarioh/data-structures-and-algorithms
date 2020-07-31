#include <iostream>
using namespace std;
int main()
{
    double num, sum, count, average;

    cout << "Enter positive integers ending with -1" << endl;
                                        // 2
    count = 0,                          // 1
    sum = 0;                            // 1

    cin >> num;                         // 1

    while (num != 1)                    // 1
    {
        sum += num;                     // 2
        count++;                        // 1
        cin >> num;                     // 1
    }

    cout << "The sum of the number is: " << sum << endl;
                                        // 3
    if (count != 0)                     // 1
        average = sum / count;          // 2
    else                                // or
        average = 0;                    // 1
    
    cout << "The average is: " << average << endl;
                                        // 3

    return 0;
}