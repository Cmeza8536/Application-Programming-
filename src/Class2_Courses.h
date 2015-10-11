/*
 * Class2_Courses.h
 *
 *  Created on: Oct 10, 2015
 *      Author: root
 */

#ifndef CLASS2_COURSES_H_
#define CLASS2_COURSES_H_
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

#endif /* CLASS2_COURSES_H_ */
