#include <iostream>
#include <fstream>
using namespace std;
class Student
{
private:
    string name;
    int roll;
    string branch;

public:
    Student(){};

    Student(string n, int r, string br)
    {
        name = n;
        roll = r;
        branch = br;
    }

    friend ofstream &operator<<(ofstream &ofs, Student &s);
    friend ifstream &operator>>(ifstream &ifs, Student &s);
    friend ostream &operator<<(ostream &os, Student &s);
};
ofstream &operator<<(ofstream &ofs, Student &s)
{
    ofs << s.name;
    ofs << s.roll;
    ofs << s.branch;
    return ofs;
}

ifstream &operator>>(ifstream &ifs, Student &s)
{
    ifs >> s.name;
    ifs >> s.roll;
    ifs >> s.branch;
    return ifs;
}

ostream &operator<<(ostream &os, Student &s)
{
    os << "Name " << s.name << endl;
    os << "Roll " << s.roll << endl;
    os << "Branch " << s.branch << endl;
}
int main()
{
    Student s1("Zohaib", 30, "CSE");;
    
    ofstream ofs("Zohiab.txt");
    ofs << s1;
    ofs.close();
    ifstream ifs("Zohaib.txt");
    ifs >> s1;

    cout << s1;
    return 0;
}