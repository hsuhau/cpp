#include <iostream>
using namespace std;
int sum(int a, int b = 10)
{
    return a + b;
}

int main()
{
    int a = 100;
    int b = 200;
    int result;
    result = sum(a, b);
    cout << "Total value is " << result << endl;
    result = sum(a);
    cout << "Total value is " << result << endl;
}
