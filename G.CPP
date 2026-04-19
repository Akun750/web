
Program No - 1
•	Write a C++ program to find Volume of cylinder, cone and sphere (use function overloading)
1.	#include <iostream.h>
#include <conio.h>
#include <math.h>

float volume (int, int);
float volume (float, float);
float volume (float);

int main()
{
    int cylinder_h, cylinder_r, cone_h, cone_r;
    float sphere_r;
    clrscr();
    
    cout << "Enter Dimension " << endl;
    cout << "Height 1: Cylinder " << endl;
    cout << "Height";
    cin >> cylinder_h;
    cout << "Radius";
    cin >> cylinder_r;
    cout << endl;
    cout << "0 - Cone " << endl;
    cout << "Height";
    cin >> cone_h;
    cout << "Radius";
    cin >> cone_r;
    cout << endl;
    cout << "9. Sphere " << endl;
    cout << "Radius";
    cin >> sphere_r;
    cout << endl;
    
    cout << "In Volume of Cylinder is: " << volume(cylinder_h, cylinder_r) << endl;
    cout << "Volume of cone is" << volume(cone_r, cone_h) << endl;
    cout << "The volume of sphere is" << volume(sphere_r) << endl;
    
    getch();
    return 0;
}

float volume (int r, int h)
{
    return (3.14 * r * r * h);
}

float volume (float r, float h)
{
    return (3.14 * r * r * h / 3);
}

float volume (float r)
{
    return (0.33 * 3.14 * r * r * r);
}

Program No - 2
•	Write a C++ program to create a class Movie with Data Members: mName, Release year, Director name, and Budget (use the handling). Write necessary member function to:
•	(1) Accept member function details for 'n' movie from user and store it in the 'movie.txt'
•	(2) Display movie details from a file
•	(3) Count the number of objects stored in a file.
#include <iostream.h>
#include <conio.h>
#include <fstream.h>

class movie
{
    public:
        int year;
        char mname[20];
        char dname[20];
        int budget;
    
    public:
        void accept()
        {
            cout << "In Enter Movie name";
            cin >> mname;
            cout << "In Enter Release Year";
            cin >> year;
            cout << "In Enter Director Name:";
            cin >> dname;
            cout << "Enter budget:";
            cin >> budget;
        }
        
        void display()
        {
            cout << "In Movie Name:" << mname << endl;
            cout << "In Release year:" << year << endl;
            cout << "In the Director name" << dname << endl;
            cout << "The Budget" << budget << endl;
        }
};

void main()
{
    movie m[5];
    int n, i;
    clrscr();
    fstream file;
    file.open("movie.txt", ios::in | ios::out);
    
    cout << "In Enter the no of record you want to accept";
    cin >> n;
    
    for (i=0; i<n; i++)
    {
        m[i].accept();
        file.write((char *) &m[i], sizeof(m[i]));
    }
    
    cout << "In Details of movie From file:In";
    for (i=0; i<n; i++)
    {
        file.read((char *) &m[i], sizeof(m[i]));
        m[i].display();
    }
    
    file.close();
    getch();
}

Program No - 3
•	Write a C++ program to interchange values of two integer numbers. (use call by reference)
#include <iostream.h>
#include <conio.h>

void swap (int &, int &);

int main()
{
    int a, b;
    clrscr();
    
    cout << "Enter value of a:";
    cin >> a;
    cout << "Enter value of b:";
    cin >> b;
    
    cout << "Enter value before swapping value is:";
    cout << "In it A = " << a << "In it B = " << b << endl;
    
    swap(a, b);
    
    cout << "In outside function after swapping value is:";
    cout << "In it A = " << a << "In it B = " << b << endl;
    
    getch();
    return 0;
}

void swap (int &a, int &b)
{
    int c;
    
    c = a;
    a = b;
    b = c;
    
    cout << "In Inside function after swapping value is:";
    cout << "In it A = " << a << "In it B = " << b << endl;
}

Program No - 4
•	Write a C++ program to accept 'n' numbers from user through command line Argument, store all even and odd numbers in file 'even.txt' and 'odd.txt' respectively.
#include <stdlib.h>
#include <iostream.h>
#include <conio.h>
#include <fstream.h>

void main()
{
    ofstream out;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, b[10], i;
    clrscr();
    
    out.open("input.txt");
    out.write((char *) &a, sizeof(a));
    out.close();
    
    ifstream in;
    ofstream fp1, fp2;
    in.open("input.txt");
    in.read((char *) &b, sizeof(b));
    
    fp1.open("even.txt");
    fp2.open("add.txt");
    
    for (i=0; i<10; i++)
    {
        if (b[i] % 2 == 0)
        {
            fp1 << b[i] << "";
        }
        else
        {
            fp2 << b[i] << "";
        }
    }
    
    in.close();
    fp1.close();
    fp2.close();
    
    ifstream fp;
    char ch;
    fp.open("even.txt");
    cout << "The even file contents are:In";
    while (fp)
    {
        fp.get(ch);
        cout << "|" << ch;
    }
    
    fp.close();
    fp.open("add.txt");
    cout << "In The odd file content are:";
    while (fp)
    {
        fp.get(ch);
        cout << "|" << ch;
    }
    
    fp.close();
    getch();
}

