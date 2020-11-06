#include<iostream> 
using namespace std;
class complex
{
    float real;
    float imag;
    public:
    complex()
    { 
        real=0; imag=0; 
    }
    complex(float r,float i)
    {
        real=r;
        imag=i;
    }
    complex operator +(complex c)
    {
        complex temp; 
        temp.real=real+c.real; 
        temp.imag=imag+c.imag;
        return temp;
    }
    void showdata()
    {
    cout<<"The sum is"<<endl;
    cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main()
{
    complex c1(1,2),c2(3,4),c3; 
    c3=c1+c2;
    c3.showdata();
    return 0;
}

