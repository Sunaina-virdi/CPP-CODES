#include <iostream>
using namespace std;

class complex
{
public:
    double real;
    double image;

    complex()
    {
        real = 0;
        image = 0;
    }

public:
    complex(double r, double i)
    {
        real = r;
        image = i;
    }
    complex operator+(complex other)
    {
        complex temp;
        temp.real = real + other.real;
        temp.image = image + other.image;
        return temp;
    }

    void disp()
    {
        cout << real << endl << image << endl;
    }
};
int main()
{

    complex num1, num2;
    cin >> num1.real >> num1.image;
    cin >> num2.real >> num2.image;

    complex num3 = num1 + num2;
    cout << "sum" << endl;
    num3.disp();

    return 0;
}