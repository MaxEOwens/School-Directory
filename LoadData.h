
#include <vector>
#include <string>
#include "Student.h"
#include "Staff.h"
#include "Course.h"

using namespace std;

void setStudentInfo(Student& testStudent, int i){
    testStudent.setName("John Doe " + to_string(i));
    testStudent.setEmail("test@gmail.com");
    testStudent.setAddress("1234 Elm St");
    testStudent.setPhone("123-456-7890");
    testStudent.setAge(20);
    testStudent.setId(0+i);
    testStudent.setParentPhone("098-765-4321");
    testStudent.setGraduationYear("2023");

    Course testCourse("Math", "Spring 24", "Who", "1111");
    Course testCourse1("English", "Spring 24", "What", "2222");
    Course testCourse2("Bio", "Spring 24", "Where", "3333");
    Course testCourse3("CSC 340", "Spring 24", "When", "4444");

    testStudent.addCurrentCourse(testCourse);
    testStudent.addCurrentCourse(testCourse1);
    testStudent.addCurrentCourse(testCourse2);
    testStudent.addCurrentCourse(testCourse3);

    Course testCourse4("Math", "Fall 23", "Who", "111");
    Course testCourse5("English", "Fall 23", "What", "222");
    Course testCourse6("Hist", "Fall 23", "Where", "333");
    Course testCourse7("CSC 220", "Fall 23", "When", "444");

    testStudent.addCompletedCourse(testCourse4);
    testStudent.addCompletedCourse(testCourse5);
    testStudent.addCompletedCourse(testCourse6);
    testStudent.addCompletedCourse(testCourse7);
    
}

void setStaffInfo(Staff& testStaff, int i){
    testStaff.setName("Mr. Smith" + to_string(i));
    testStaff.setEmail("test@gmail.com");
    testStaff.setAddress("1234 Elm St");
    testStaff.setPhone("123-456-7890");
    testStaff.setAge(20);
    testStaff.setId(0+i);
    testStaff.setPosition("Teacher");
     
    Course testCourse("Math", "Spring 24", "Who", "1111");
    Course testCourse1("English", "Spring 24", "What", "2222");
    Course testCourse2("Bio", "Spring 24", "Where", "3333");
    Course testCourse3("CSC 340", "Spring 24", "When", "4444");
    
    testStaff.addCurrentCourse(testCourse);
    testStaff.addCurrentCourse(testCourse1);
    testStaff.addCurrentCourse(testCourse2);
    testStaff.addCurrentCourse(testCourse3);
}


void loadStudents(vector<Student>& students, int num){

  for(int i = num; i >= 0; i--){
    Student testStudent;
    setStudentInfo(testStudent, i);
    students.push_back(testStudent);
  }
}


void loadStaff(vector<Staff>& staff, int num){
    for(int i = 0; i <= 10; i++){
        Staff testStaff;
        setStaffInfo(testStaff, i);
        staff.push_back(testStaff);
    }
}

