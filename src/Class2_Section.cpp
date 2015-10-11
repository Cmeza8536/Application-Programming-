#include <iostream>
#include "Class2_Faculty.h"
#include "Class2_Student1.h"
#include "Class2_Courses.h"
using namespace std;

     // begin private section
     int Size;
     int SectionID;
     string room;
     Faculty instructor;
    // Course sectionCourse;
     Student enrolledStudent;
 int getSize() {
     return Size;
 }
 void setSize(int sectionSize) {
	 Size = sectionSize;
 }
 int getSectionID() {
      return SectionID;
  }
  void setSectionID(int mySectionID) {
	  SectionID = mySectionID;
  }
 Faculty getinstructor() {
      return instructor;
  }
  void setinstructor(Faculty sectioninstructor) {
	  instructor = sectioninstructor;
  }

 /*Course getCourseID() {
       return sectionCourse;
   } */
  // void setCourse(Course sectioncourse) {
	//   sectionCourse = sectioncourse;
  // }

 Student getEnrolledStudent() {
        return enrolledStudent;
    }
    void setEnrolledStudent(Student sectionenrolledStudent) {
    	enrolledStudent = sectionenrolledStudent;
    }

//Section(Course newsectionCourse, Faculty newinstructor){
	//sectionCourse= newsectionCourse;
	//instructor=newinstructor;
//}





