#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // n is an array of 10 integers
    int n[10];
    // initialize elements of array n to 0 
    for (int i = 0; i < 10; i++)
    {
        // set element at location i to i + 100
        n[i] = i + 10;
    }

    cout << "Element" << setw(13) << "Value" << endl;

    // output each array element's value   
    for (int j = 0; j < 10; j++)
    {
        cout << setw(7) << j << setw(13) << n[j] << endl;
    }
    return 0;
}
