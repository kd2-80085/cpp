/* Q1. Implement following classes. Test all functionalities in main().Insted of char[] use string
datatype Employee<-Date<-Person */

#include <iostream>
using namespace std;

class date
{
    int d;
    int m;
    int y;

public:
    date()
    {
        this->d = 0;
        this->m = 0;
        this->y = 0;
    }

    date(int d, int m, int y)
    {
        this->d = d;
        this->m = m;
        this->y = y;
    }

    int getDay()
    {
        return this->d;
    }

    void setDay()
    {
        cout << "Enter DAY :";
        cin >> this->d;
    }
    int getMonth()
    {
        return this->m;
    }

    void setMonth()
    {
        cout << "Enter month :";
        cin >> this->m;
    }
    int getYear()
    {
        return this->y;
    }

    void setYear()
    {
        cout << "Enter Year :";
        cin >> this->y;
    }

    void acceptDate()
    {
        cout << "Enter Date as follows : ";
        cout << "Enter day : ";
        cin >> this->d;
        cout << "Enter month : ";
        cin >> this->m;
        cout << "Enter year : ";
        cin >> this->y;
    }

    void displayDate()
    {
        cout << "Date is : ";
        cout << this->d << "/" << this->m << "/" << this->y << endl;
    }
};

class person
{
    string name;
    string addr;
    date bdate;

public:
    person()
    {
        this->addr = "";
        this->name = "";
    }

    person(string name, string addr, int d, int m, int y) : bdate(d, m, y)
    {
        this->addr = addr;
        this->name = name;
    }
    string getName()
    {
        return this->name;
    }
    void setName()
    {
        cout << "Enter name";
        getchar();
        getline(cin, this->name);
    }
    string getAddr()
    {
        return this->addr;
    }
    void setAddr()
    {
        cout << "Enter address";
        getchar();
        getline(cin, this->addr);
    }

    void getBdate()
    {
        cout << "Birthdate is :";
        cout << bdate.getDay() << "/" << bdate.getMonth() << "/" << bdate.getYear();
    }

    void setBdate()
    {
        cout << "Enter Birthdate :";
        bdate.setDay();
        bdate.setMonth();
        bdate.setYear();
    }
    
    void acceptPerson()
    {
        cout << "Enter person name : ";
        getchar();
        getline(cin, this->name);

        cout << "Enter address : ";
        getchar();
        getline(cin, this->addr);

        bdate.acceptDate();
    }

    void displayPerson()
    {
        cout << "Person name is : " << this->name << endl;
        cout << "Person address is : " << this->addr << endl;
        cout << "Birthdate is :";
        bdate.displayDate();
    }
};

class employee 
{ 
private:
    int id;
    float sal;
    string dept;
    date doj;

public:
    employee()
    {
        this->id = 0;
        this->sal = 0;
        this->dept = "";
    }
    employee(int id, float sal, string dept, int d, int m, int y) : doj(d, m, y)
    {
        this->id = id;
        this->sal = sal;
        this->dept = dept;
    }

    int getId()
    {
        return this->id;
    }

    void setid()
    {
        cout << "Enter id :";
        cin >> this->id;
    }
    float getSal()
    {
        return this->sal;
    }

    void setSal()
    {
        cout << "Enter salary :";
        cin >> this->sal;
    }

    string getDept()
    {
        return this->dept;
    }

    void setDept()
    {
        cout << "Enter department :";
        getchar();
        getline(cin, this->dept);
    }

    void getDOJ()
    {
        cout << "Date of joining is : ";
        cout << doj.getDay() << "/" << doj.getMonth() << "/" << doj.getYear();
    }

    void setDOJ()
    {
        cout << "Enter DOJ :";
        doj.setDay();
        doj.setMonth();
        doj.setYear();
    }

    void acceptEmp()
    {
        cout << "Enter employee id : ";
        cin >> this->id;
        cout << "Enter salary : ";
        cin >> this->sal;
        cout << "Enter department : ";
        getchar();
        getline(cin, this->dept);

        doj.acceptDate();
    }

    void displayEmp()
    {
        cout << "Employee id : " << this->id << endl;
        cout << "Employee salary : " << this->sal << endl;
        cout << "Employee dept : " << this->dept << endl;
        cout << "Employee joining date :";
        doj.displayDate();
    }
};

int main()
{
    // employee e1, e2;
    // e1.displayEmp();
    // e1.setid();
    // e1.setDept();
    // e1.setDOJ();
    // e1.setSal();
    // e1.displayEmp();

    // e2.acceptEmp();
    // e2.displayEmp();

    employee e3(1, 20000, "HR", 12, 12, 2023);
    e3.displayEmp();
}
