#include <iostream>
using namespace std;
int main()
{
    int var1 = 20;
    int *ip;
    ip = &var1;
    char var2[10];
    cout << "Value of var1 variable: " << var1 << endl;
    cout << "Address stored in ip variable: " << ip << endl;
    cout << "Value of *ip variable: " << *ip << endl;
    cout << "Address of var2 variable: " << &var2 << endl;
}