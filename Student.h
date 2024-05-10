#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include "Course.h"
#include <string>
#include <vector>

class Student : public Person {
public:
  // Constructor
  Student(const std::string& name, const std::string& email, 
    const std::string& address, const std::string& phone, int age, 
    int id, const std::string& parentPhone, const std::string& graduationYear );
  


  // Destructor?
  //~Student();


  // Setters and getters for the Student class
  void setParentPhone(const std::string& parentPhone);
  std::string getParentPhone() const;

  void setGraduationYear(const std::string& graduationYear);
  std::string getGraduationYear() const;


  // Not sure how these should be implemented
  void addCurrentCourse(const std::string& course);
  void removeCurrentCourse(const std::string& course);
  std::vector<Course> getCurrentCourses() const;

  void addCompletedCourse(const std::string& course);
  void removeCompletedCourse(const std::string& course);
  std::vector<Course> getCompletedCourses() const;

  void printInfo() const;

private:
  std::string parentPhone;
  std::string graduationYear;
  std::vector<Course> currentCourses;
  std::vector<Course> completedCourses;

};

#endif // STUDENT_H