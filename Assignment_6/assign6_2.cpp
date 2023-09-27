/* Q2. Implement following classes. Test all functionalities in main() of each created class. Note that
employee is inherited into manager and salesman. Insted of char[] use string datatype.*/

#include <iostream>
using namespace std;

class employee
{
private:
    int id;
    float sal;

public:
    employee()
    {
        cout << "Inside Employee Base class constructor\n ";
    }
};

class manager : public employee
{
private:
    double bonus;

public:
    manager()
    {
        cout << "Inside Derived Manager class constructor\n ";
    }
};

class salesman : public employee
{
private:
    double comm;

public:
    salesman()
    {
        cout << "Inside Derived Salesman class constructor\n ";
    }
};

class sales_manager : public manager, public salesman
{
private:
public:
    sales_manager()
    {
        cout << "Inside Indirect sales_manager class constructor";
    }
};

int main()
{
    sales_manager s1;
    return 0;
}
