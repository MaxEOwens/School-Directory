#include "Student.h"
#include "Staff.h"
#include "Course.h"

using namespace std;

Student searchStudent(vector<Student>& students, string field, string searchTerm, bool& found);
Staff searchStaff(vector<Staff>& staff, string field, string searchTerm, bool& found);

void addStudent(vector<Student>& students){
  Student newStudent;

  cout << "Enter student id: ";
  int id;
  cin >> id;
  bool found = false;
  searchStudent(students, "id", to_string(id), found);
  if(found){
    cout << "Error! Student with id " << id << " already exists" << endl;
    return;
  } else {
    newStudent.setId(id);
  }

  cout << "Enter student name: ";
  string name;
  cin >> name;
  newStudent.setName(name);

  cout << "Enter student email: ";
  string email;
  cin >> email;
  newStudent.setEmail(email);

  cout << "Enter student address: ";
  string address;
  cin >> address;
  newStudent.setAddress(address);

  cout << "Enter student phone: ";
  string phone;
  cin >> phone;
  newStudent.setPhone(phone);

  cout << "Enter student age: ";
  int age;
  cin >> age;
  newStudent.setAge(age);

  cout << "Enter student parent phone: ";
  string parentPhone;
  cin >> parentPhone;
  newStudent.setParentPhone(parentPhone);

  cout << "Enter student graduation year: ";
  string graduationYear;
  cin >> graduationYear;
  newStudent.setGraduationYear(graduationYear);

  students.push_back(newStudent);
}



void addStaff(vector<Staff>& staff){
  Staff newStaff;

  cout << "Enter staff id: ";
  int id;
  cin >> id;
  bool found = false;
  searchStaff(staff, "id", to_string(id), found);
  if(found){
    cout << "Error! Staff with id " << id << " already exists" << endl;
    return;
  } else {
    newStaff.setId(id);//this needs work need to check if id is unique
  }

  cout << "Enter staff name: ";
  string name;
  cin >> name;
  newStaff.setName(name);

  cout << "Enter staff email: ";
  string email;
  cin >> email;
  newStaff.setEmail(email);

  cout << "Enter staff address: ";
  string address;
  cin >> address;
  newStaff.setAddress(address);

  cout << "Enter staff phone: ";
  string phone;
  cin >> phone;
  newStaff.setPhone(phone);

  cout << "Enter staff age: ";
  int age;
  cin >> age;
  newStaff.setAge(age);

  cout << "Enter staff position: ";
  string position;
  cin >> position;
  newStaff.setPosition(position);

  staff.push_back(newStaff);
}



void removeStudent(vector<Student>& students){
  int id;
  cout << "Enter student id: ";
  cin >> id;
  cout << "Searching for student with id: " << id << endl;
  for(int i = 0; i < students.size(); i++){
    if(students.at(i).getId() == id){
      cout << "Student found are you sure you want to remove from directory (enter y for Yes): " << endl;
      char response;
      cin >> response;
      if (response == 'y'){
        students.erase(students.begin() + i);
      }
      return;
      } 
  }
  cout << "Student not found" << endl; 
}



void removeStaff(vector<Staff>& staff){
  int id;
  cout << "Enter staff id: ";
  cin >> id;
  cout << "Searching for staff with id: " << id << endl;
  for(int i = 0; i < staff.size(); i++){
    if(staff.at(i).getId() == id){
      cout << "Staff found are you sure you want to remove from directory (enter y for Yes): " << endl;
      char response;
      cin >> response;
      if (response == 'y'){
        staff.erase(staff.begin() + i);
      }
      return;
      }
  }
  cout << "Staff not found" << endl; 
}



void addCourseStudent(vector<Student>& students){
  int id;
  cout << "Enter student id: ";
  cin >> id;
  for(int i = 0; i < students.size(); i++){
    if(students.at(i).getId() == id){
      string courseName, term, instructor, section;
      cout << "Enter course name: ";
      cin >> courseName;
      cout << "Enter term: ";
      cin >> term;
      cout << "Enter instructor: ";
      cin >> instructor;
      cout << "Enter section: ";
      cin >> section;
      Course newCourse(courseName, term, instructor, section);
      students.at(i).addCurrentCourse(newCourse);
      return;
      } 
  }
  cout << "Student not found" << endl; 
}



