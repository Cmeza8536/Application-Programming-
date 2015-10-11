#include <iostream>
using namespace std;

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






