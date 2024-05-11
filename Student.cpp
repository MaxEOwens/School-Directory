
#include "Student.h"
#include "Course.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <string>

  Student::Student(){}

  Student::Student(const std::string& name, const std::string& email, 
                  const std::string& address, const std::string& phone, int age, 
                  int id, const std::string& parentPhone, const std::string& graduationYear ){
    setName(name);
    setEmail(email);
    setAddress(address);
    setPhone(phone);
    setAge(age);
    setId(id);
    setParentPhone(parentPhone);
    setGraduationYear(graduationYear);

  } //this needs work
  
  // Destructor?
  //~Student();


  // Setters and getters for the Student class
  void Student::setParentPhone(const std::string& parentPhoneNumber){
    parentPhone = parentPhoneNumber;
  }
  std::string Student::getParentPhone() const{
    return parentPhone;
  }

  void Student::setGraduationYear(const std::string& gradYear){
    graduationYear = gradYear;
  }
  
  std::string Student::getGraduationYear() const {
    return graduationYear;
  }



  void Student::addCurrentCourse(const Course newCourse){ //this needs work
    currentCourses.push_back(newCourse);
  }

  void Student::removeCurrentCourse(const Course course){
    //do later
  }

  std::vector<Course> Student::getCurrentCourses() const{
    return currentCourses;
  }



  void Student::addCompletedCourse(const Course newCourse){
    completedCourses.push_back(newCourse);
  }

  void Student::removeCompletedCourse(const Course course){
    //do later
  }
  
  std::vector<Course> Student::getCompletedCourses() const{
    return completedCourses;
  }



  void Student::printInfo() const{
    std::cout << "Student Name: " << getName() << std::endl;
    std::cout << "Student Age: " << getAge() << std::endl;
    std::cout << "Student ID: " << getId() << std::endl;
    std::cout << "Student Parent Phone: " << getParentPhone() << std::endl;
    std::cout << "Student Graduation Year: " << getGraduationYear() << std::endl;
    
    std::cout << "Current courses: " << std::endl;
    for (int i = 0; i < currentCourses.size(); i++)
    {
      currentCourses.at(i).printInfo();
    }
    
    std::cout << "Past courses: " << std::endl;
    for (int i = 0; i < completedCourses.size(); i++)
    {
      completedCourses.at(i).printInfo();
    }
  }



  std::string Student::fileOut() const{
    std::ostringstream os;

    os << "Student Name: " << getName() << std::endl;
    os << "Student Age: " << getAge() << std::endl;
    os << "Student ID: " << getId() << std::endl;
    os << "Student Parent Phone: " << getParentPhone() << std::endl;
    os << "Student Graduation Year: " << getGraduationYear() << std::endl;
    
    os << "Current courses: " << std::endl;
    for (int i = 0; i < getCurrentCourses().size(); i++)
    {
      os << getCurrentCourses().at(i) << std::endl;
    }
    
    os << "Past courses: " << std::endl;
    for (int i = 0; i < getCompletedCourses().size(); i++)
    {
      os << getCompletedCourses().at(i) << std::endl;
    }
    return os.str();
  }
