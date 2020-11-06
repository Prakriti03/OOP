#include<iostream>
using namespace std;
class complex 
{
    float real,imag;
    public: 
    void getdata()
    {
        cout<<"Enter complex number"<<endl;
        cin>>real>>imag;
    }
    complex operator ++()
    {
        complex temp;
        temp.real=++real;
        temp.imag=++imag;
        return temp;
    }
    complex operator ++(int)
    {
        complex temp;
        temp.real=real++;
        temp.imag=imag++;
        return temp;
    }
    void showdata()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2 = ++c1;
    c3 = c2++;
    c1.showdata();
    c2.showdata();
    c3.showdata();
}
