#include <iostream>
#include <windows.h>
#include <unistd.h>
#include <conio.h>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <fstream>
using namespace std;

class Hospital_management
{
private:
  	string name,bath,blood,gen,date;
    int age,phone,pas;

public:
    void menu();
    void doctor();
    void reg();
    void patient();
    void doctor_information();
    void schedule();
    void patient_entry();
    void waitForEnter();
    void insert();
    void display();
    void modify();
    void search();
    void deleted();
};

void Hospital_management::menu() 
{
    int password_user(); 
    password_user();
    //login screen
    while (true)
    {
        	int a;
    system("cls");
    cout<<"\n\n\n\n\n\t\t\t\t\t\t  login page ";
    cout<<"\n\t\t\t\t\t        ==============";

    cout<<"\n\n\n\n\t\t\t\t\t  1. patient ";
    cout<<"\n\n\t\t\t\t\t  2. doctor ";
    cout<<"\n\n\t\t\t\t\t  3. register ";
    cout<<"\n\n\n\n\n\n\n\n\n\t\t\t                  press any option and enter to go login ";
    cout<<"\n\n\n\t\t\t\t\t  enter : ";
    cin>>a;
    switch(a)
    {
   	case 1:
   		{
   			patient();
   			break;
		   }
    case 2:
        {
             doctor();
           break;
        }
    case 3:
        {
             reg();
           break;
        }
    }
          char ch;
     cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t press 'g' to go back : ";
     cin>>ch;

     switch(ch)
     {
     case 'g':
        {
            system("cls");
            menu();
        }
     }


}
}
void Hospital_management::doctor() 
{

    int n;
   system("cls");
      cout<<"\n\n\n\n";
    cout<<"\t\t\t\t\t  =========================================="<<endl;
    cout<<"\t\t\t\t\t ||                                         ||"<<endl;
    cout<<"\t\t\t\t\t ||            doctor portal                ||"<<endl;
    cout<<"\t\t\t\t\t ||                                         ||"<<endl;
    cout<<"\t\t\t\t\t  ==========================================";
    
    cout<<"\n\t\t\t\t\t\t01. doctor schedule "<<endl;
    cout<<"\n\t\t\t\t\t\t02. doctor information "<<endl;
    cout<<"\n\t\t\t\t\t\t03. back to login page "<<endl;
    cin>>n;
    switch (n)
{
    case 1:
        {
             system("cls");
              schedule();
                break;
        }
    case 2:
        {
             doctor_information();
                break;
        }
   
}
  char ch;
     cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t press 'g' to go back : ";
     cin>>ch;

     switch(ch)
     {
     case 'g':
        {
            system("cls");
            menu();
        }
     }
}

void Hospital_management::doctor_information()
{
 system("cls");
    cout<<"             doctor information  ";
    cout<<"\n\t\t\t\t\t\t  ======================  ";
    cout<<"\n\n";
    cout<<"\n                                  id                name                       sector ";
    cout<<"\n                                ------           -----------               ---------------              ";
    cout<<"\n\n\t\t\t\t 3476.        Dr Rabindra              cardiologist specialist          "<<endl<<endl;
    cout<<"\t\t\t\t 8436.        Dr Amit kumar Shah           bone specialist                    "<<endl<<endl;
    cout<<"\t\t\t\t 8956.        Dr Roshan                    Anesthesiologists specialist      "<<endl<<endl;
    cout<<"\t\t\t\t 3487 .       Dr Anil                      Surgeons specialist                 "<<endl<<endl;                   
    cout<<"\t\t\t\t 2398.        Dr Dibas                     Critical Medicine specialist       "<<endl<<endl;                   
    cout<<"\t\t\t\t 1875.        Dr Jayendra                  Dermatologists specialist        "<<endl<<endl;
    cout<<"\t\t\t\t 7397.        Dr Bibek                     Endocrinologists specialist    "<<endl<<endl;
    cout<<"\t\t\t\t 7295.        Dr Divya                     Medicine Specialist specialist  "<<endl<<endl;            
	cout<<"\t\t\t\t 2863.        Dr Supriya                   Gastroenterologists specialist		"<<endl<<endl;
	  char ch;
     cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t press 'g' to go back : ";
     cin>>ch;

     switch(ch)
     {
     case 'g':
        {
            system("cls");
            menu();
        }
     }
 }
 

