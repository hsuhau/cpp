// 多态
#include <iostream>
using namespace std;
class Shape
{
protected:
    int width, height;

public:
    Shape(int a = 0, int b = 0)
    {
        width = a;
        height = b;
    }

    int getArea(void)
    {
        cout << "Parent class area :" << endl;
        return 0;
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(int a = 0, int b = 0) : Shape(a, b) {}
    int area()
    {
        cout << "Rectangle class area :" << endl;
        return (width * height);
    }
};

class Triangle : public Shape
{
public:
    // 构造器
    Triangle(int a = 0, int b = 0) : Shape(a, b) {}

    int area()
    {
        cout << "Triangle class area :" << endl;
        return (width * height / 2);
    }
};

int main()
{
    Shape *shape;
    Rectangle rect(10, 7);
    Triangle tri(10, 5);

    shape = &rect;
    shape->getArea();
    shape = &tri;
    shape->getArea();
    return 0;
}