/*faclty class
//called facluty id, derived from the base class "personid" 
data memeber "hire year" should be private. 
*/
#ifndef FACULTY_H
#define FACULTY_H
#include <string>
#include"Person.h"
using namespace std;

class Faculty:public Person {

public:
Faculty(string nFirstname = " ", string nLastname = " ", string HireYear = " ");
int getFacultyId();
string getHireYear();
void setHireYear(string HireYear);
virtual void print();

private:
string FacultyHireYear;

};

#endif










