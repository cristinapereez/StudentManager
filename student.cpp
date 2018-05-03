#include "student.h"

using namespace std;

void student::setName(string first1, string last1)
{
first = first1;
last = last1;
}

string student::fullName()
{
string name = first;
name.append(" ");
name.append(last);
return name;
}
