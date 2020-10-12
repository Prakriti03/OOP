#include<iostream>
using namespace std;
int display(int l = 10,int b = 5,int h=6)
{
    int V;
    V = l*b*h;
    return V;
}
int main()
{
    cout<<"Volume of cuboid when l=10,b=5,h=6 is "<<display()<<endl;
    cout<<"Volume of cuboid when l=7,b=5,h=6 is "<<display(7)<<endl;
    cout<<"Volume of cuboid when l=5,b=4,h=6 is "<<display(5,4)<<endl;
}