void Hospital_management::schedule(){
 cout<<"\n  ___________________________________________________________________________________________________________________________________________________________________ ";
    cout<<"\n |  TIME    |           sunday     |         monday    |         tuesday     |        wednesday      |       thursday       |       friday      |      saturday      |  ";
    cout<<"\n |__________|______________________|___________________|_____________________|_______________________|______________________|___________________|____________________| ";
    cout<<"\n |          |  Dr Rabindra         |  Dr Amit kumar    |  Dr Dibas           | Dr Jayendra           |  Dr Supriya          |   Dr Amit         |  Dr Rabindra       | ";
    cout<<"\n |9 AM-11 Am|  Dr Amit kumar shah  |  Dr Rabindra      |  Dr Roshan          | Dr Divya              |  Dr Anil             |                   |                    | ";
    cout<<"\n |__________|______________________|___________________|_____________________|_______________________|______________________|___________________|____________________| ";
    cout<<"\n |          |  Dr Roshan           |  Dr Supriya       |  Dr Bibek           | Dr Amit kumar         |  Dr Bibek            |   Dr Divya        |  Dr Amit kumar     | ";
    cout<<"\n |11AM-1 pm |  Dr Dibas            |  Dr Roshan        |  Dr Rabindra        | Dr Divya              |  Dr Dibas            |                   |                    | ";
    cout<<"\n |__________|______________________|___________________|_____________________|_______________________|______________________|___________________|____________________| ";
    cout<<"\n |          |  Dr Amit kumar       |  Dr  Rabindra     |  Dr Dibas           | Dr Rabindra           |  Dr Amit kumar       |   Dr Roshan       |  Dr Anil           | ";
    cout<<"\n |1 PM-3 PM |  Dr Roshan           |  Dr  Anil         |  Dr Amit            | Dr nuruzaman          |  Dr Bibek            |                   |                    | ";
    cout<<"\n |__________|______________________|___________________|_____________________|_______________________|______________________|___________________|____________________| ";
    cout<<"\n |          |  Dr Anil             |  Dr Jayendra      |  Dr Divya           | Dr Amit kumar         |  Dr  Rabindra        |   Dr  Dibas       |  Dr Jayendra       | ";
    cout<<"\n |3 PM-5 PM |  Dr Divya            |  Dr Dibas         |  Dr Anil            | Dr Supriya            |  Dr Jayendra         |                   |                    | ";
    cout<<"\n |__________|______________________|___________________|_____________________|_______________________|______________________|___________________|____________________|  ";
     char ch;
     cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t press 'g' to go back : ";
     cin>>ch;

     switch(ch)
     {
     case 'g':
        {
            system("cls");
            menu();
        }
     }
}
void Hospital_management::reg()
{
	
	int n;
   system("cls");
      cout<<"\n\n\n\n";
    cout<<"\t\t\t\t\t =========================================="<<endl;
    cout<<"\t\t\t\t\t||                                        ||"<<endl;
    cout<<"\t\t\t\t\t||         GRANDE HOSPITAL                ||"<<endl;
    cout<<"\t\t\t\t\t||                                        ||"<<endl;
    cout<<"\t\t\t\t\t =========================================="<<endl;
    cout<<"\n\n\n\n\t\t\t\t\t\t01. patient entry "<<endl;
    
    cin>>n;
    if(n==1){
    	 patient_entry();
	}
}
void Hospital_management::patient_entry(){
	system("cls");
    ofstream file("patient_information1.txt",ios::out|ios::app);
    cout<<"\n\n\n\n\t\t\t\t\t       patient entry ";
    cout<<"\n\t\t\t\t\t   ===================== ";
     cout<<"\n\t\t\t\t set a password : ";
     cin>>pas;
     cout<<"\t\t\t\t patient name : ";
     cin>>name;
     cout<<"\t\t\t\t patient gender : ";
     cin>>gen;
     cout<<"\t\t\t\t patient age : ";
     cin>>age;
     cout<<"\t\t\t\t date of bath : ";
     cin>>bath;
     cout<<"\t\t\t\t blood group : ";
     cin>>blood;
     cout<<"\t\t\t\t phone number : ";
     cin>>phone;
     cout<<"\t\t\t\t entry date : ";
     cin>>date;
     cout<<"\n\n\nt\t\t\t\t  all data is store ";
     //file<<"name\t\tpassword\t\tgender\t\tage\t\tbirth date\t\tblood group\t\tphone number\t\tentry date"<<endl;
    
     file<<pas<<"\t\t"<<name<<"\t\t\t"<<gen<<"\t\t"<<age<<"\t\t\t"<<bath<<"\t\t"<<blood<<"\t\t"<<"0"<<phone<<"\t\t"<<date<<endl;

     file.close();

     char ch;
     cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t press 'g' to go back : ";
     cin>>ch;

     switch(ch)
     {
     case 'g':
        {
            system("cls");
            menu();
        }
     }

}

