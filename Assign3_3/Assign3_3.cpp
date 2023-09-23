/* Q3. Write a class to find volume of a Cylinder by using following members. (volume of
Cylinder=3.14 * radius * radius *height) (write a menu driven code for it and also use modular
approach)
Class having following member functions:
Cylinder()
Cylinder(double radius, double height)
getRadius()
setRadius()
getHeight()
setHeight()
getVolume()
printVolume()
Initialize members using constructor member initializer list.
*/

#include "./cylinder.h"
#include "./cylinderMenu.h"




int main(){
    int choice ;
    Cylinder c1(12.5,20);
    while((choice=menu())!=0){
       switch(choice){
        case cylinderMenu::GET_RADIUS : 
                    cout<<"\nRadius of cylinder is : "<<c1.getRadius();
                    break;

        case SET_RADIUS :
                    c1.setRadius();
                    break;

        case GET_HEIGHT :                     
                    cout<<"\nHeight of cylinder is : "<<c1.getHeight();
                    break;

        case SET_HEIGHT :
                    c1.setHeight();
                    break;

        case  GET_VOLUME :
                    cout<<"\nVolume of cylinder is : "<<c1.getVolume();
                    break;

        case PRINT_VOLUME :
                    c1.printVolume();
                    break;
       }
    }
}
