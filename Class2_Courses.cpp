#include <iostream>
using namespace std;



class Course {
public:

string getCourseDepartment();
string getCourseID();
bool getRequired();
string getPreRequisite();

void setDepartment(string deptName);
void setCourseID(string courseID);
bool setRequired(bool isRequired);
void setPreRequisite(string preRequisite);
Course(){

}
};

                    // begin private section
     string CourseDepartment;
     string CourseID;
     bool Required;
     string PreRequisite;
 string getCourseDepartment() {
     return CourseDepartment;

 }
 void setCourseDepartment(string courseDepartment) {
	 CourseDepartment = courseDepartment;
 }
 string getCourseID() {
      return CourseID;
  }
  void setCourseID(string myCourseID) {
	  CourseID = myCourseID;
  }
 bool getRequired() {
       return Required;
   }
   void setRequired(bool courseRequired) {
	   Required = courseRequired;
   }
 string getPreRequisite() {
      return PreRequisite;
  }
  void setPreRequisite(string coursePreRequisite) {
	  PreRequisite = coursePreRequisite;
  }






