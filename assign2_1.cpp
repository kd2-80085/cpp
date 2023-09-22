    /* Q1. Create a namespace NStudent. Create the Student class(created as per assignment-1 Q3) inside
    namespace. Test the functionalities.*/

    #include<iostream>
    using namespace std;
    #include<string.h>

    namespace NStudent{
    class student{

        int rollNo;
        string name;
        int marks;

        public :
        void initStudent()
        {
            this->rollNo=0;
            this->name="";
            this->marks=0;
        }
        void printStudentOnConsole(){
            cout<<"Student details - \n";
            cout<<"Roll No : "<<this->rollNo<<"\n";
            cout<<"Name : "<<this->name<<"\n";
            cout<<"Marks : "<<this->marks<<"\n";
        }

        void acceptStudentFromConsole(){
            cout<<"Enter Roll No\n";
            cin>>rollNo;
            
            cout<<"Enter marks\n";
            cin>>marks;

            cout << "Enter Name: ";
            cin.ignore(); // Clear the input buffer
            getline(cin, this->name);
        
        }
    };
        
    }

    int main()
    {
        int choice;
        NStudent::student s1;

        do{
        cout<<"Enter your choice : 1.Print default details 2.Enter Student Details 3.Print Student Deatails 4.Exit\n";
        cin>>choice;

        switch(choice)
        {
            case 1 :s1.initStudent();
                    s1.printStudentOnConsole();
                    break;
            case 2 :s1.acceptStudentFromConsole();
                    break;
            case 3 :s1.printStudentOnConsole();
                    break;
        }
        }while (choice!=4);
        return 0;
    }