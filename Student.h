#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include "Course.h"
#include <string>
#include <vector>

class Student : public Person {
public:
  // Constructor
  Student();

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
  void addCurrentCourse(const Course newCourse);
  void removeCurrentCourse(const std::string courseSection);
  void moveCurToCom();

  std::vector<Course> getCurrentCourses() const;

  void addCompletedCourse(const Course newCourse);
  void removeCompletedCourse(const std::string courseSection);
  std::vector<Course> getCompletedCourses() const;

  void printInfo() const;

  std::string fileOut() const;


  bool lestThan(const Student& other, const std::string field) const;
  bool greaterThan(const Student& other, const std::string field) const;


  bool operator==(const Student& other) const;
  bool operator!=(const Student& other) const;




private:
  std::string parentPhone;
  std::string graduationYear;
  std::vector<Course> currentCourses;
  std::vector<Course> completedCourses;

};

#endif // STUDENT_H