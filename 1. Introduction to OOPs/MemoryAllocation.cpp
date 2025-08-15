#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll_number, age;
    string grade;
};

int main() {
    
    // ! Dynamic memory allocation
    Student *student = new Student();

    //? Assing value to the object
    (*student).name = "Radha";
    student->age = 21;

    cout<<student->name<<" \n";

    return 0;
}