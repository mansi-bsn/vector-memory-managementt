//requirements
//-vector & template 
//class structure
//1. create class template-memory calculate
//attributes
//1. id   
//2. name
// methods:
//Implement the following:
//a constructor to initialize the id and name
//a method to display student details
//2. task performed
//-Add a student: Use push_back() method to add a student to the vector.
//-Display all students: Use a for loop to iterate through the vector and display the details of each student.
//-Remove a student by id: search the vector for the student with the given id and remove it.
//search for a student by id: search the vector for the student with the given id and display its details.
//requirements:
//createw a student maanagement system that performs the followingoperations:
//1. add a student
//2. display all students
//3. remove a student by id
//4. search for a student by id

#include<iostream>
#include<vector>
using namespace std;

class Template
{
    public:
    int id;
    string name;

    Template(int id, string name)
    {
        this->id = id;
        this->name = name;
    }

    void displayStudDetails()
    {
        cout << "Student ID is: " << id << endl;
        cout << "Student name is: " << name << endl;
    }
};

int main()
{
    vector<Template> studentList;

    int choice, student1 = 0;
    do
    {
        cout << "======== Student Management System ========" << endl;
        cout << "Press 1. for add a student" << endl;
        cout << "Press 2. for display all student" << endl;
        cout << "Press 3. for remove a student from the list." << endl;
        cout << "Press 4. for search a student from the list." << endl;
        cout << "Press 0. for exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
            {
                cout << "======== Add a student ========" << endl;
                int id;
                string name;
                cout << "Enter student ID: ";
                cin >> id;
                cout << "Enter student name: ";
                cin >> name;
                Template student(id, name);
                studentList.push_back(student);
                student1++;
                cout << "Student added successfully" << endl;
                break;
            }

            case 2: 
            {
                cout << "======== Display all student ========" << endl;
                if (student1 > 0)
                {
                    for (int i = 0; i < studentList.size(); i++)
                    {
                        studentList[i].displayStudDetails();
                    }
                }else{
                    cout << "Student list is empty" << endl;
                }
                break;
            }

            case 3:
            {
                cout << "======== Remove a student ========" << endl;
                int studId;
                cout << "Enter student ID: ";
                cin >> studId;
                if (student1 > 0)
                {
                    for (int i = 0; i < studentList.size(); i++)
                    {
                        if (studentList[i].id == studId)
                        {
                            studentList.erase(studentList.begin() + i);
                            cout << "Student removed successfully" << endl;
                            student1--;
                            break;
                        }
                    }
                }else{
                    cout << "Student list is empty" << endl;
                }
                break;
            }

            case 4:
            {
                cout << "======== Search a student ========" << endl;
                int studentId;
                cout << "Enter student ID: ";
                cin >> studentId;
                if (student1 > 0)
                {
                    for (int i = 0; i < studentList.size(); i++)
                    {
                        if (studentList[i].id == studentId)
                        {
                            studentList[i].displayStudDetails();
                            break;
                        }else{
                            cout << "Student not found" << endl;
                        }
                    }
                }else{
                    cout << "Student list is empty" << endl;
                }
                break;
            }
            case 0:
            {
                cout << "Exit the program" << endl;
                break;
            }
            default:
            {
                cout << "Invalid choice" << endl;
                break;
            }
        }
        

    }while (choice != 0);
}
