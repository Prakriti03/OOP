#include<iostream> 
using namespace std;
class complex
{
    float real;
    float imag;
    public:
    void getdata()
    {
        cout<<"Enter complex number"<<endl;
        cin>>real>>imag;
        
    }
    void showdata()
    {
        cout<<"The sum is"<<endl; 
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    friend complex operator +(complex,complex);
};
complex operator +(complex cc1,complex cc2) 
{
    complex temp;
    temp.real=cc1.real+cc2.real; temp.imag=cc1.imag+cc2.imag;
    return temp; 
}
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1+c2;  
    c3.showdata();
    return 0;
}
