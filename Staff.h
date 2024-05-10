#ifndef STAFF_H
#define STAFF_H

#include "Person.h"
#include "Course.h"
#include <string>
#include <vector>

class Staff : public Person {
public:
  // Constructor
  Staff(const std::string& name, const std::string& email, 
    const std::string& address, const std::string& phone, int age, 
    int id, const std::string position); 

  
  // Destructor?
  //~Student();


  // Setters and getters for the Staff class
  void setPosition(const std::string& position);
  std::string getPosition() const;


  // Not sure how these should be implemented
  void addCurrentCourse(const std::string& course);
  void removeCurrentCourse(const std::string& course);
  std::vector<Course> getCurrentCourses() const;

  void printInfo() const;

private:
  std::string position;
  std::vector<Course> currentCourses;

};

#endif // STAFF_H