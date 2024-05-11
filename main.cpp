#include <iostream>
#include <string>
#include <vector>

//testing these
#include <sstream>
#include <fstream>

#include "LinkedList.h"
#include "Person.h"
#include "Student.h"
#include "Staff.h"
#include "Course.h"

using namespace std;

void setStudentInfo(Student& testStudent){
    testStudent.setName("John Doe");
    testStudent.setEmail("test@gmail.com");
    testStudent.setAddress("1234 Elm St");
    testStudent.setPhone("123-456-7890");
    testStudent.setAge(20);
    testStudent.setId(12345);
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
}

void setStaffInfo(Staff& testStaff){
    testStaff.setName("Mr. Smith");
    testStaff.setEmail("test@gmail.com");
    testStaff.setAddress("1234 Elm St");
    testStaff.setPhone("123-456-7890");
    testStaff.setAge(20);
    testStaff.setId(12345);
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


void testProgram() {
    Student testStudent;
    setStudentInfo(testStudent);
    testStudent.printInfo();

    Staff testStaff;
    testStaff.setName("Jane Doe");
    testStaff.setEmail("test@gmail.com");
    testStaff.setAddress("1234 Elm St");
    testStaff.setPhone("123-456-7890");
    testStaff.setAge(45);
    testStaff.setId(123456);
    testStaff.setPosition("Teacher");


    Course testCourseS("Math", "Spring 24", "Who", "1111");
    Course testCourse1S("English", "Spring 24", "What", "2222");
    Course testCourse2S("Bio", "Spring 24", "Where", "3333");
    Course testCourse3S("CSC 340", "Spring 24", "When", "4444");

    testStaff.addCurrentCourse(testCourseS);
    testStaff.addCurrentCourse(testCourse1S);
    testStaff.addCurrentCourse(testCourse2S);
    testStaff.addCurrentCourse(testCourse3S);

    testStaff.printInfo();
    
}



void testRead(){
    ifstream file("testWrite.txt");
    string line;
    while(getline(file, line)){
        cout << line << endl;
    }
    file.close();
    cout << "File read" << endl;
}



void tetsWrite(Student testStudent){
    //open file testWrite.txt
    std::string outFile = testStudent.fileOut();

    ofstream file("testWrite.txt");
    file << outFile;
    file.close();

    cout << "File written" << endl;

}



int main() {
    Student testStudent;
    setStudentInfo(testStudent);
    tetsWrite(testStudent);

    Staff testStaff;
    setStaffInfo(testStaff);
    testStaff.printInfo();


    //testProgram();
    return 0;
}