void addCourseStaff(vector<Staff>& staff){
  int id;
  cout << "Enter staff id: ";
  cin >> id;
  for(int i = 0; i < staff.size(); i++){
    if(staff.at(i).getId() == id){
      string courseName, term, instructor, section;
      cout << "Enter course name: ";
      cin >> courseName;
      cout << "Enter term: ";
      cin >> term;
      cout << "Enter instructor: ";
      cin >> instructor;
      cout << "Enter section: ";
      cin >> section;
      Course newCourse(courseName, term, instructor, section);
      staff.at(i).addCurrentCourse(newCourse);
      return;
      } 
  }
  cout << "Staff not found" << endl;
}



void sortStudent(vector<Student>& students){
  cout << "Enter field to sort by (name, email, address, phone, age, id, parentPhone, graduationYear): ";
  string field;
  cin >> field;
  if (field != "name" && field != "email" && field != "address" && field != "phone" && field != "age" && field != "id" && field != "parentPhone" && field != "graduationYear"){
    cout << "Error! Field not found" << endl;
    return;
  } else {
    // sort by field
    int i, j;
    bool swapped;
    for (i = 0; i < students.size()-1; i++) {
      swapped = false;

      for (j = 0; j < students.size() - i - 1; j++) {

        bool isGreaterThan = false;

        if (field == "name"){
          isGreaterThan = students.at(j).getName() > students.at(j + 1).getName();
        } else if (field == "email"){
          isGreaterThan = students.at(j).getEmail() > students.at(j + 1).getEmail();
        } else if (field == "address"){
          isGreaterThan = students.at(j).getAddress() > students.at(j + 1).getAddress();
        } else if (field == "phone"){
          isGreaterThan = students.at(j).getPhone() > students.at(j + 1).getPhone();
        } else if (field == "age"){
          isGreaterThan = students.at(j).getAge() > students.at(j + 1).getAge();
        } else if (field == "id"){
          isGreaterThan = students.at(j).getId() > students.at(j + 1).getId();
        } else if (field == "parentPhone"){
          isGreaterThan = students.at(j).getParentPhone() > students.at(j + 1).getParentPhone();
        } else if (field == "graduationYear"){
          isGreaterThan = students.at(j).getGraduationYear() > students.at(j + 1).getGraduationYear();
        }

        if (isGreaterThan) {
          std::swap(students[j], students[j + 1]);
          swapped = true;
        }
      }
      if (swapped == false)
        break;
    }
  }
}



void sortStaff(vector<Staff>& staff){
  cout << "Enter field to sort by (name, email, address, phone, age, id, position): ";
  string field;
  cin >> field;
  if (field != "name" && field != "email" && field != "address" && field != "phone" && field != "age" && field != "id" && field != "position"){
    cout << "Error! Field not found" << endl;
    return;
  } else {
    // sort by field
    int i, j;
    bool swapped;
    for (i = 0; i < staff.size()-1; i++) {
      swapped = false;

      for (j = 0; j < staff.size() - i - 1; j++) {

        bool isGreaterThan = false;

        if (field == "name"){
          isGreaterThan = staff.at(j).getName() > staff.at(j + 1).getName();
        } else if (field == "email"){
          isGreaterThan = staff.at(j).getEmail() > staff.at(j + 1).getEmail();
        } else if (field == "address"){
          isGreaterThan = staff.at(j).getAddress() > staff.at(j + 1).getAddress();
        } else if (field == "phone"){
          isGreaterThan = staff.at(j).getPhone() > staff.at(j + 1).getPhone();
        } else if (field == "age"){
          isGreaterThan = staff.at(j).getAge() > staff.at(j + 1).getAge();
        } else if (field == "id"){
          isGreaterThan = staff.at(j).getId() > staff.at(j + 1).getId();
        } else if (field == "position"){
          isGreaterThan = staff.at(j).getPosition() > staff.at(j + 1).getPosition();
        }

        if (isGreaterThan) {
          std::swap(staff[j], staff[j + 1]);
          swapped = true;
        }
      }
      if (swapped == false)
        break;
    }
  }
}



