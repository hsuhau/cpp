/* #include <iostream>
#include <string>

// Function template
using namespace std;

template <typename T>
inline T const &Max(T const &a, T const &b)
{
    return a < b ? b : a;
}

int main()
{
    int i = 39;
    int j = 20;
    cout << "Max(i, j) : " << Max(i, j) << endl;

    double f1 = 13.5;
    double f2 = 20.7;
    cout << "Max(f1, f2) : " << Max(f1, f2) << endl;

    string s1 = "Hello";
    string s2 = "World";
    cout << "Maxconst(s1, s2) : " << Max(s1, s2) << endl;

    return 0;
}
 */

// Class Template
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;
template <class T>
class Stack
{
private:
    vector<T> elems;

public:
    void push(T const &);
    void pop();
    T top() const;
    bool empty() const
    {
        return elems.empty();
    }
};

template <class T>
void Stack<T>::push(T const &elem)
{
    elems.push_back(elem);
}

template <class T>
void Stack<T>::pop()
{
    if (elems.empty())
    {
        throw out_of_range("Stack<>::pop():empty stack");
    }
    elems.pop_back();
}

template <class T>
T Stack<T>::top() const
{
    if (elems.empty())
    {
        throw out_of_range("Stack<>:top():empty stack");
    }
    elems.back();
}

int main()
{
    try
    {
        Stack<int> intStack;
        Stack<string> stringStack;

        // manipulate int stack
        intStack.push(7);
        cout << intStack.top() << endl;

        // manipulate string stack
        stringStack.push("hello");
        cout << stringStack.top() << endl;
        stringStack.pop();
        stringStack.pop();
    }
    catch (const exception &e)
    {
        cerr << e.what() << endl;
        return -1;
    }
}