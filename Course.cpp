#include <iostream>
#include <string>
#include "Course.h"

  // Constructor
  Course::Course(const std::string name, const std::string term, const std::string instructor, int section){
    setName(name);
    setTerm(term);
    setInstructor(instructor);
    setSection(section);
  }

  // Getters and Setters
  void Course::setName(const std::string& name){
    courseName = name;
  }

  std::string Course::getName() const{
    return courseName;
  }

  void Course::setTerm(const std::string& term){
    courseTerm = term;
  }

  std::string Course::getTerm() const{
    return courseTerm;
  }

  void Course::setInstructor(const std::string& instructor){
    courseInstructor = instructor;
  }

  std::string Course::getInstructor() const{
    return courseInstructor;
  }

  void Course::setSection(int courseSection){
    courseSection = courseSection;
  }

  int Course::getSection() const{
    return courseSection;
  }

  void Course::printInfo() const{
    std::cout << "Course Name: " << getName() << std::endl;
    std::cout << "Course Term: " << getTerm() << std::endl;
    std::cout << "Course Instructor: " << getInstructor() << std::endl;
    std::cout << "Course Section: " << getSection() << std::endl;
  }

  // ostream operator overload?