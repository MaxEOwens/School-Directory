
#ifndef COURSE_H
#define COURSE_H


#include <string>
#include <vector>
#include <iostream>

class Course {
public:
  // Constructor
  Course(const std::string courseName, const std::string term, const std::string instructor, std::string section);


  // Getters and Setters
  void setName(const std::string& name);
  std::string getName() const;

  void setTerm(const std::string& term);
  std::string getTerm() const;

  void setInstructor(const std::string& instructor);
  std::string getInstructor() const;

  void setSection(std::string section);// fix this 
  std::string getSection() const;

  void printInfo() const;


  private:
  std::string courseName;
  std::string courseTerm;
  std::string courseInstructor;
  std::string courseSection;

};

std::ostream& operator<<(std::ostream& os, const Course& course); //this is ugly

#endif // COURSE_H