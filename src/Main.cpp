#include <iostream>
#include "Class2_Student1.h"
#include "Class2_Faculty.h"
#include "Class2_Section.h"
#include "Class2_Courses.h"
//#include "Class2_Student1.cpp"
//#include "Class2_Faculty.cpp"
//#include "Class2_Section.cpp"
//#include "Class2_Courses.cpp"
#include <vector>
using namespace std;
 int main() {
     Student st1, st2;
  /*   st1.setID(1234);
     st1.setAddress("West Have");
     st1.setint(25);
     st2.setID(9999);
     st2.setAddress("New Have");
     st2.setint(20); */
     Faculty f1;
    // f1.setFacultyname("Izzat Alsmadi");
     //f1.setFacultyID(7777);
    // Section s1;
     //s1.setinstructor(f1);*/
    // Course c1;
     //c1.setCourseID("CSCI2212");

     int size=13;
     vector<Student> sarray(size);
     sarray[0]=st1;
     sarray[1]=st2;



     return 0;
 }
