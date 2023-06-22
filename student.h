#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <vector>
using namespace std;


class Student
{
public:
    Student();

protected :
    struct cource;

private:
    string name;
    string department;
    int id;
    vector<string> cources_taken;
    vector<string> interests;

};


#endif // STUDENT_H