Student searchStudent(vector<Student>& students, string field, string searchTerm, bool& found){
  found = false;
        if (field == "name"){
          cout << "Searching by name" << endl;
          for(int i = 0; i < students.size(); i++){
            if(students.at(i).getName() == searchTerm){
              found = true;
              return students.at(i);
            }
          }
        } else if (field == "email"){
          cout << "Searching by email" << endl;
          for(int i = 0; i < students.size(); i++){
            if(students.at(i).getEmail() == searchTerm){
              found = true;
              return students.at(i);
            }
          }
        } else if (field == "address"){
          cout << "Searching by address" << endl;
          for(int i = 0; i < students.size(); i++){
            if(students.at(i).getAddress() == searchTerm){
              found = true;
              return students.at(i);
            }
          }
        } else if (field == "phone"){
          cout << "Searching by phone" << endl;
          for(int i = 0; i < students.size(); i++){
            if(students.at(i).getPhone() == searchTerm){
              found = true;
              return students.at(i);
            }
          }
        } else if (field == "age"){
          cout << "Searching by age" << endl;
          for(int i = 0; i < students.size(); i++){
            if(students.at(i).getAge() == stoi(searchTerm)){
              found = true;
              return students.at(i);
            }
          }
        } else if (field == "id"){
          cout << "Searching by id" << endl;
          for(int i = 0; i < students.size(); i++){
            if(students.at(i).getId() == stoi(searchTerm)){
              found = true;
              return students.at(i);
            }
          }
        } else if (field == "parent phone"){
          cout << "Searching by parent phone" << endl;
          for(int i = 0; i < students.size(); i++){
            if(students.at(i).getParentPhone() == searchTerm){
              found = true;
              return students.at(i);
            }
          }
        } else if (field == "graduation year"){
          cout << "Searching by graduation year" << endl;
          for(int i = 0; i < students.size(); i++){
            if(students.at(i).getGraduationYear() == searchTerm){
              found = true;
              return students.at(i);
            }
          }
        } else {
          cout << "Error! Field not found" << endl;
        }
  return Student();
}



Staff searchStaff(vector<Staff>& staff, string field, string searchTerm, bool& found){
        if (field == "name"){
          cout << "Searching by name" << endl;
          for(int i = 0; i < staff.size(); i++){
            if(staff.at(i).getName() == searchTerm){
              found = true;
              return staff.at(i);
            }
          }
        } else if (field == "email"){
          cout << "Searching by email" << endl;
          for(int i = 0; i < staff.size(); i++){
            if(staff.at(i).getEmail() == searchTerm){
              found = true;
              return staff.at(i);
            }
          }
        } else if (field == "address"){
          cout << "Searching by address" << endl;
          for(int i = 0; i < staff.size(); i++){
            if(staff.at(i).getAddress() == searchTerm){
              found = true;
              return staff.at(i);
            }
          }
        } else if (field == "phone"){
          cout << "Searching by phone" << endl;
          for(int i = 0; i < staff.size(); i++){
            if(staff.at(i).getPhone() == searchTerm){
              found = true;
              return staff.at(i);
            }
          }
        } else if (field == "age"){
          cout << "Searching by age" << endl;
          for(int i = 0; i < staff.size(); i++){
            if(staff.at(i).getAge() == stoi(searchTerm)){
              found = true;
              return staff.at(i);
            }
          }
        } else if (field == "id"){
          cout << "Searching by id" << endl;
          for(int i = 0; i < staff.size(); i++){
            if(staff.at(i).getId() == stoi(searchTerm)){
              found = true;
              return staff.at(i);
            }
          }
        } else if (field == "position"){
          cout << "Searching by position" << endl;
          for(int i = 0; i < staff.size(); i++){
            if(staff.at(i).getPosition() == searchTerm){
              found = true;
              return staff.at(i);
            }
          }
        } else {
          cout << "Error! Field not found" << endl;
        }
  return Staff();
}