Program No - 5
•	Consider the following C++ class:
#include <iostream.h>
#include <conio.h>

class Point
{
    int x, y;
    
    public:
        void setpoint(int a, int b)
        {
            x = a;
            y = b;
        }
        
        void showpoint()
        {
            cout << "(" << x << "," << y << ")";
        }
};

int main()
{
    int a, b;
    clrscr();
    Point p;
    
    cout << "In Enter co-ordinates";
    cout << "In Enter x:";
    cin >> a;
    cout << "In Enter y:";
    cin >> b;
    
    p.setpoint(a, b);
    p.showpoint();
    
    getch();
    return 0;
}
Program No. 6
Create a C++ base class Shape. Derive three different classes Circle, Sphere and Cylinder from Shape class. Write a C++ program to calculate area of Circle, Sphere and Cylinder (use Pure Virtual Function).
#include <iostream.h>
#include <conio.h>

class Shape
{
  public:
    virtual void area() = 0;
};

class Circle : public Shape
{
  float r;
  public:
    void area()
    {
      cout << "Enter Radius of circle: ";
      cin >> r;
      cout << "Area of circle is: " << (3.14 * r * r);
    }
};

class Sphere : public Shape
{
  float r;
  public:
    void area()
    {
      cout << "\nEnter Radius of Sphere: ";
      cin >> r;
      cout << "Area of sphere is: " << (4 * 3.14 * r * r);
    }
};

class Cylinder : public Shape
{
  float r, h;
  public:
    void area()
    {
      cout << "\nEnter Radius of cylinder: ";
      cin >> r;
      cout << "\nEnter height of cylinder: ";
      cin >> h;
      cout << "\nArea of Cylinder is" << (2 * 3.14 * r * h + 2 * 3.14 * r * r);
    }
};

int main()
{
  clrscr();
  Circle c;
  c.area();
  cout << endl;
  Sphere s;
  s.area();
  cout << endl;
  Cylinder cyli;
  cyli.area();
  cout << endl;
  getch();
  return 0;
}
Program No. 7
Write a C++ program to create two classes Square and Rectangle, compare area of both the shapes using Friend Function. Accept appropriate data members for both the classes.
#include <iostream.h>
#include <conio.h>

class Square
{
  public:
    int s;
    void getdata()
    {
      cout << "Enter side of square";
      cin >> s;
    }
    int calarea()
    {
      return (s * s);
    }
    friend void compare(int s, int r);
};

class Rectangle
{
  public:
    int l, w;
    void getdata()
    {
      cout << "Enter length and Breadth of rectangle";
      cin >> l >> w;
    }
    int calarea()
    {
      return (l * w);
    }
    friend void compare(int s, int r);
};

void compare(int s, int r)
{
  if (s > r)
  {
    cout << "\nThe area of square is greater than area of rectangle" << endl;
  }
  else
  {
    cout << "\nArea of rectangle is greater than area of square";
  }
}

int main()
{
  int s_area, r_area;
  clrscr();
  Square S;
  Rectangle r;
  S.getdata();
  s_area = S.calarea();
  r.getdata();
  r_area = r.calarea();
  cout << "\nSquare " << s_area << endl;
  cout << "\nRectangle " << r_area << endl;
  compare(s_area, r_area);
  getch();
  return 0;
}
Program No. 8
Write a C++ program to create a class Number, which contains static data member 'cnt' and member function 'display()'. Display() should print number of times display operation is performed irrespective of the object responsible for calling display().
#include <iostream.h>
#include <conio.h>

class Number
{
  public:
    void display()
    {
      static int cnt = 1;
      cout << "\nDisplay Function is called" << cnt << " time" << endl;
      cnt++;
    }
};

int main()
{
  number n1, n2;
  n1.display();
  n1.display();
  n2.display();
  n2.display();
  getch();
  return 0;
}
Program No. 9
Create a C++ class Person with data members: Person name, Mobile number, Age, City. Write necessary member functions for the following: (1) Search mobile number of given person (2) Search Person name of given mobile number (3) Search all Person details of given city. (Use Function Overloading)
#include <iostream.h>
#include <conio.h>
#include <string.h>

