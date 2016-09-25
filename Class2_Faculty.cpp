#include <iostream>
//#include "Class2_Faculty.h"
using namespace std;

class Faculty{
public:

int getFacultyID();
string getFacultyName();
void setFacultyname(string myFacultyname);
void setFacultyID(int myFacultyID);
};
                   // begin private section

     int FacultyID;
     string Facultyname;

  int getFacultyID() {
      return FacultyID;
  }
  void setFacultyID(int myFacultyID) {
	  FacultyID = myFacultyID;
  }
 string getFacultyname() {
      return Facultyname;
  }
  void setFacultyname(string myFacultyname) {
	  Facultyname = myFacultyname;
  }






