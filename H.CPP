Program No. 12 – Function Templates – Square and Cube
Aim /Problem Statement:
Write a C++ program to find defined two function templates for calculating the square and cube of given
numberwithdifferentdatatype.
Source Code:
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
template <class T>
class calculator
{
private:
T num1;
public:
calculator(T n1)
{
num1 = n1;
}
void display()
{
cout << "Number are " << num1;
cout << " square is " << square();
cout << " cube is " << cube();
}
T square()
{
return num1 * num1;
}
T cube()
{
return num1 * num1 * num1;
}
};
int main()
{
clrscr();
calculator<int> intcal(2);
calculator<float> floatcal(3.1);
cout << "\n Int result:";
intcal.display();
cout << "\n\n Float result";
floatcal.display();
getch();
return 0;
}

Program No. 13 – Function Overloading – display_str
Aim /Problem Statement:
Write a C++ program to overload 'display_str' function: 1. void display_str(char *) – Display a string in
double quotes. 2. void display_str(int n, char *) – Display first n characters from a given string. 3. void
display_str(intm, char*, intn)– Displaysubstringofa givenstringfrompositionmton.
Source Code:
#include <iostream.h>
#include <cstring.h>
class Display
{
public:
void display_str(char *str)
{
cout << "\"" << str << "\"" << endl;
}
void display_str(int n, char *str)
{
for (int i = 0; i < n && str[i] != '\0'; i++)
cout << str[i];
}
void display_str(int m, int n, char *str)
{
if (m < 0 || m >= strlen(str) || n < 0 ||
n >= strlen(str) || m > n)
{
cout << "Invalid Position!" << endl;
return;
}
for (int i = m; i <= n; ++i)
cout << str[i];
}
};
int main()
{
Display display;
char str[] = "Hello, World!";
display.display_str(str);
display.display_str(7, str);
display.display_str(7, 12, str);
return 0;
}

Program No. 14 – Reverse Array Using Dynamic Memory Allocation
Aim /Problem Statement:
Write C++ program to read array of 'n' integers from user and display it in reverse order. (Use dynamic
memoryallocation)
Source Code:
#include <iostream.h>
#include <conio.h>
int main()
{
int i, n;
clrscr();
cout << "\n enter array element";
cin >> n;
int *arr = new int(n);
cout << "Enter " << n << " items" << "\n";
for (i = 0; i < n; i++)
{
cin >> arr[i];
}
cout << "\n original array is :";
for (i = 0; i < n; i++)
{
cout << arr[i] << "\t";
}
cout << "\n\n reverse array is ";
for (i = n-1; i >= 0; i--)
{
cout << arr[i] << "\t";
}
getch();
return 0;
}

Program No. 15 – Operator Overloading – College Class
Aim /Problem Statement:
Create a C++ class College with data member College Id, College Name, establishment year, university
Name.Overloadoperators>>and<<toaccept anddisplaycollegeinformation.
Source Code:
#include <iostream.h>
#include <conio.h>
class College
{
private:
int id, year;
char name[20], uname[20];
public:
College() {}
friend ostream& operator<<(ostream &out, const College &c);
friend istream& operator>>(istream &in, College &c);
};
ostream& operator<<(ostream &out, const College &c)
{
out << "\n College Id: " << c.id;
out << "\n College name: " << c.name;
out << "\n Establishment year: " << c.year;
out << "\n university: " << c.uname << endl;
return out;
}
istream& operator>>(istream &in, College &c)
{
cout << "\n enter college id";
in >> c.id;
cout << "\n enter college name";
in >> c.name;
cout << "\n enter year of establishment";
in >> c.year;
cout << "\n enter university name";
in >> c.uname;
return in;
}
int main()
{
clrscr();
College c1;
cin >> c1;
cout << "\n The college details are:\n";
cout << c1;
getch();
return 0;
}

