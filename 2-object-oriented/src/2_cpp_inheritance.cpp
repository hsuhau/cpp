#include <iostream>
using namespace std;
class Shape
{
protected:
    int width;
    int height;

public:
    void setWidth(int w)
    {
        width = w;
    }

    void setHeight(int h)
    {
        height = h;
    }
};

class PaintCost
{
public:
    int getCost(int area)
    {
        return area * 70;
    }
};

class Rectangle : public Shape, public PaintCost
{
public:
    int getArea()
    {
        return (width * height);
    }
};

int main()
{
    Rectangle Rect;
    int area;
    int cost;

    Rect.setHeight(4);
    Rect.setWidth(5);

    area = Rect.getArea();
    cout << "Total area: " << area << endl;

    cost = Rect.getCost(area);
    cout << "Total paint cost: $" << cost << endl;

    return 0;
}