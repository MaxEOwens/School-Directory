
#include "Staff.h"
#include "Course.h"
#include <iostream>
#include <string>
 Staff::Staff(){}
 
  void Staff::setPosition(const std::string& position){

  }
  std::string Staff::getPosition() const{

  }


  // Not sure how these should be implemented
  void Staff::addCurrentCourse(const Course course){
currentCourses.push_back(course);
  }
  void Staff::removeCurrentCourse(const Course course){
    //add later
  }
  std::vector<Course> Staff::getCurrentCourses() const{

  }

  void Staff::printInfo() const{
  
    std::cout << "Staff Name: " << getName() << std::endl;
    std::cout << "Staff Age: " << getAge() << std::endl;
    std::cout << "Staff ID: " << getId() << std::endl;
    std::cout << "Staff Position: "<< getPosition() << std::endl;
    
    std::cout << "Current courses: " << std::endl;
    for (int i = 0; i < currentCourses.size(); i++)
    {
      currentCourses.at(i).printInfo();
    }
    
  }