/**
 * @file 6_cpp_preprocessor.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-03-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

// The #define Preprocessor
#define PI 3.1415926

// Function-Like Macros
#define MIN(a, b) ((a < b) ? a : b)

// Conditional Compilation
#define DEBUG

// The # and ## Operators
#define MKSTR(x) #x

#define concat(x, y) x##y

int main()
{
    cout << "Value of PI : " << PI << endl;

    int i = 0;
    int j = 1;
    cout << "MIN(i, j): " << MIN(i, j) << endl;

#ifdef DEBUG
    cerr << "Trace: Inside main function" << endl;
#endif

#if 0
/* This is commented part */
cout << MKSTR(HELLO C++) << endl;
#endif

    cout << "The minimum is " << MIN(i, j) << endl;

#ifdef DEBUG
    cerr << "Trace: Coming out of main function" << endl;
#endif

    cout << MKSTR(HELLO C++) << endl;

    int ab = 100;
    cout << "concat(a,b)" << concat(a, b) << endl;

    cout << "__LINE__ : " << __LINE__ << endl;
    cout << "__FILE__ : " << __FILE__ << endl;
    cout << "__DATE__ : " << __DATE__ << endl;
    cout << "__TIME__ : " << __TIME__ << endl;

    return 0;
}
