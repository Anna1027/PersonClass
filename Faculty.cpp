//**********************************
// Student class
// Student.cpp file
//*********************************
#include <iostream>
#include "Faculty.h"
#include <string>
using namespace std;

Faculty::Faculty(string nFirstname, string nLastname, string hireyear )
:Person(nFirstname, nLastname) //initializer list
{
  setHireYear(hireyear);
  print();

}
string Faculty::getHireYear(){
  return FacultyHireYear;
}

int Faculty::getFacultyId(){
   return getpersonId();
}
void Faculty::setHireYear(string HireYear) {
  FacultyHireYear = HireYear;
}

void Faculty::print()
{
  cout<<"Faculty First Name: "<<getFirstname()<<endl;
  cout<<"Faculty Last Name: "<<getLastname()<<endl;
  cout<<"Faculty ID: "<<getpersonId()<<endl;
  cout<<"Faculty Hired Year: "<<getHireYear()<<endl;

}




