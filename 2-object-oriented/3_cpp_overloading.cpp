/*
Overloadable/Non-overloadableOperators
Following is the list of operators which can be overloaded −
+	-	*	/	%	^
&	|	~	!	,	=
<	>	<=	>=	++	--
<<	>>	==	!=	&&	||
+=	-=	/=	%=	^=	&=
|=	*=	<<=	>>=	[]	()
->	->*	new	new []	delete	delete []

Following is the list of operators, which can not be overloaded −
::	.*	.	?:
*/

// #include <iostream>
// using namespace std;
// class PrintData
// {
// public:
//     void print(int i)
//     {
//         cout << "Printing int: " << i << endl;
//     }

//     void print(double d)
//     {
//         cout << "Printing float: " << d << endl;
//     }

//     void print(char *c)
//     {
//         cout << "Printing character: " << c << endl;
//     }
// };

// int main()
// {
//     PrintData pd;

//     pd.print(5);
//     pd.print(500.263);
//     pd.print('c');

//     return 0;
// }

/*
Operators Overloading in C++
You can redefine or overload most of the built-in operators available in C++. Thus, a programmer can use operators with user-defined types as well.

Overloaded operators are functions with special names: the keyword "operator" followed by the symbol for the operator being defined. Like any other function, an overloaded operator has a return type and a parameter list.

Box operator+(const Box&);
declares the addition operator that can be used to add two Box objects and returns final Box object. Most overloaded operators may be defined as ordinary non-member functions or as class member functions. In case we define above function as non-member function of a class then we would have to pass two arguments for each operand as follows −

Box operator+(const Box&, const Box&);
Following is the example to show the concept of operator over loading using a member function. Here an object is passed as an argument whose properties will be accessed using this object, the object which will call this operator can be accessed using this operator as explained below −
*/

#include <iostream>
using namespace std;
class Box
{
private:
    double length;
    double height;
    double breadth;

public:
    double getVolume(void)
    {
        return length * height * breadth;
    }

    void setLength(double len)
    {
        length = len;
    }

    void setHeight(double hei)
    {
        height = hei;
    }

    void setBreadth(double bre)
    {
        breadth = bre;
    }

    Box operator+(const Box &b)
    {
        Box box;
        box.length = this->length + b.length;
        box.height = this->height + b.height;
        box.breadth = this->breadth + b.breadth;
        return box;
    }
};

int main()
{
    Box Box1;
    Box Box2;
    Box Box3;

    double volume = 0.0;

    Box1.setLength(6.0);
    Box1.setHeight(5.0);
    Box1.setBreadth(7.0);

    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);
    Box2.setLength(12.0);

    volume = Box1.getVolume();
    cout << "Volume of Box1 : " << volume << endl;

    volume = Box2.getVolume();
    cout << "Volume of Box2 : " << volume << endl;

    Box3 = Box1 + Box2;

    volume = Box3.getVolume();

    cout << "Volume of Box3 : " << volume << endl;

    return 0;
}