class Person
{
  public:
    int mob;
    char name[10], city[20];
    int age;
    void accept()
    {
      cout << "Enter Person name, city, mobile number and age";
      cin >> name >> city >> mob >> age;
    }
    void accept(char name1[])
    {
      if (strcmp(name, name1) == 0)
      {
        cout << "\nPerson Name " << name;
        cout << "\nPerson Mobile No" << mob << endl;
      }
    }
    void accept(int mob)
    {
      if (mno == mob)
      {
        cout << "\nPerson Name: " << name;
        cout << "\nPerson Mobile Number: " << mob << endl;
      }
    }
    void dis()
    {
      cout << "\nPerson Details: " << endl;
      cout << "\nPerson Name: " << name;
      cout << "\nPerson Mobile Number: " << mob;
      cout << "\nPerson city: " << city;
      cout << "\nPerson age: " << age;
    }
};

int main()
{
  char name[10];
  int mno, i, ch, no;
  clrscr();
  Person p[20];
  do
  {
    cout << "\n1. Accept Person details";
    cout << "\n2. Display Person details";
    cout << "\n3. To search Mobile number of given person";
    cout << "\n4. To search Person of given Mobile number";
    cout << "\n5. Exit";
    cout << "\nEnter your Choice";
    cin >> ch;
    switch(ch)
    {
      case 1:
        cout << "\nHow many record you want";
        cin >> no;
        for (i = 0; i < no; i++)
        {
          p[i].accept();
        }
        break;
      case 2:
        for (i = 0; i < no; i++)
        {
          p[i].dis();
        }
        break;
      case 3:
        cout << "Enter Person name search for Mobile Number: ";
        cin >> name;
        for (i = 0; i < no; i++)
        {
          p[i].accept(name);
        }
        break;
      case 4:
        cout << "Enter Mobile number to search for person name: ";
        cin >> mno;
        for (i = 0; i < no; i++)
        {
          p[i].accept(mno);
        }
        break;
    }
  } while (ch != 5);
  getch();
  return 0;
}
Program No. 10
Write C++ program to create a class Account with data members: Acc number, Acc type and balance. Write Member Function to accept & display 'n' account details (use dynamic memory allocation).
#include <iostream.h>
#include <conio.h>

class Account
{
  public:
    int acc_no, bal;
    char acc_type[30];
  public:
    Account()
    {
      cout << " Constructor" << endl;
    }
    ~Account()
    {
      cout << " Destructor" << endl;
    }
    void get()
    {
      cout << "Enter AccNo, type, Balance";
      cin >> acc_no >> acc_type >> bal;
    }
    void display()
    {
      cout << "\nAccount Number " << acc_no;
      cout << "\nAccount type " << acc_type;
      cout << " balance " << bal;
    }
};

int main()
{
  clrscr();
  int num, i;
  Account *a = new Account[4];
  delete [] a;
  cout << "\nHow many record you want";
  cin >> num;
  for (i = 0; i < num; i++)
  {
    a[i].get();
  }
  for (i = 0; i < num; i++)
  {
    a[i].display();
  }
  getch();
  return 0;
}
Program No. 11
Create a C++ class City with data members: city code, city name, population. Write necessary member functions for the following: (1) Accept details of 'n' cities (2) Display details of particular city (3) Display details of 'n' cities in ascending order of Population. (Use Array of Object and to display city information use manipulators.)
#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
#include <string.h>

char n[10], c[10];

class City
{
  public:
    int pop, city_code;
    char name[10], e[10];
    void accept()
    {
      cout << "Enter city name, code, Population";
      cin >> name >> city_code >> pop;
    }
    void sort(City &r1, City &r2)
    {
      City temp;
      if (r1.pop > r2.pop)
      {
        temp = r1;
        r1 = r2;
        r2 = temp;
      }
    }
    void display()
    {
      cout << "\n\nName of city " << name << endl;
      cout << "\nPopulation " << pop << endl;
      cout << "\ncity code " << city_code;
    }
    void scity()
    {
      if (strcmp(name, c) == 0)
      {
        cout << "\nName: " << name;
        cout << "\nPopulation: " << pop;
      }
    }
};

void main()
{
  clrscr();
  City t[30];
  int num, ch, pop, i, j;
  char count;
  cout << "\n1. accept & display";
  cout << "\n2. Ascending";
  cout << "\n3. Search by city";
  do
  {
    cout << "Enter your Choice";
    cin >> ch;
    switch(ch)
    {
      case 1:
        cout << "\nHow many record you want to insert";
        cin >> num;
        for (i = 0; i < num; i++)
        {
          t[i].accept();
        }
        for (i = 0; i < num; i++)
        {
          t[i].display();
        }
        break;
      case 2:
        for (i = 0; i < num; i++)
        {
          for (j = j + 1; j < num; j++)
          {
            t[i].sort(t[i], t[j]);
          }
          t[i].display();
        }
        break;
      case 3:
        cout << "\nEnter city Name ";
        cin >> c;
        for (i = 0; i < num; i++)
        {
          t[i].scity();
        }
        break;
    }
    cout << "\nDo you want to continue ";
    cin >> count;
  } while (count == 'Y' || count == 'y');
  getch();
}

