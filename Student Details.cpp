#include <iostream>
#include <string>
using namespace std;
class student
{
public:
string name;
int roll_no;
string marks;
};

int main()
{
student student1;
student1.name="soham deshmukh";
student1.roll_no=33;
student1.marks="9.2 cgpa";

cout<<"name:"<<student1.name<<endl;
cout<<"roll_no:"<<student1.roll_no<<endl;
cout<<"marks:"<<student1.marks<<endl;
return 0;
}
