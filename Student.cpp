//need to create a constructor take four arguments 
//first and last name, and GPA and admission term. 
//override the print function
#include <iostream>
#include "Student.h"
#include <string>
using namespace std;

//int Student::nextId = 1;

Student::Student(string nFirstname, string nLastname, float nGPA, string admin)
:Person(nFirstname, nLastname) //initializer list
{
  setGPA(nGPA);
  setAdmission(admin);

  print();
}
void Student::setGPA(float nGPA){
  studentGPA = nGPA;

}
float Student::getGPA(){

  return studentGPA;
}

void Student::setAdmission(string admin){

  studentadmin=admin;

}

string Student::getAdmission(){
  return studentadmin;
}

void Student::print(){
  cout<<"Student First Name: "<<getFirstname()<<endl;
  cout<<"Student Last Name: "<<getLastname()<<endl;
  cout<<"Student ID: "<<getpersonId()<<endl;
  cout<<"Student Admission Term: "<<getAdmission()<<endl;
  cout<<"Student GPA: "<<getGPA()<<endl;

}


