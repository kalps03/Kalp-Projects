#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>
using namespace std;

void login();
void registration();
void forgot();

int main() {
    int choice;

    //Menu Page
    cout<<"\t\t\t__________________________________________________\n\n\n";
    cout<<"\t\t\t                    Login Menu                    \n\n\n";
    cout<<"\t\t\t              \tPress 1 to LOGIN:       "<<endl;
    cout<<"\t\t\t              \tPress 2 to REGISTER:       "<<endl;
    cout<<"\t\t\t              \tPress 3 to if you FORGOT your password:          "<<endl;
    cout<<"\t\t\t              \tPress 4 to EXIT:       "<<endl;
    cout<<"\n\t\t\t            Please enter your choice:";
    cin>>choice;
    cout<<endl;

    switch(choice) {
        case 1:
            login();
            break;
        case 2:
            registration();
            break;
        case 3:
            forgot();
            break;
        case 4:
            cout<<"\t\t\t Thank you! \n\n";
            break;
        default:
            system("clear");
            cout<<"\t\t\t Invalid input \n"<<endl;
            main();
    }
}

void login() {
    int count = 0;
    string user_name, password, ID, pass;
    system("clear");
    
    cout<<"\t\t\t Please enter the username and password: "<< endl;
    cout<<"\t\t\t USERNAME: ";
    cin>>user_name;
    cout<<"\t\t\t PASSWORD: ";
    cin>>password;

    //CHECKING IF THE USERNAME AND PASSWORD EXIST
    
    ifstream input("userlogindata.txt");

    while(input>>ID>>pass) {
        if(ID == user_name && pass == password) {
            count=1;
            system("clear");
        }
    }
    input.close();

    if(count==1) {
        cout<<user_name<<"\n Your login is successful! \n";
        main();
    } else {
        cout<<"\n Login not found \n Please check your username and password\n";
        main();
    }
}

void registration() {
    string reg_user_name, reg_password, reg_id, reg_pass;
    system("clear");
    cout<<"\t\t\t Enter username: \n";
    cin>>reg_user_name;
    cout<<"\t\t\t Enter password: ";
    cin>>reg_password;

    ofstream new_data("userlogindata.txt", ios::app);
    new_data<<reg_user_name<<" "<<reg_password<<endl;
    system("clear");
    cout<<"Registration is successful! \n";
    main();

}

 void forgot() {
    int option;
    system("clear");
    cout<<"\t\t\t Here is your password! \n";
    cout<<"Press 1 to search your password by username "<<endl;
    cout<<"Press 2 to go back to main menu "<<endl;
    cout<<"\t\t\t Enter your choice: ";
    cin>>option;

    switch(option) {
        case 1: {
            int count = 0;
            string for_user_name, for_ID, for_pass;
            cout<<"\n\t\t\t Enter your username: ";
            cin>>for_user_name;

            ifstream f2("userlogindata.txt");
            
            while (f2>>for_ID>>for_pass) {
                if (for_ID==for_user_name) {
                   count = 1; 
                }
            }
            f2.close();
            
            if (count == 1) {
                cout<<"\n Your account is found! \n";
                cout<<"\n\n Your password is: "<<for_pass;
                main();
            } else {
                cout<<"\n\t Your account was not found! \n";
                main();
            }
            break;
        } 

        case 2: {
            main();
        }
        default: 
            cout<<"\t\t\t Invaild input!"<<endl;
            forgot();    
    }
}

