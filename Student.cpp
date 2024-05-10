
#include "Student.h"
#include "Course.h"
#include <iostream>

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



  void Student::addCurrentCourse(const std::string& course){ //this needs work
    //currentCourses.push_back(course); ??
    
    //need to string to course conversion in course.h
    //maybe there is a better way to do this

  }

  void Student::removeCurrentCourse(const std::string& course){

  }

  std::vector<Course> Student::getCurrentCourses() const{
    return currentCourses;//this needs work
  }



  void Student::addCompletedCourse(const std::string& course){

  }

  void Student::removeCompletedCourse(const std::string& course){

  }
  
  std::vector<Course> Student::getCompletedCourses() const{
    return completedCourses;//this needs work
  }



  void Student::printInfo() const{
    std::cout << "Student Name: " << getName() << std::endl;
    std::cout << "Student Age: " << getAge() << std::endl;
    std::cout << "Student ID: " << getId() << std::endl;
    std::cout << "Student Parent Phone: " << getParentPhone() << std::endl;
    std::cout << "Student Graduation Year: " << getGraduationYear() << std::endl;
  }