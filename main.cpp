#include <iostream>
#include <string>
#include <vector>

//testing these
#include <sstream>
#include <fstream>

#include "Student.h"
#include "Staff.h"
#include "Course.h"
#include "LinkedList.h"


#include "LoadData.h"
// #include "SaveData.h"
#include "Commands.h"


using namespace std;

enum Actions {QUIT, ADD_STUDENT, ADD_STAFF, REMOVE_STUDENT, REMOVE_STAFF, ADD_COURSE, SORT_STUDENT, SORT_STAFF, SEARCH_STUDENT, SEARCH_STAFF, FIND_ALL_STUDENTS, FIND_ALL_STAFF, PRINT_STUDENT, PRINT_STAFF, max_menu_option}; 

int getMenuChoice(){
    cout << "--------------------------------------------" << endl;
    cout << "Welcome to the School Management System" << endl;
    cout  << " Options menu: " << endl;
    cout << ADD_STUDENT << ". Add Student" << endl;
    cout << ADD_STAFF << ". Add Staff" << endl;
    cout << REMOVE_STUDENT << ". Remove Student" << endl;
    cout << REMOVE_STAFF << ". Remove Staff" << endl;
    cout << ADD_COURSE << ". Add Course" << endl;
    cout << SORT_STUDENT << ". Sort Student" << endl;
    cout << SORT_STAFF << ". Sort Staff" << endl;
    cout << SEARCH_STUDENT << ". Search Student" << endl;
    cout << SEARCH_STAFF << ". Search Staff" << endl;
    cout << FIND_ALL_STUDENTS << ". Find all Students" << endl;
    cout << FIND_ALL_STAFF << ". Find all Staff" << endl;
    cout << PRINT_STUDENT << ". Print Student" << endl;
    cout << PRINT_STAFF << ". Print Staff" << endl;
    cout  << "Enter a number from 1 to " << max_menu_option-1 << ", or 0 to exit: ";

  int response = 0;
  cin >> response;

  if(response > max_menu_option-1 || response < 0){
    cout << "    Error! Input must be a number between 1 and " << max_menu_option-1 << ", or 0 to exit." << endl;
    return getMenuChoice();
  }

  return response;
}







void runComand(int command, vector<Student>& students, vector<Staff>& staff){
  string field;
  string term;
  bool found = false;
  Student foundStudent;
  Staff foundStaff;

  switch(command){
    case ADD_STUDENT:
      addStudent(students);
      cout << "Adding Student" << endl;
      runComand(getMenuChoice(), students, staff);
      break;
    case ADD_STAFF:
      addStaff(staff);
      cout << "Adding Staff" << endl;
      runComand(getMenuChoice(), students, staff);
      break;
    case REMOVE_STUDENT:
      removeStudent(students);
      cout << "Removing Student" << endl;
      runComand(getMenuChoice(), students, staff);
      break;
    case REMOVE_STAFF:
      removeStaff(staff);
      cout << "Removing Staff" << endl;
      runComand(getMenuChoice(), students, staff);
      break;
    case ADD_COURSE:
      cout << "Are you adding to a student or staff? (student, staff): ";
      cin >> field;
      if (field != "student" && field != "staff"){
        cout << "Error! Field not found" << endl;
        runComand(getMenuChoice(), students, staff);
      } else if(field == "student"){
        addCourseStudent(students);
      } else if(field == "staff"){
        addCourseStaff(staff);
      }
      cout << "Adding Course" << endl;
      runComand(getMenuChoice(), students, staff);
      break;
    case SORT_STUDENT:
      sortStudent(students);
      cout << "Sorting Student" << endl;
      runComand(getMenuChoice(), students, staff);
      break;
    case SORT_STAFF:
      sortStaff(staff);
      cout << "Sorting Staff" << endl;
      runComand(getMenuChoice(), students, staff);
      break;
    case SEARCH_STUDENT:
      cout << "Enter field to search by (name, email, address, phone, age, id, parentPhone, graduationYear): ";
      cin >> field;
      if (field != "name" && field != "email" && field != "address" && field != "phone" && field != "age" && field != "id" && field != "parentPhone" && field != "graduationYear"){
        cout << "Error! Field not found" << endl;
        runComand(getMenuChoice(), students, staff);
        break;
      }
      cout << "Enter search term: ";
      cin >> term;
      cout << endl << "Searching Student" << endl;
      foundStudent = searchStudent(students, field, term, found);
      if(found){
        foundStudent.printInfo();
      } //more options?
      runComand(getMenuChoice(), students, staff);
      break;

    case SEARCH_STAFF:
      cout << "Enter field to search by (name, email, address, phone, age, id, position): ";
      cin >> field;
      if (field != "name" && field != "email" && field != "address" && field != "phone" && field != "age" && field != "id" && field != "position"){
        cout << "Error! Field not found" << endl;
        runComand(getMenuChoice(), students, staff);
        break;
      }
      cout << "Enter search term: ";
      cin >> term;
      cout << endl << "Searching Staff" << endl;
      foundStaff = searchStaff(staff, field, term, found); 
      if(found){
        foundStaff.printInfo();
      }//more options?
      runComand(getMenuChoice(), students, staff);
      break;
    case FIND_ALL_STUDENTS:
      cout << "Enter field to search by (name, email, address, phone, age, id, parentPhone, graduationYear): ";
      cin >> field;
      if (field != "name" && field != "email" && field != "address" && field != "phone" && field != "age" && field != "id" && field != "parentPhone" && field != "graduationYear"){
        cout << "Error! Field not found" << endl;
        runComand(getMenuChoice(), students, staff);
        break;
      }
      cout << "Enter search term: ";
      cin >> term;
      cout << "Finding all Students matching search" << endl;
      printStudent(findAllStudents(students, field, term)); //more options?
      runComand(getMenuChoice(), students, staff);
      break;
    case FIND_ALL_STAFF:
      cout << "Enter field to search by (name, email, address, phone, age, id, position): ";
      cin >> field;
      if (field != "name" && field != "email" && field != "address" && field != "phone" && field != "age" && field != "id" && field != "position"){
        cout << "Error! Field not found" << endl;
        runComand(getMenuChoice(), students, staff);
        break;
      }
      cout << "Enter search term: ";
      cin >> term;
      cout << "Finding all Staff matching search" << endl;
      printStaff(findAllStaff(staff, field, term)); //more options?
      runComand(getMenuChoice(), students, staff);
      break;
    case PRINT_STUDENT:
      cout << "Printing Students" << endl;
      printStudent(students);
      runComand(getMenuChoice(), students, staff);
      break;
    case PRINT_STAFF:
      cout << "Printing Staff" << endl;
      printStaff(staff);
      runComand(getMenuChoice(), students, staff);
      break;
    case QUIT:
      cout << "Exiting" << endl;
      break;
    default:
      cout << "Error" << endl;
      break;
  }
}






int main() {
  vector<Student> students;
  vector<Staff> staff;
  
  loadStudents(students, 5);
  loadStaff(staff, 5);
  
  runComand(getMenuChoice(), students, staff);

  return 0;
}