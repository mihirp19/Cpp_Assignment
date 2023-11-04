#include <iostream>
#include <string>

using namespace std;

class Students {
public:
    string name;
    int RollNo;
    void studentInfo() {
        cout << "Enter the name of student: ";
        cin >> name;
        cout << "Enter the Roll No of the student: ";
        cin >> RollNo;
    }
    void DisplayStudentInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Roll No: " << RollNo << endl;
    }
};

class Test : public Students {
public:
    int sub1, sub2;
    void TestMarks() {
        cout << "Enter the marks of Subject 1: ";
        cin >> sub1;
        cout << "Enter the marks of Subject 2: ";
        cin >> sub2;
    }
    void DisplayTestMarks() {
        cout << "Marks for Subject 1: " << sub1 << endl;
        cout << "Marks for Subject 2: " << sub2 << endl;
    }
};

class Result : public Test {
public:
    void DisplayRes() {
        DisplayStudentInfo();
    }
    void DisplayTotalMarks() {
        cout << "Total Marks: " << sub1 + sub2 << endl;
    }
};

int main() {
    Result obj;
    obj.studentInfo();
    obj.TestMarks();
    
    obj.DisplayRes();
    obj.DisplayTestMarks();
    obj.DisplayTotalMarks();
    
    return 0;
}

