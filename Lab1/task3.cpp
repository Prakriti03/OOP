#include <iostream>
#define PI 3.14
using namespace std;
void display(int r)
{
    float area;
    area= PI*r*r;
    cout<<"Area of circle ="<<area<<endl;
}
void display(int l,int b)
{
    cout<<"Area of rectangle ="<<l*b<<endl;
}
int main()
{
    display(7);
    display(6,4);
    return 0;
}