vector<Student> findAllStudents(vector<Student>& students, string field, string searchTerm){
  vector<Student> foundStudents;
        if (field == "name"){
          cout << "Searching by name" << endl;
          for(int i = 0; i < students.size(); i++){
            if(students.at(i).getName() == searchTerm)
              foundStudents.push_back(students.at(i));       
          }
        } else if (field == "email"){
          cout << "Searching by email" << endl;
          for(int i = 0; i < students.size(); i++){
            if(students.at(i).getEmail() == searchTerm)
              foundStudents.push_back(students.at(i));
          }
        } else if (field == "address"){
          cout << "Searching by address" << endl;
          for(int i = 0; i < students.size(); i++){
            if(students.at(i).getAddress() == searchTerm)
              foundStudents.push_back(students.at(i));
          }
        } else if (field == "phone"){
          cout << "Searching by phone" << endl;
          for(int i = 0; i < students.size(); i++){
            if(students.at(i).getPhone() == searchTerm)
              foundStudents.push_back(students.at(i));
          }
        } else if (field == "age"){
          cout << "Searching by age" << endl;
          for(int i = 0; i < students.size(); i++){
            if(students.at(i).getAge() == stoi(searchTerm))
              foundStudents.push_back(students.at(i));
          }
        } else if (field == "id"){
          cout << "Searching by id" << endl;
          for(int i = 0; i < students.size(); i++){
            if(students.at(i).getId() == stoi(searchTerm))
              foundStudents.push_back(students.at(i));
          }
        } else if (field == "parent phone"){
          cout << "Searching by parent phone" << endl;
          for(int i = 0; i < students.size(); i++){
            if(students.at(i).getParentPhone() == searchTerm)
              foundStudents.push_back(students.at(i));
          }
        } else if (field == "graduation year"){
          cout << "Searching by graduation year" << endl;
          for(int i = 0; i < students.size(); i++){
            if(students.at(i).getGraduationYear() == searchTerm)
              foundStudents.push_back(students.at(i));
          }
        } else {
          cout << "Error! Field not found" << endl;
        }

  if (foundStudents.size() == 0){
    cout << "No students found" << endl;
  }
  return foundStudents;
}


vector<Staff> findAllStaff(vector<Staff>& staff, string field, string searchTerm){
  vector<Staff> foundStaff;
        if (field == "name"){
          cout << "Searching by name" << endl;
          for(int i = 0; i < staff.size(); i++){
            if(staff.at(i).getName() == searchTerm)
              foundStaff.push_back(staff.at(i));       
          }
        } else if (field == "email"){
          cout << "Searching by email" << endl;
          for(int i = 0; i < staff.size(); i++){
            if(staff.at(i).getEmail() == searchTerm)
              foundStaff.push_back(staff.at(i));
          }
        } else if (field == "address"){
          cout << "Searching by address" << endl;
          for(int i = 0; i < staff.size(); i++){
            if(staff.at(i).getAddress() == searchTerm)
              foundStaff.push_back(staff.at(i));
          }
        } else if (field == "phone"){
          cout << "Searching by phone" << endl;
          for(int i = 0; i < staff.size(); i++){
            if(staff.at(i).getPhone() == searchTerm)
              foundStaff.push_back(staff.at(i));
          }
        } else if (field == "age"){
          cout << "Searching by age" << endl;
          for(int i = 0; i < staff.size(); i++){
            if(staff.at(i).getAge() == stoi(searchTerm))
              foundStaff.push_back(staff.at(i));
          }
        } else if (field == "id"){
          cout << "Searching by id" << endl;
          for(int i = 0; i < staff.size(); i++){
            if(staff.at(i).getId() == stoi(searchTerm))
              foundStaff.push_back(staff.at(i));
          }
        } else if (field == "position"){
          cout << "Searching by position" << endl;
          for(int i = 0; i < staff.size(); i++){
            if(staff.at(i).getPosition() == searchTerm)
              foundStaff.push_back(staff.at(i));
          }
        } else {
          cout << "Error! Field not found" << endl;
        }

  if (foundStaff.size() == 0){
    cout << "No staff found" << endl;
  }
  return foundStaff;
}



void printStudent(const vector<Student> students){
  for(int i = 0; i < students.size(); i++){
    students.at(i).printInfo();
  }
}


void printStaff(const vector<Staff>& staff){
  for(int i = 0; i < staff.size(); i++){
    staff.at(i).printInfo();
  }
}