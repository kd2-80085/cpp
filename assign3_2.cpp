            /* Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
            Mostly they do, but sometimes a car goes by without paying.
            The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
            collected. Model this tollbooth with a class called tollbooth.
            The two data items are a type unsigned int to hold the total number of cars, and a type double to
            hold the total amount of money collected.
            A constructor initializes all data members to 0. A member function called payingCar() increments
            the car total and adds 0.50 to the cash total. An other function, called nopayCar()
            increments the car total but adds nothing to the cash total. Finally, a member function called
            printOnConsole() displays the two totals and number of paying as well as non paying cars total.

            ( write a menu driven code for it) */

            #include<iostream>
                using namespace std;

                class  tollbooth{

                    unsigned int totalNoOfCars;

                    double totalAmtMoney;

                public :
                tollbooth(){
                    this->totalAmtMoney=0;
                    this->totalNoOfCars=0;
                }

            void payingCar(){
                    this->totalNoOfCars+=1;
                    this->totalAmtMoney+=0.50;
                    cout<<"Car paid toll successfully : ";
                }
            void noPayingCar(){
                    this->totalNoOfCars+=1;
                    cout<<"Car did not paid the toll ";

            }

            void printOnConsole(){
                cout<<"\nTotal No. of paying cars are : "<<((this->totalAmtMoney)/0.50);
                cout<<"\nTotal No. of non paying cars are : "<<( (this->totalNoOfCars)-((this->totalAmtMoney)/0.50));
                cout<<"\nTotal money collected : "<<this->totalAmtMoney;

            }

                };

                enum tollMenu{
            EXIT,ADD_PAYINGCAR,ADD_NONPAYINGCAR,SHOW_ALL_CARS
        };

        int menu()
        {
            int choice ;
            cout<<"\n********************MENU*********************\n";
            cout<<"0.EXIT \n 1.ADD_PAYINGCAR \n 2. ADD_NONPAYINGCAR \n 3.DISPLAY CARS "<<endl;
            cin>>choice;
            return choice;
        }

            int main(){
                    tollbooth   tBooth;

                        int choice;
                        while((choice=menu())!=0){
                            switch(choice){
                                case ADD_PAYINGCAR :tBooth.payingCar();
                                    break;
                                case ADD_NONPAYINGCAR:tBooth.noPayingCar();
                                    break;
                                case SHOW_ALL_CARS: tBooth.printOnConsole();           
                                    break;
                            }
                        }
                    }
