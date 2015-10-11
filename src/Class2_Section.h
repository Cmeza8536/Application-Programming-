/*
 * Class2_Section.h
 *
 *  Created on: Oct 10, 2015
 *      Author: root
 */
#include "Class2_Student1.h"
#include "Class2_Faculty.h"

#include "Class2_Courses.h"
#ifndef CLASS2_SECTION_H_
#define CLASS2_SECTION_H_
class Section {
Section(Faculty f1, Course c1){

}
	 public:
	Section(Course newsectionCourse, Faculty newinstructor);
	Student getEnrolledStudent();
	// Course getCourseID();
	 Faculty getinstructor();
	 int getSize();
	 int getSectionID();
	 void setEnrolledStudent(Student sectionenrolledStudent);
	 void setCourse(Course sectioncourse);
	 void setinstructor(Faculty sectioninstructor);
	 void setSectionID(int mySectionID);
	 void setSize(int sectionSize);

};


#endif /* CLASS2_SECTION_H_ */
