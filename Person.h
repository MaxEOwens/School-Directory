#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
public:
  // Constructor
  Person();

  // Destructor
  //~Person();

  // Setters and getters for the Person class
  void setName(const std::string& name);
  std::string getName() const;

  void setEmail(const std::string& email);
  std::string getEmail() const;

  void setAddress(const std::string& address);
  std::string getAddress() const;

  void setPhone(const std::string& phone);
  std::string getPhone() const;

  void setAge(int age);
  int getAge() const;

  void setId(int id);
  int getId() const;

private:
  std::string name;
  std::string email;
  std::string address;
  std::string phone;
  int age;
  int id;

};

#endif // PERSON_H