void Hospital_management::patient(){
		int n;
   system("cls");
      cout<<"\n\n\n\n";
    cout<<"\t\t\t\t\t   ======================================"<<endl;
    cout<<"\t\t\t\t\t||                                        ||"<<endl;
    cout<<"\t\t\t\t\t||           patient portal               ||"<<endl;
    cout<<"\t\t\t\t\t||                                        ||"<<endl;
    cout<<"\t\t\t\t\t  ======================================="<<endl;
    cout<<"\n\t\t\t\t\t\t01. Dispaly patient information "<<endl;
    cout<<"\n\t\t\t\t\t\t02. search patient information "<<endl;
cout<<"\n\t\t\t\t\t\t03. Delete  patient information "<<endl;
    cout<<"\n\t\t\t\t\t\t04. modify  patient information "<<endl;
    cout<<"\n\t\t\t\t\t\t05. back to login page "<<endl;
    cin>>n;
    switch (n)
{
	case 1:{
		display();
		break;
		case 2:{
			search();
			break;
		}
		case 3:{
			deleted();
			break;
		}
}
}
}
void Hospital_management::display(){
	 system("cls");
	 
    int total = 1;
    fstream file;
    string line;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- patient Record Data -------------------------------------------" << endl;
    file.open("patient_information1.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data is Present... ";
        file.close();
    }
    else
    {
        file >> pas >> name >> gen >> age >> blood >> phone>>date;
        cout << "\n -----------------------------------------------------------------------------------------------------------------------";
        cout << "\n||    password    ||   Mame    ||    Gender   ||    AGE    ||      Blood group      ||    phone   ||  entry date       " ;
        cout << "\n ------------------------------------------------------------------------------------------------------------------------";
     {
            cout << "\n";
            cout << total++ << ". " << pas << "\t  " << name << "\t\t  " << gen << "\t\t   " << age << "\t\t  " << blood << "\t\t" << phone<< "\t\t"<<date;
           file >> pas >> name >> gen >> age >> blood >> phone>> date; 
        }
    }
    
    file.close();
      char ch;
     cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t press 'g' to go back : ";
     cin>>ch;

     switch(ch)
     {
     case 'g':
        {
            system("cls");
            menu();
        }
     }
    
}
void Hospital_management::waitForEnter()
{
    cout << "\n\nPress enter to go back: ";
    cin.get();
}
void Hospital_management::search(){
	 system("cls");
    fstream file;
    int password;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- patient Search Data -------------------------------------------" << endl;
    file.open("patient_information1.txt", ios::in);
    cout << "\n\nEnter patient password: ";
    cin >> password;
    if (!file)
    {
        cout << "\n\t\t\tNo Data is Present... ";
        file.close();
    }
    else
    {
        file >> pas >> name >> gen >> age >> blood >> phone>> date;
            if (password==pas)
            {
                cout << "\n---------------------\n";
                cout << " Name: " << name << "\n";
                cout << " Password: " << pas << "\n";
                cout << "Gender: " << gen << "\n";
                cout << "Age: " << age << "\n";
                cout << "Phone: " << phone << "\n";
                cout << "Blood gropu: " << blood << "\n";
                cout << "Entry date: " << date << "\n";
                cout << "---------------------\n";
            }
            file >> pas >> name >> gen >> age >> blood >> phone>> date; 
	}
    file.close();
        char ch;
     cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t press 'g' to go back : ";
     cin>>ch;

     switch(ch)
     {
     case 'g':
        {
            system("cls");
            menu();
        }
     }


}
void Hospital_management::deleted() // Delete data of employe
{
    system("cls");
  int password;
    fstream file, file1;
    int found = 0;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Delete Employee Data ------------------------------------------" << endl;
    file.open("patient_information1.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data is Present..";
        file.close();
    }
    else
    {
        cout << "\nEnter patient password To Remove Data: ";
        cin >> password;
        file1.open("record.txt", ios::app | ios::out);
          file >> pas >> name >> gen >> age >> blood >> phone>> date;
        
        
            if (password!=pas)
            {
                file1<<pas << name << gen <<age <<blood <<phone<<date;
            }
            else
            {
                found++;
                cout << "\n\t\t\tSuccessfully Delete Data";
            }
         file >> pas >> name >> gen >> age >> blood >> phone>> date;
        
        if (found == 0)
        {
            cout << "\n\n\tEmployee ID Not Found.. Please Try Again";
        }
        file1.close();
        file.close();
        remove("patient_information1.txt");
        rename("record.txt", "patient_information1.txt");
      
    }
     char ch;
     cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t press 'g' to go back : ";
     cin>>ch;

     switch(ch)
     {
     case 'g':
        {
            system("cls");
            menu();
        }
     }
}
int password_user() // Employee Authentication
{
    string pass_reg = "";
    string name_reg = "";
    string pass = "";
    string name = "";
    fstream file;
    char ch;
    system("cls");
    cout << "\n\t\t\t -------------------------------------------";
    cout << "\n\t\t\t||  WELCOME TO HOSPITAL MANAGEMENT SYSTEM  ||";
    cout << "\n\t\t\t -------------------------------------------";
    cout << "\n\n\t\t\t   -| Press: [1] Register & [2] Login  |-";
    int selection;
    cout << "\n\nPlease Enter Value: ";
    cin >> selection;
    // if user press [1], then it would lead them to register.
    if (selection == 1)
    {
        system("cls");
        cout << "\n\t\t\t\t\t---------------------------";
        cout << "\n\t\t\t\t\t>> REGISTRATION EMPLOYEE <<";
        cout << "\n\t\t\t\t\t---------------------------";
        cout << "\n\n\t\t\t\t\tEnter Your Name: ";
        cin >> name_reg;
        cout << "\n\t\t\t\t\tEnter Your Password: ";
        ch = _getch();
        while (ch != 13)
        {
            pass_reg.push_back(ch);
            cout << '*';
            ch = _getch();
        }
        file.open("Ep_data.txt", ios::app);
        file << " " << name_reg << " " << pass_reg << "\n";
        file.close();
        cout << "\nRegistration Succesfully save";
        getch();
        password_user();
    }
    // if user press [2], then it would lead them to login.
    else if (selection == 2)
    {
        system("cls");
        file.open("Ep_data.txt", ios::in);
        cout << "\n\t\t\t\t\t--------------------";
        cout << "\n\t\t\t\t\t>> LOGIN EMPLOYEE <<";
        cout << "\n\t\t\t\t\t--------------------";
        cout << "\n\n\t\t\t\t\tEnter Your Name: ";
        cin >> name;
        cout << "\n\t\t\t\t\tEnter Your Password: ";
        ch = _getch();
        while (ch != 13)
        {
            pass.push_back(ch);
            cout << '*';
            ch = _getch();
        }
        file >> name_reg >> pass_reg;
        while (!file.eof())
        {
            if (pass == pass_reg && name == name_reg)
            {
                cout << "\n\n\n\t\t\t\t\t| Verfiying Password |\n\t\t\t\t\t";
                for (int a = 1; a < 8; a++)
                {
                    Sleep(500);
                    cout << "...";
                }
                cout << "\n\nAccess Granted..\n\n";
                system("PAUSE");
                system("cls");
            }
            else
            {
                cout << "\n\n\n\t\t\t\t\t| Verfiying password |\n\t\t\t\t\t";
                for (int a = 1; a < 8; a++)
                {
                    Sleep(500);
                    cout << "...";
                }
                cout << "\n\nAccess Aborted...\n\n";
                system("PAUSE");
                system("cls");
                password_user();
            }
            file >> name_reg >> pass_reg;
        }
        file.close();
    }
    else
    {
        cout << "\nInvalid Input.. Please Try Again..";
        password_user();
    }
    return 0;
}
int main()
{
    // Call the function
   Hospital_management system;
    system.menu();
    return 0;
}
