#include <iostream>
using namespace std;

class student
{
  private:
        int   rollno;
        char  name[50];
        char address[50];
  public:
    void readDetails(){
      cout << "Enter Roll number:";
      cin >> rollno;
      cout << "Enter Name:";
      cin >> name;
      cout << "Enter Address";
      cin >> address;
     }
    void printDetails(){
      cout << "Student details:\n";
      cout << "RollNo=" << rollno<<endl;
      cout << "Name=" << name<<endl;
      cout << "Address=" <<address<<endl;     
    }
};

int main()
{
    student std[50];    
    int n, i;
     
    cout << "Enter total number of students: ";
    cin >> n;
     
    for(i=0; i<n; i++){
        cout << "Enter details of student " << i+1 << ":\n";
        std[i].readDetails();
    }
    
    for(i=0; i<n; i++){
        cout << "\nDetails of student " << i+1 << ":\n";
        std[i].printDetails();
    }
    return 0;
}

