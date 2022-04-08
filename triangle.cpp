#include <iostream>

using namespace std;

int main()
{
    int base,height;
    float area;
    cout << "enter base of triangle:";
    cin>>base;

    cout<<"enter height of triangle:";
    cin>>height;

    area=0.5*base*height;

    cout<<"area of triangle is:"<<area<<"units";
    return 0;
}
