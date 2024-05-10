#include "Person.h"

// Constructor implementation
Person::Person() {
  // Initialize member variables here
}

// Setter implementation
void Person::setName(const std::string& inName) {
  name = inName;
}

// Getter implementation
std::string Person::getName() const {
  return name;
}

// Setter implementation
void Person::setEmail(const std::string& inEmail) {
  email = inEmail;
}

// Getter implementation
std::string Person::getEmail() const {
  return email;
}

// Setter implementation
void Person::setAddress(const std::string& inAddress) {
  address = inAddress;
}

// Getter implementation
std::string Person::getAddress() const {
  return address;
}

// Setter implementation
void Person::setPhone(const std::string& inPhone) {
  phone = inPhone;
}

// Getter implementation
std::string Person::getPhone() const {
  return phone;
}

// Setter implementation
void Person::setAge(int inAge) {
  age = inAge;
}

// Getter implementation
int Person::getAge() const {
  return age;
}

// Setter implementation
void Person::setId(int inId) {
  id = inId;
}

// Getter implementation
int Person::getId() const {
  return id;
}

