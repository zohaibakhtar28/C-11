#include <iostream>
#include <cstring>
using namespace std;
class Student
{
private:
    int roll;
    string name;
    int m1, m2, m3;
    int total;
    float percentage;

public:
    Student(int roll, string name)
    {
        this->roll = roll;
        this->name = name;
    }
    void TotalMarks(int m1, int m2, int m3)
    {
        this->m1 = m1;
        this->m2 = m2;
        this->m3 = m3;
        this->total = m1 + m2 + m3;
        
    }
    void per()
    {
        percentage = (total / 300.0) * 100;
    }
    void Grade()
    {
        if (percentage > 60)
        {
            cout << "Grade is A" << endl;
        }
        if (percentage > 30 && percentage <= 59)
        {
            cout << "Grade is B" << endl;
        }
        else if(percentage<30)
            cout << "Grade C" << endl;
    }

    void display()
    {
        cout<<"Name : "<<this->name<<endl;
        cout<<"Roll :"<<this->roll<<endl;
        cout<<"Total Marks :"<<this->total<<endl;
        cout<<"Grade :"; Grade();
        
        cout<<"Percentage :"<<percentage<<endl;
    }
};

int main()
{
    int roll, m1,m2,m3;
    string name;
    cout<<"Enter Roll Number of the student"<<endl;
    cin>>roll;
    cout<<"Enter Name of the Student"<<endl;
    cin.ignore();
    getline(cin,name);
    Student s(roll , name);
    cout<<"Enter Marks in 3 Subjects\n";
    cin>>m1>>m2>>m3;
    s.TotalMarks(m1,m2,m3);
    s.per();
    s.display();
    
    

    return 0;
}