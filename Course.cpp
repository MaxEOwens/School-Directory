#include <iostream>
#include <string>
#include "Course.h"

  // Constructor
  Course::Course(const std::string name, const std::string term, const std::string instructor, std::string section){
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

  void Course::setSection(std::string courseSect){
    courseSection = courseSect;
  }

  std::string Course::getSection() const{
    return courseSection;
  }

  void Course::printInfo() const{
    std::cout << "    Course Name: " << getName() << std::endl;
    std::cout << "    Course Term: " << getTerm() << std::endl;
    std::cout << "    Course Instructor: " << getInstructor() << std::endl;
    std::cout << "    Course Section: " << getSection() << std::endl;
    std::cout << std::endl;
  }


  //overload the << operator
  std::ostream& operator<<(std::ostream& os, const Course& course){
    os << "    Course Name: " << course.getName() << std::endl;
    os << "    Course Term: " << course.getTerm() << std::endl;
    os << "    Course Instructor: " << course.getInstructor() << std::endl;
    os << "    Course Section: " << course.getSection() << std::endl;
    os << std::endl;
    return os;
  }

  // ostream operator overload?