/*
has two data memebr GPA is float, admission term is string 
//GPA and admission should be private 
//student id is derived from the base class "personid"
*/
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "Person.h"
using namespace std;

class Student:public Person {
public:
   //create set and get function for each one 
  Student(string nFirstname = " ", string nLastname = " ", float nGPA = 0, string admin = " ");
  void setGPA(float nGPA);
  float getGPA();
  void setAdmission(string admin);
  string getAdmission();

  virtual void print();

private:
 
  float studentGPA;
  string studentadmin;

};

#endif










