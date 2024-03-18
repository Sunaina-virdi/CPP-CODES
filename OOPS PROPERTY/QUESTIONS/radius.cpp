#include <iostream>
using namespace std;

class circle
{
public:
    double radius;

public:
    // default
    circle()
    {
        radius = 0;
    }
    // parameterized
    circle(double r)
    {
        radius = r;
    }
    // operator overloading
    bool operator==(circle other)
    {
        return radius == other.radius;
    }
};
int main()
{
    circle c1, c2, c3;
    cin >> c1.radius;
    cin >> c2.radius;
    cin >> c3.radius;

    if (c1 == c2)
    {
        cout << "Circle 1 is equal to Circle 2" << endl;
    }
    else
    {
        cout << "Circle 1 is not equal to Circle 2" << endl;
    }
    if (c1 == c3)
    {
        cout << "Circle 1 is equal to Circle 3" << endl;
    }
    else
    {
        cout << "Circle 1 is not equal to Circle 3" << endl;
    }
    if (c2 == c3)
    {
        cout << "Circle 2 is equal to Circle 3" << endl;
    }
    else
    {
        cout << "Circle 2 is not equal to Circle 3" << endl;
    }

    return 0;
}