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

    // pure virtual function providing interface framework.
    virtual int getArea(void) = 0;

    void setWidth(int w)
    {
        width = w;
    }

    void setHeight(int h)
    {
        height = h;
    }
};

class Rectangle : public Shape
{
public:
    int getArea()
    {
        return (width * height);
    }
};

class Triangle : public Shape
{
public:
    int getArea()
    {
        return (width * height / 2);
    }
};

int main()
{
    Rectangle Rect;
    Triangle Tri;

    Rect.setWidth(5);
    Rect.setHeight(7);
    
    cout << "Total Rectangle area: " << Rect.getArea() << endl;
    Tri.setWidth(5);
    Tri.setHeight(7);
    cout << "Total Triangle area: " << Tri.getArea() << endl;

    return 0;
}