#include <iostream>
#include <string>
using namespace std;
class GradeBook
{
private:
    string courseName,teacherName;


public:
    GradeBook(string courseName_, string teacherName_)
    {
        courseName=courseName_;
        teacherName=teacherName_;
    }

    void SetCourseName(string courseName_)
    {
        courseName=courseName_;
    }

   void SetteacherName(string teacherName_)
    {
        teacherName=teacherName_;
    }

    string GetcourseName()
    {
        return courseName;
    }

     string GetteacherName()
    {
        return teacherName;
    }


    void displayMessage()
    {
        cout<<"Welcome to the grade book for\n"<<GetcourseName()<<"!";
        cout<<"This course is presented by: "<<GetteacherName()<<"!"<<endl;
    }
};
int main()
{
    return 0;
}
