/*
Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide necessary constructors.
*/

#include <iostream>
using namespace std;

class box
{
    float length;
    float width;
    float height;

public:
    box()
    { // default parameterless ctor
    }
    box(float length, float width, float height)
    { // parameterized ctor

        this->length = length;
        this->width = width;
        this->height = height;
    }

    void acceptBox()
    {
        cout << "Enter Length,width & Height of box: \n";
        cout << "\nLength : ";
        cin >> length;
        cout << "\nWidth : ";
        cin >> width;
        cout << "\nHeight : ";
        cin >> height;
    }
    void displayBox()
    {
        cout << "Box Dimensions are : \n";
        cout << "\nLength : " << this->length;
        cout << "\nWidth : " << this->width;
        cout << "\nHeight : " << this->height;
    }

    void calVolume()
    {
        int volume;
        volume = this->length * this->width * this->height;
        cout << "\nVolume of box is : " << volume << endl;
    }
};

int menu()
{
    int choice;
    cout << "\n********************MENU*********************\n";
    cout << "0.EXIT \n 1.ADD_BOX \n 2.DISPLAY BOX \n 3.CALCULATE VOLUME " << endl;
    cin >> choice;
    return choice;
}

enum BoxMenu
{
    EXIT,
    ADD_BOX,
    DISPLAY_BOX,
    CAL_VOLUME
};
int main()
{
    box b1(10, 20, 30);

    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case ADD_BOX:
            b1.acceptBox();
            break;
        case DISPLAY_BOX:
            b1.displayBox();
            break;
        case CAL_VOLUME:
            b1.displayBox();
            b1.calVolume();
            break;
        }
    }
}