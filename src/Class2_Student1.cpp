#include <iostream>
using namespace std;


class Student {
 public:
    int getInt();
	string getAddress();
    int getStudentID();
    void setint(int age);
    void setID(int myStudentID);
    void setAddress(string myAddress);

};


        // begin private section
     int Age;
     int StudentID;
     string address;
 int getInt() {
     return Age;
 }
 void setint(int age) {
     Age = age;
 }
 int getStudentID() {
      return StudentID;
  }
  void setID(int myStudentID) {
	  StudentID = myStudentID;
  }
 string getAddress() {
      return address;
  }
  void setAddress(string myAddress) {
      address = myAddress;
  }






