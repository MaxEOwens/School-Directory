
#ifndef COURSE_H
#define COURSE_H


#include <string>
#include <vector>

class Course {
public:
  // Constructor
  Course(const std::string courseName, const std::string term, const std::string instructor, int section);


  // Getters and Setters
  void setName(const std::string& name);
  std::string getName() const;

  void setTerm(const std::string& term);
  std::string getTerm() const;

  void setInstructor(const std::string& instructor);
  std::string getInstructor() const;

  void setSection(int section);
  int getSection() const;

  void printInfo() const;


  private:
  std::string courseName;
  std::string courseTerm;
  std::string courseInstructor;
  int courseSection;

};

#endif // COURSE_H