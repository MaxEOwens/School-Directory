#include LinkedList.cpp
#include <fstream>

void LinkedList::writeToFile() const{
    std::ofstream outFile(people.txt);
    if (!outFile.is_open()) {
        std::cerr << "Error: Unable to open file: " << filename << std::endl;
        return;
    }
    Node* temp = head;
    while (temp != nullptr) {
        outFile << "Name: " << temp->data->name << std::endl;
        outFile << "Email: " << temp->data->email << std::endl;
        if (Student* student = dynamic_cast<Student*>(temp->data)) {
            outFile << "Classes: ";
            for (const auto& className : student->classes) {
                outFile << className << ", ";
            }
            outFile << std::endl;
        }
        temp = temp->next;
    }
    outFile.close();
}

void LinkedList::readFromFile(){
    std::ifstream inFile(people.txt);
    if (!inFile.is_open()) {
        std::cerr << "Error: Unable to open file: " << filename << std::endl;
        return;
    }

    std::string line;
    std::string name, email, department;
    std::vector<std::string> classes;
    while (std::getline(inFile, line)) {
        if (line.substr(0, 5) == "Name:") {
            name = line.substr(6);
        } else if (line.substr(0, 6) == "Email:") {
            email = line.substr(7);
        } else if (line.substr(0, 8) == "Classes:") {
            classes.clear();
            std::istringstream iss(line.substr(9));
            std::string className;
            while (iss >> className) {
                classes.push_back(className);
            }
            Student student;
            student.name = name;
            student.email = email;
            student.classes = classes;
            insert(&student);
        } else if (line.substr(0, 11) == "Department:") {
            department = line.substr(12);
            Teacher teacher;
            teacher.name = name;
            teacher.email = email;
            teacher.department = department;
            insert(&teacher);
        }
    }

    inFile.close();
}

}