#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
#include<windows.h>
using namespace std;

class bank
{
    private:
        // int pin;
        float balance;
        string pin,id,pass,name,fname,address,phone;
    public:
        void menu();
        void bank_management();
        void atm_management();
        void new_user();
        void  already_user();
        void deposit();
        void withdraw();
        void transfer();
        void payment();
        void search();
        void edit();
        void del();
        void show_records();
        void show_payment();
        void user_balance();
        void withdraw_atm();
        void check_detail();
};

    void introduction()
    {
        cout<<"\n\n\n\n\n";
        for(int i=1;i<=60;i++)
        {
            cout<<"*";
        }
        cout<<"\n\t ";
        for(int i=1;i<=59;i++)
        {
            cout<<"*";
        }
        cout<<"\n\t\t ";
        for(int i=1;i<=58;i++)
        {
            cout<<"*";
        }
        cout<<"\n\t\t\t Bank & ATM Management System\n\t\t\t Project In C++\n\n\t\t  ";
        for(int i=1;i<=58;i++)
        {
            cout<<"*";
        }
        cout<<"\n\t ";
        for(int i=1;i<=59;i++)
        {
            cout<<"*";
        }
        cout<<"\n ";
        for(int i=1;i<=60;i++)
        {
            cout<<"*";
        }
        getch();
        system("cls");
        cout<<"\n\t ";
        for(int i=1;i<=52;i++)
        {
            cout<<"*";
        }
        cout<<"\n\t\t ";
        for(int i=1;i<=35;i++)
        {
            cout<<"*";
        }
        cout<<"\n\t\t\t ";
        for(int i=1;i<=20;i++)
        {
            cout<<"*";
        }
        cout<<"\n\n\t\t\tWELCOME TO MILANS BANK";
        cout<<"\n\n\t\t\t";
        for(int i=1;i<=20;i++)
        {
            cout<<"*";
        }
        cout<<"\n\t\t ";
        for(int i=1;i<=35;i++)
        {
            cout<<"*";
        }
        cout<<"\n\t ";
        for(int i=1;i<=52;i++)
        {
            cout<<"*";
        }
        getch();

    }
    void bank::menu()
    {
        p:
        system("cls");
        int choice;
        char ch;
        string pin,pass,email;
        cout<<"\n\n\t\t\tControl Panel";
        cout<<"\n\n 1. Bank Management";
        cout<<"\n 2. ATM Management";
        cout<<"\n 3. Exit";
        cout<<"\n\n Enter your Choice:-";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"\n\n\t\t\t Login Account";
                cout<<"\n\n Enter Email:-";
                cin>>email;
                cout<<"\n\n\t\tEnter Pincode:-";
                for(int i=1;i<=5;i++)
                {
                    ch=getch();
                    pin += ch;
                    cout<<"*";
                }
                cout<<"\n\n Enter Passward:-";
                for(int i=1;i<=5;i++)
                {
                    ch=getch();
                    pass += ch;
                    cout<<"*";
                }
                if(email == "milansahu3834@gmail.com" && pin == "12345" && pass =="12345")
                {
                    bank_management();
                }
                else
                {
                    cout<<"\n\nYour Email & password is invalid";
                }
                
                break;
                case 2:
                atm_management();
                break;
            case 3:
                exit(0);
            default:
                cout<<"\n\nINVALID CHOICE .. PLEASE SELECT PROPER OPTION";
        }
        getch();
        goto p;
    }
    void bank::bank_management()
    {
        p:
        system("cls");
        int choice;
        cout<<"\n\n\t\t\t BANK MANAGEMENT SYSTEM";
        cout<<"\n\n 1. New User";
        cout<<"\n 2.  Already User";
        cout<<"\n 3.  Deposit Option";
        cout<<"\n 4.  Withdraw Option";
        cout<<"\n 5.  Transfer Option";
        cout<<"\n 6.  payment Option";
        cout<<"\n 7.  Search user Record";
        cout<<"\n 8.  Edit user Record";
        cout<<"\n 9.  Delete user Record";
        cout<<"\n 10. Show all Record";
        cout<<"\n 11. Payment all Record";
        cout<<"\n 12. Go Back";
        cout<<"\n\n Enter Your Choice:- ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                new_user();
                break;
            case 2:
                already_user();
                break;
            case 3:
                deposit();
                break;
            case 4:
                withdraw();
                break;
            case 5:
                transfer();
                break;
            case 6:
                payment();
                break;
            case 7:
                search();
                break;
            case 8:
                edit();
                break;
            case 9:
                del();
                break;
            case 10:
                show_records();
                break;
            case 11:
                show_payment();
                break;
            case 12:
                menu();
            default:
                cout<<"\nInvalid Option chosen";
        }
        getch();
        goto p;
    }
    void bank::atm_management()
    {
        p:
        system("cls");
        int choice;
        cout<<"\n\n\t\t\t ATM MANAGEMENT SYSTEM";
        cout<<"\n\n 1. User Login & Check Balance";
        cout<<"\n 2. Withdraw Amount";
        cout<<"\n 3. Account Details";
        cout<<"\n 4. Go Back";
        cout<<"\n\n Enter Your Choice:- ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            user_balance();
                break;
            case 2:
                withdraw_atm();
                break;
            case 3:
                check_detail();
                break;
            case 4:
                menu();
            default:
                cout<<"\nInvalid Option chosen";
        }
        getch();
        goto p;
    }
    void bank::new_user()
    {
        p:
        system("cls");
        fstream file;
        int p;
        float b;
        string n,f,pa,a,ph,i;
        cout<<"\n\n\t\t\tAdd New User";
        cout<<"\n\n User ID :-";
        cin>>id;
        cout<<"\n\n\t\tName:-";
        cin>>name;
        cout<<"\n\n Enter Fathers name:-";
        cin>>fname;
        cout<<"\n\n\t\t Address:-";
        cin>>address;
        cout<<"\n\n Enter Pin code(5 digit):-";
        cin>>pin;
        cout<<"\n\n\t\t Password (5 digit):-";
        cin>>pass;
        cout<<"\n\n Enter Phone no:-";
        cin>>phone;
        cout<<"\n\n\t\t Current Balance:-";
        cin>>balance;
        file.open("bank.txt",ios::in);
        if(!file)
        {
            file.open("bank.txt",ios::app|ios::out);
            file<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
            file.close();
        }
        else
        {
            file>>i>>n>>f>>a>>p>>pa>>ph>>b;
            while(!file.eof())
            {
                if(i==id)
                {
                    cout<<"\n\n user ID is already Exist...";
                    getch();
                    goto p;
                } 
                file>>i>>n>>f>>a>>p>>pa>>ph>>b;
            }
            file.close();
            file.open("bank.txt",ios::app|ios::out);
            file<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
            file.close();
        }
        cout<<"\n\n User Account Create Successful.......";
    }

    void bank::already_user()
    {
        system("cls");
        fstream file;
        string t_id;
        int found=0;
        cout<<"\n\n\t\t\t ALREADY USER ACCOUNT";
        file.open("bank.txt",ios::in);
        if(!file)
        {
            cout<<"\n\n File Opening Error...";
        }
        else
        {
            cout<<"\n\nEnter User Id:-";
            cin>>t_id;
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            while(!file.eof())
            {
                if(t_id == id)
                {
                    system("cls");
                    cout<<"\n\n\t\t Already user account....";
                    cout<<"\n\n User Id"<< id<<"   Pincode:-"<<pin<<"    password"<<pass;
                    found++;
                }
                file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            }
            file.close();
            if(found==0)
            cout<<"\n\n User id cannt found"; 
        }
    }
    void bank::deposit()
    {
        fstream file,file1;
        string t_id;
        int found=0;
        float dep;
        system("cls");
        cout<<"\n\n\t\t\tDeposit Amount Option";
        file.open("bank.txt",ios::in);
        if(!file)
        {
            cout<<"\n\n File Opening Error...";
        }
        else
        {
            cout<<"\n\nEnter User Id:-";
            cin>>t_id;
            file1.open("bank1.txt",ios::app|ios::out);
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            while(!file.eof())
            {
                if(t_id == id)
                {
                    system("cls");
                    cout<<"\n\nEnter Amount for deposit:-";
                    cin>>dep;
                    balance += dep;
                    file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
                    found++;
                    cout<<"\n\n\t\t\t Your Amount "<<dep<<"Successfully depositd......";
                }
                else
                {
                    file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
                }
                file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            }
            file.close();
            file1.close();
            remove("bank.txt");
            rename("bank1.txt","bank.txt");
            if(found==0)
            cout<<"\n\n User id cannt found";
        }   
    }
    void bank::withdraw()
    {
        fstream file,file1;
        string t_id;
        int found=0;
        float with;
        system("cls");
        cout<<"\n\n\t\t\t Withdraw Amount Option";
        file.open("bank.txt",ios::in);
        if(!file)
        {
            cout<<"\n\n File Opening Error...";
        }
        else
        {
            cout<<"\n\nEnter User Id:-";
            cin>>t_id;
            file1.open("bank1.txt",ios::app|ios::out);
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            while(!file.eof())
            {
                if(t_id == id)
                {
                    system("cls");
                    cout<<"\n\nEnter Amount for Withdraw:-";
                    cin>>with;
                    if(with<=balance)
                    {
                        balance -= with;
                        file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
                        cout<<"\n\n\t\t\t Your Amount "<<with<<"Successfully withdrawed......";
                    }
                    else{
                        file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
                        cout<<"Your current balance"<<balance<<"is less";
                    }
                    found++;
                }
                else
                {
                    file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
                }
                file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            }
            file.close();
            file1.close();
            remove("bank.txt");
            rename("bank1.txt","bank.txt");
            if(found==0)
            cout<<"\n\n User id cannt found";
        }   
    }
    void bank::transfer()
    {
        system("cls");
        fstream file,file1;
        string s_id,r_id;
        float amount;
        int found=0;
        cout<<"\n\n\t\t\t PAYMENT TRANSFER  OPTION";
        file.open("bank.txt",ios::in);
        if(!file)
        {
            cout<<"\n\n File Opening Error...";
        }
        else
        {
            cout<<"\n\n Enter Sender User Id for transaction:- ";
            cin>>s_id;
            cout<<"\n\n Enter Receiver User Id for transaction:- ";
            cin>>r_id;
            cout<<"\n\n Enter the transaction amount:-";
            cin>>amount;
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            while(!file.eof())
            {
                if(s_id==id && amount<= balance)
                found++;
                else if(r_id==id)
                found++;
                file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            }
            file.close();
            if(found==2)
            {
                file.open("bank.txt",ios::in);
                file1.open("bank1.txt",ios::app|ios::out);
                file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
                while(!file.eof())
                {
                    if(s_id==id)
                    {
                        balance -= amount;
                        file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
                    }
                    else if (r_id==id)
                    {
                        balance+=amount;
                        file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
                    }
                    else{
                        file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
                    }
                    
                    file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
                }
                file.close();
                file1.close();
                remove("bank.txt");
                rename("bank1.txt","bank.txt");
                cout<<"Transaction sucessfully";
            }
            else
            {
                cout<<"\n\n\t\t\t Both Transaction  User Id's Invalid & balance is invalid";
            }
        }
    }
    void bank::payment()
    {
        system("cls");
        cout<<"\n\n\t\t\t Bill Payment Option";
        fstream file,file1;
        string t_id,b_name;
        float amount;
        int found=0;
        SYSTEMTIME x;// IT IS USED TO DISPLAY THE CURRENT TIME
        file.open("bank.txt",ios::in);
        if(!file)
        {
            cout<<"\n\n File Opening Error / File not exists";
        }
        else
        {
            cout<<"\n\n Enter the user id:-";
            cin>>t_id;
            cout<<"Enter the Bill Name:-";
            cin>>b_name;
            cout<<"Enter the Bill amount";
            cin>>amount;
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            file1.open("bank1.txt",ios::app|ios::out);
            while(!file.eof())
            {
                if(t_id==id && amount <= balance)
                {
                    balance-=amount;
                    file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
                    found++;
                }
                else
                {
                    file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
                }
                file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            }    
                file.close();
                file1.close();
                remove("bank.txt");
                rename("bank1.txt","bank.txt");
                if(found==1)
                {
                    GetSystemTime(&x);
                    file.open("bill.txt",ios::app|ios::out);
                    file<<t_id<<" "<<b_name<<" "<<amount<<" "<<x.wDay<<"/"<<x.wMonth<<"/"<<x.wYear<<"\n";
                    file.close();
                    cout<< b_name<<"\n\n Bill Payment Successfull........";
                }
                else
                {
                    cout<<"\n\n User Id not found or amount is invalid";
                } 
        }
    }
    void bank::search()
    {
        system("cls");
        cout<<"\n\n\t\t\t SEARCH USER RECORD";
        fstream file;
        string t_id;
        int found=0;
        file.open("bank.txt",ios::in);
        if(!file)
        {
            cout<<"File Opening Error";
        }
        else
        {
            cout<<"\nEnter the User Id:-";
            cin>>t_id;
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            while(!file.eof())
            {
                if(t_id==id)
                {
                    system("cls");
                    cout<<"\n\n\t\t\t SEARCH USER RECORD";
                    cout<<"\n\n\n User Id:- "<<id<<"\t\t Name:-  "<<name<<"\t\t Father's Name:-  "<<fname<<"\t\t Address:-  "<<address<<"  "<<"\n\n";
                    cout<<"\n Pin:- "<<pin<<"\t\t Password:-  "<<pass<<"\t\t Phone Num:-  "<<phone<<"\t\t Balance:-  "<<balance<<"  "<<"\n\n";
                    found++;
                }
                file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            }
            file.close();
            if(found==0)
            {
                cout<<"User Id Not Found ";
            }
        }
    }
    void bank::edit()
    {
        system("cls");
        cout<<"\n\n\t\t\t EDIT USER RECORD";
        fstream file,file1;
        string t_id;
        int found=0;
        file.open("bank.txt",ios::in);
        if(!file)
        {
            cout<<"Opening File error....";
        }
        else
        {
            cout<<"\nEnter the User Id:-";
            cin>>t_id;
            string n,pa,a,f,ph;
            int pi;
            file1.open("bank1.txt",ios::app|ios::out);
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            while(!file.eof())
            {
                if(t_id==id)
                {
                    cout<<"\n\n\t\tName:-";
                    cin>>n;
                    cout<<"\n\n Enter Fathers name:-";
                    cin>>f;
                    cout<<"\n\n\t\t Address:-";
                    cin>>a;
                    cout<<"\n\n Enter Pin code(5 digit):-";
                    cin>>pi;
                    cout<<"\n\n\t\t Password:-";
                    cin>>pa;
                    cout<<"\n\n Enter Phone no:-";
                    cin>>ph;
                    file1<<" "<<id<<" "<<n<<" "<<f<<" "<<a<<" "<<pi<<" "<<pa<<" "<<ph<<" "<<balance<<"\n";
                    cout<<"All records are successfully Updated";
                    found++;
                }
                else
                {
                    file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
                }
                file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            }
            file.close();
            file1.close();
            remove("bank.txt");
            rename("bank1.txt","bank.txt");
            if(found==0)
            {
                cout<<"User Id Not Found ";
            }

        }
    }
    void bank::del()
    {
        system("cls");
        cout<<"\n\n\t\t\t DELETE USER RECORD";
        fstream file,file1;
        string t_id;
        int found=0;
        file.open("bank.txt",ios::in);
        if(!file)
        {
            cout<<"Opening File error....";
        }
        else
        {
            cout<<"\nEnter the User Id:-";
            cin>>t_id;
            file1.open("bank1.txt",ios::app|ios::out);
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            while(!file.eof())
            {
                if(t_id==id)
                {
                    cout<<"All records are successfully Deleted";
                    found++;
                }
                else
                {
                    file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
                }
                file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            }
            file.close();
            file1.close();
            remove("bank.txt");
            rename("bank1.txt","bank.txt");
            if(found==0)
            {
                cout<<"User Id Not Found ";
            }
        }
    }
    void bank::show_records()
    {
        system("cls");
        cout<<"\n\n\t\t\t SHOW ALL USER RECORDS";
        fstream file;
        int found=0;
        file.open("bank.txt",ios::in);
        if(!file)
        {
            cout<<"File Opening Error....";
        }
        else
        { 
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            while(!file.eof())
            {
                cout<<"\n\n\nUSER ID:-"<<id;
                cout<<"\nNAME:-"<<name;
                cout<<"\nF'NAME:-"<<fname;
                cout<<"\nADDRESS:-"<<address;
                cout<<"\nPIN:-"<<pin;
                cout<<"\nPASS:-"<<pass;
                cout<<"\nPHONE NO:-"<<phone;
                cout<<"\nBALANCE:-"<<balance;
                cout<<"\n\n====================================================================";
                
                file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            }
            file.close();
            if(found==0)
            {
                cout<<"THE FILE IS EMPTY";
            }
        }
    }
    void bank::show_payment()
    {
        system("cls");
        cout<<"\n\n\t\t\t SHOW ALL BILL RECORDS";
        fstream file;
        float amount;
        int found=0;
        string c_date;
        file.open("bill.txt",ios::in);
        if(!file)
        {
            cout<<"File Opening Error....";
        }
        else
        { 
            file>>id>>name>>amount>>c_date;
            while(!file.eof())
            {
                cout<<"\n\n\nUSER ID:-"<<id;
                cout<<"\n BILL NAME:-"<<name;
                cout<<"\nBILL AMOUNT:-"<<amount;
                cout<<"\nDATE:-"<<c_date;
                cout<<"\n\n====================================================================";
                
                file>>id>>name>>amount>>c_date;
                found++;
            }
            file.close();
            if(found==0)
            {
                cout<<"THE FILE IS EMPTY";
            }
        }
    }
    void bank::user_balance()
    {
        system("cls");
        int found=0;
        
        string t_pin,t_pass,t_id;
        char ch;
        cout<<"\n\n\t\t\tUSER LOGIN AND CHECK BALANCE:-";
        fstream file;
        file.open("bank.txt",ios::in);
        if(!file)
        {
            cout<<"FILE OPENING ERROR";
        }
        else
        {
            cout<<"\n\n ENTER USER ID:-";
            cin>>t_id;
            cout<<"\n\n\t\tENTER PIN:-";
            for(int i=1;i<=5;i++)
            {
                ch=getch();
                t_pin += ch;
                cout<<"*";
            }
            cout<<"\n\nENTER PASSWORD:-";
            for(int i=1;i<=5;i++)
            {
                ch = getch();
                t_pass += ch;
                cout<<"*";
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            while(!file.eof())
            {
                if(t_id == id && t_pin == pin && t_pass == pass)
                {
                    cout<<"\n\n\t\t\t Your Current Balance is:-> "<<balance;
                    found++;
                }
                file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            }
            file.close();
            if(found==0)
            cout<<"\n\n\t\t\t User Id ,Pin & Password is invalid.......";  
        }
    }
    void bank::withdraw_atm()
    {
        fstream file,file1;
        string t_id,t_pin,t_pass;
        int found=0;
        char ch;
        float with;
        system("cls");
        cout<<"\n\n\t\t\t Withdraw Amount Option";
        file.open("bank.txt",ios::in);
        if(!file)
        {
            cout<<"\n\n File Opening Error...";
        }
        else
        {
            cout<<"\n\nEnter User Id:-";
            cin>>t_id;
            cout<<"\n\nEnter User Pin:-";
            for(int i=1;i<=5;i++)
            {
                ch=getch();
                t_pin += ch;
                cout<<"*";
            }
            cout<<"\n\nENTER PASSWORD:-";
            for(int i=1;i<=5;i++)
            {
                ch = getch();
                t_pass += ch;
                cout<<"*";
            }
            file1.open("bank1.txt",ios::app|ios::out);
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            while(!file.eof())
            {
                if(t_id == id && t_pin==pin && t_pass==pass)
                {
                    system("cls");
                    cout<<"\n\nEnter Amount for Withdraw:-";
                    cin>>with;
                    if(with<=balance)
                    {
                        balance -= with;
                        file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
                        cout<<"\n\n\t\t\t Your Amount "<<with<<"Successfully withdrawed......";
                        cout<<"\n\nYour current balance is now:-"<<balance;
                    }
                    else{
                        file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
                        cout<<"\n\n\t\t\t   Your current balance"<<balance<<"is less";
                    }
                    found++;
                }
                else
                {
                    file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
                }
                file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            }
            file.close();
            file1.close();
            remove("bank.txt");
            rename("bank1.txt","bank.txt");
            if(found==0)
            cout<<"\n\n User id cannt found";
        }   
    }
    void bank::check_detail()
    {
        fstream file;
        string t_id,t_pin,t_pass;
        int found=0;
        char ch;
        system("cls");
        cout<<"\n\n\t\t\t Check Details Option";
        file.open("bank.txt",ios::in);
        if(!file)
        {
            cout<<"\n\n File Opening Error...";
        }
        else
        {
            cout<<"\n\nEnter User Id:-";
            cin>>t_id;
            cout<<"\n\nEnter User Pin:-";
            for(int i=1;i<=5;i++)
            {
                ch=getch();
                t_pin += ch;
                cout<<"*";
            }
            cout<<"\n\nENTER PASSWORD:-";
            for(int i=1;i<=5;i++)
            {
                ch = getch();
                t_pass += ch;
                cout<<"*";
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            while(!file.eof())
            {
                if(t_id == id && t_pin==pin && t_pass==pass)
                {
                    cout<<"\n\n\nUSER ID:-"<<id;
                    cout<<"\nNAME:-"<<name;
                    cout<<"\nF'NAME:-"<<fname;
                    cout<<"\nADDRESS:-"<<address;
                    cout<<"\nPIN:-"<<pin;
                    cout<<"\nPASS:-"<<pass;
                    cout<<"\nPHONE NO:-"<<phone;
                    cout<<"\nBALANCE:-"<<balance;
                    found++;
                }
                file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            }
            file.close();
            if(found==0)
            cout<<"\n\n User id cannt found";
        }
    }
main()
{
    bank obj;
    introduction();
    obj.menu();
}


//                                                           THANK YOU ....