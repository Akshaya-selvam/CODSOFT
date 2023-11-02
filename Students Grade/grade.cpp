#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
    int grade;
};

const int MAX_STUDENTS = 100;

int main()
{
    cout<<"\t\t\t\t\t\tWELCOME!!!"<<endl;
    cout<<"Here you can enter the students names and their grade to calculate the Average,Lowest and Highest Grades among them"<<endl;
    Student students[MAX_STUDENTS];
    int num_students = 0;

    while (num_students < MAX_STUDENTS)
    {
        string name;
        int grade;

        cout << "\nEnter student name (or 'done' to finish): ";
        cin >> name;

        if (name == "done")
        {
            break;
        }

        cout << "Enter student grade: ";
        cin >> grade;

        students[num_students].name = name;
        students[num_students].grade = grade;

        num_students++;
    }

    int total_grade = 0;
    int highest_grade = INT_MIN;
    int lowest_grade = INT_MAX;

    for (int i = 0; i < num_students; i++)
    {
        total_grade += students[i].grade;

        if (students[i].grade > highest_grade)
        {
            highest_grade = students[i].grade;
        }

        if (students[i].grade < lowest_grade)
        {
            lowest_grade = students[i].grade;
        }
    }

    double average_grade = (double)total_grade / num_students;

    cout << "\nAverage grade: " << average_grade << endl;
    cout << "\nHighest grade: " << highest_grade << endl;
    cout << "\nLowest grade: " << lowest_grade << endl;

    return 0;
}
