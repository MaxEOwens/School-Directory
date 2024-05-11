
#include "Staff.h"
#include "Course.h"
#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <fstream>
 Staff::Staff(){}
 Staff::Staff(const std::string& name, const std::string& email, 
    const std::string& address, const std::string& phone, int age, 
    int id, const std::string position){
      setName(name);
      setEmail(email);
      setAddress(address);
      setPhone(phone);
      setAge(age);
      setId(id);
      setPosition(position);
    }
 
  void Staff::setPosition(const std::string& staffPosition){
    position = staffPosition;
  }
  std::string Staff::getPosition() const{
    return position;
  }


  // Not sure how these should be implemented
  void Staff::addCurrentCourse(const Course course){
currentCourses.push_back(course);
  }
  void Staff::removeCurrentCourse(const Course course){
    //add later
  }
  std::vector<Course> Staff::getCurrentCourses() const{
    return currentCourses;
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