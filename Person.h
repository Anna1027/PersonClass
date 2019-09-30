//create a base class, called person, 
//3 data memebers first name string, last name string, names need to be public.    integer for ID, unique ID is set by system. ID cannot have a set ID. 
//use static data member for ID, keep imcrementing it from 1 for the ID. 
//mkae this class an abstract class
#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person {

protected:
Person(string nFirstname, string nLastname);
string getFirstname()const; //doesnt take any parameters
void setFirstname(string nFirstname);
string getLastname()const;
void setLastname(string nLastname);
int getpersonId()const; //dont create setID

virtual void print() = 0; //making this print function abstract class.

  private: 
  string firstname;
  string lastname;
  int personId;
  static int nextId; //maintain that the last id thats assigned. 

};

#endif 
