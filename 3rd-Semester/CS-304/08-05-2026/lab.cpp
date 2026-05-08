#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;

public:
    Circle()
    {
        radius = 0;
    }

    void setRadiusValue(double rd)
    {
        radius = rd;
    }

    double getRadiusValue()
    {
        return radius;
    }

    Circle operator+(Circle c)
    {
        Circle temp;

        temp.radius = radius + c.radius;

        return temp;
    }

    Circle operator+(double value)
    {
        Circle temp;

        temp.radius = radius + value;

        return temp;
    }

    friend Circle operator+(double value, Circle c);
};

Circle operator+(double value, Circle c)
{
    Circle temp;

    temp.radius = value + c.radius;

    return temp;
}

int main()
{
    Circle circle1;
    Circle circle2;
    Circle circle3;
    Circle circle4;
    Circle circle5;
    Circle circle6;

    circle1.setRadiusValue(6.3);

    circle2.setRadiusValue(4.2);

    circle3.setRadiusValue(12.5);

    
    circle4 = circle1 + circle2;    
    circle5 = circle2 + 8.23;
    circle6 = 7.4 + circle2;

    cout << "Radius of circle4 : "
         << circle4.getRadiusValue() << endl
         << endl;

    cout << "Radius of circle5 : "
         << circle5.getRadiusValue() << endl
         << endl;

    cout << "Radius of circle6 : "
         << circle6.getRadiusValue() << endl
         << endl;

    return 0;
}