#include <iostream>
using namespace std;
class student
{
        char  name[30];
        char   address[50];
        int   roll,marks;
    public:
        void getdata()
        {
            cout<<"Enter the name,address"<<endl;
            cin>>name>>address;
            cout<<"Enter the roll and marks"<<endl;
            cin>>roll>>marks;
        }
        void showdata()
        {
            cout<<"The details of students are:"<<endl;
            cout<<"Name:"<<name<<"Address:"<<address<<"Roll:"<<roll<<"Marks:"<<marks;
        }
};
int main()
{
    student s;
    s.getdata();
    s.showdata();
    return 0;
}
