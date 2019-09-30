//**********************************
// Student class
// Student.cpp file
//*********************************
#include <iostream>
#include "Person.h"
#include <string>
using namespace std;

//create constructors 
int Person::nextId = 1;

Person::Person(string nFirstname, string nLastname)
{

  setFirstname(nFirstname);
  setLastname(nLastname);
  personId = nextId++;
}

string Person::getFirstname()const
{
  return firstname;
}

string Person::getLastname()const
{
  return lastname;
}

int Person::getpersonId()const
{
  return personId;
}

void Person::setFirstname(string nFirstname) {

firstname = nFirstname;
}

void Person::setLastname(string nLastname){

lastname = nLastname;
  
};
