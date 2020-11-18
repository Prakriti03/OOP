//Write a program in CPP to convert the distance in meters entered by the user into distance in feet and
//inch using the concept of basic to user defined data conversion.
#include<iostream>
using namespace std;
class Dist
{
    float feet;
    float inch;
    public:
    Dist()
    {
        feet = 0.00;
        inch = 0.00;
    }
    Dist(float m)
    {
        float f = 3.2808 *m; 
        feet = int(f);
        inch = 12*(f-feet); 
    }
    void showdata()
    {
        cout<<"The distance is"<<endl;
        cout<<feet<<"Feet "<<inch<<"Inch";
    }
};
int main()
{
    Dist d;
    float meter;
    cout<<"Enter distance in meters"; cin>>meter;
    d = meter; 
    d.showdata();
    return 0;
}
