#include <iostream>
#include <fstream>
using namespace std;
// Serialisation is a process of storing and retrieving info from a file
class Student
{
public:
    string name;
    int roll;
    string branch;
    friend ofstream &operator<<(ofstream &ofs, Student &);
    friend ofstream &operator>>(ifstream &ifs, Student &s);
};

ofstream &operator<<(ofstream &ofs, Student &s)
{
    ofs << s.name << endl;
    ofs << s.roll << endl;
    ofs << s.branch << endl;
    return ofs;
}

ofstream &operator>>(ifstream &ifs, Student &s)
{
    ifs >> s.roll;
    ifs >> s.roll;
    ifs >> s.branch;
}
int main()
{
    
    Student s1;
    s1.name = "Khan";
    s1.roll = 10;
    s1.branch = "CS";
    
    // Now we want to store the info in a file as an object.
    ofstream ofs("Student.txt", ios::trunc);
    // To store the object of Student Class we've to overload the  ofs<< operator in student class.
    ofs << s1;
    // Now after overloading this will save all info of object at once>
    ofs.close();
    

    // Writing Complete.

    // Now retrieving data from the created file.
    //  Now we'll overload ifs>> operator

    ifstream ifs("Student.txt"); // Opens the file
    ifs >> s1;                   // Retrieve data from object(>> operator has been overloaded).

    // Displaying Data.
    cout << "Name " << s1.name << endl;
    cout << "Roll " << s1.roll << endl;
    cout << "Branch " << s1.branch << endl;

    ifs.close();

    return 0;
}