Program No. 16 – Function Overloading – Average of Int and Float
Aim /Problem Statement:
Write a C++ program to find average of 3 integer numbers & average of three float numbers (use function
overloading).
Source Code:
#include <iostream.h>
int avg(int n1, int n2, int n3)
{
int ans;
ans = (n1 + n2 + n3) / 3;
return (ans);
}
float avg(float n1, float n2, float n3)
{
float ans;
ans = (n1 + n2 + n3) / 3;
return (ans);
}
void main()
{
float fn1, fn2, fn3, favg;
int in1, in2, in3, iavg;
cout << "enter three float & integer number";
cin >> fn1 >> fn2 >> fn3 >> in1 >> in2 >> in3;
favg = avg(fn1, fn2, fn3);
iavg = avg(in1, in2, in3);
cout << "Average of Float is" << favg;
cout << "Average of integer is" << iavg;
}

Program No. 17 – File Handling – Character Classification
Aim /Problem Statement:
Write a C++ program to read contents of "SampleData.txt" file, create "upper.txt" file to store uppercase
characters, "lower.txt" file to store lowercase characters, "digit.txt" file to store digits and "other.txt" file to
storeotherremainingcharactersof givenfile.
Source Code:
#include <iostream.h>
#include <stdlib.h>
#include <fstream.h>
#include <ctype.h>
int main()
{
char fname[10];
ifstream fin;
ofstream fc, fu, fl, fd;
cout << "\n Enter file name";
cin >> fname;
fin.open(fname, ios::in);
fc.open("other.txt", ios::out);
fu.open("upper.txt", ios::out);
fl.open("lower.txt", ios::out);
fd.open("digit.txt", ios::out);
if (fin.fail())
{
cout << "File does not exists";
exit(1);
}
char ch;
while (!fin.eof())
{
ch = fin.get();
if (islower(ch))
{
fl.put(ch);
}
else if (isupper(ch))
{
fu.put(ch);
}
else if (isdigit(ch))
{
fd.put(ch);
}
else if ((ch > 31 && ch < 48) || (ch > 57 && ch < 65))
{
fc.put(ch);
}
}
cout << "Task completed";
getch();
return 0;
}

Program No. 18 – Inline Functions – Mean, Mode and Median
Aim /Problem Statement:
WriteaC++programtocalculatemean, modeandmedianofthreeintegernumbers(useinlinefunction).
Source Code:
#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
inline float calculateMean(int a, int b, int c)
{
return (a + b + c) / 3.0;
}
inline float calculateMedian(int a, int b, int c)
{
int arr[3] = {a, b, c};
return arr[1];
}
inline int calculateMode(int a, int b, int c)
{
if (a == b && b == c)
return a;
else if (a == b || b == c)
return b;
else
return c;
}
int main()
{
int num1, num2, num3;
clrscr();
cout << "Enter three integer:";
cin >> num1 >> num2 >> num3;
float mean = calculateMean(num1, num2, num3);
float median = calculateMedian(num1, num2, num3);
int mode = calculateMode(num1, num2, num3);
cout << "mean:" << mean << endl;
cout << "Median:" << median << endl;
cout << "Mode:" << mode << endl;
getch();
return 0;
}

Program No. 19 – Operator Overloading – String Concatenation (MyString
Class)
Aim /Problem Statement:
Create a classMyString with data member character pointer. Write a C++ program to accept and display a
string,overloadoperator+toconcatenatetwostrings.
Source Code:
#include <iostream.h>
#include <conio.h>
#include <string.h>
class Mystring
{
char *str;
int len;
public:
mystring() {}
mystring(char s[])
{
len = strlen(s);
str = new char[len + 1];
strcpy(str, s);
}
void display()
{
cout << str << "\n";
}
mystring operator+(mystring ob)
{
Mystring a;
int len1, len2;
len1 = strlen(str);
len2 = strlen(ob.str);
a.str = new char[len1 + len2];
strcpy(a.str, ob.str);
return a;
}
};
int main()
{
char s1[10], s2[20];
clrscr();
cout << "Enter two strings";
cin >> s1 >> s2;
mystring m1(s1), m2(s2), m3;
m1.display();
m2.display();
m3 = m1 + m2;
m3.display();
getch();
return 0;
}
