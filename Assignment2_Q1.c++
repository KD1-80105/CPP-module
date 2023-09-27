#include<iostream>
namespace Nstudent
{
   class students
{
private:
    int roll_no;
    string name;
    int marks;

public:
    void initStudent()
    {
        roll_no = 0;
        name = "akhil";
        marks = 0;
    }
    void printStudentOnConsole()
    {
        cout << "roll_no: " <<roll_no<<endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
    void acceptStudentFromConsole()
    {
        cout<<"roll_no: ";
        cin>>roll_no;
        cout<<"name : ";
        cin>>name;
        cout<<"marks :";
        cin>>marks;
    }
};

using namespace std;

int main(){
    students stud;
    int choice;
   
    do
    {
        cout << "Menu:\n";
        cout << "1. Initialize Data\n";
        cout << "2. Print Data\n";
        cout << "3. Accept Data\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        stud.initStudent();
            break;
        case 2: 
        stud.printStudentOnConsole();
            break;
        case 3:
        stud.acceptStudentFromConsole();
        break;
        
        case 4:
         cout << "Exiting program.\n";
        break;
        default:
        cout << "Invalid choice. Please try again.\n";
        }
    } while (choice !=4);
    
    return 0;
}
}
 
