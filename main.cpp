#include <iostream>
#include <string>
#include <vector>

#include "LinkedList.h"
#include "Person.h"
#include "Student.h"
#include "Course.h"


using namespace std;


void testProgram() {
    Student testStudent;

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


    testStudent.printInfo();

}


int main() {
    testProgram();
    return 0;
}