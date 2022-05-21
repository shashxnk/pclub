#include<stdlib.h>
#include<stdio.h>
#include <iostream>
#include<iomanip>
#include<conio.h>
#include<math.h>
#include<string.h>
using namespace std;


class loan
{
  public:
  int cibil;
  string name;
  long accno;


  public:
  void borrow(string name, int cibil, long accno)
  {
    if(cibil>650)
    {
    cout<<"You are eligible for loan at a rate of interest of 8.5 percent p.a."<<endl;

    float income;
    cout<<"Enter your income"<<endl;
    cin>>income;
    if(income<500000)
    {
      cout<<"You are Eligible for loan upto 2000000 according to bank's policies"<<endl<<"Press 1 if you wanna continue"<<endl<<"Press 0 if you want to exit"<<endl;
      int opt;
      cin>>opt;
      if(opt==1)
      {
        cout<<"Enter the loan amount"<<endl;
        float loan;
        cin>>loan;
        cout<<"Enter the duration in months"<<endl;
        int months;
        cin>>months;
        float emi;
        float interest =loan*8.5*months/1200;
        emi =(interest +loan)/months;
        cout<<"The Loan amount is Sanctioned and will be credited to you account in 2 working days."<<endl;
        cout<<"The loan amount is :"<<loan<<endl;
        cout<<"The net interest is :"<<interest<<endl;
        cout<<"The EMI you are supposed to pay every month is :"<<emi<<endl;



      }
      else exit;




    }
    if(income>=500000 && income<1000000 )
    {
      cout<<"You are Eligible for loan upto 4000000 according to bank's policies"<<endl<<"Press 1 if you wanna continue"<<endl<<"Press 0 if you want to exit"<<endl;
      int opt;
      cin>>opt;
      if(opt==1)
      {
        cout<<"Enter the loan amount"<<endl;
        float loan;
        cin>>loan;
        cout<<"Enter the duration in months"<<endl;
        int months;
        cin>>months;
        float emi;
        float interest =loan*8.5*months/1200;
        emi =(interest +loan)/months;
        cout<<"The Loan amount is Sanctioned and will be credited to you account in 2 working days."<<endl;
        cout<<"The loan amount is :"<<loan<<endl;
        cout<<"The net interest is :"<<interest<<endl;
        cout<<"The EMI you are supposed to pay every month is :"<<emi<<endl;
        


      }
      else exit;




    }
    if(income>=1000000 && income<10000000 )
    {
      cout<<"You are Eligible for loan upto 40000000 according to bank's policies"<<endl<<"Press 1 if you wanna continue"<<endl<<"Press 0 if you want to exit"<<endl;
      int opt;
      cin>>opt;
      if(opt==1)
      {
        cout<<"Enter the loan amount"<<endl;
        float loan;
        cin>>loan;
        cout<<"Enter the duration in months"<<endl;
        int months;
        cin>>months;
        float emi;
        float interest =loan*8.5*months/1200;
        emi =(interest +loan)/months;
        cout<<"The Loan amount is Sanctioned and will be credited to you account in 2 working days."<<endl;
        cout<<"The loan amount is :"<<loan<<endl;
        cout<<"The net interest is :"<<interest<<endl;
        cout<<"The EMI you are supposed to pay every month is :"<<emi<<endl;
        


      }
      else exit;




    }
    else
    {
      cout<<"You are Eligible for loan upto 400000000 according to bank's policies"<<endl<<"Press 1 if you wanna continue"<<endl<<"Press 0 if you want to exit"<<endl;
      int opt;
      cin>>opt;
      if(opt==1)
      {
        cout<<"Enter the loan amount"<<endl;
        float loan;
        cin>>loan;
        cout<<"Enter the duration in months"<<endl;
        int months;
        cin>>months;
        float emi;
        float interest =loan*8.5*months/1200;
        emi =(interest +loan)/months;
        cout<<"The Loan amount is Sanctioned and will be credited to you account in 2 working days."<<endl;
        cout<<"The loan amount is :"<<loan<<endl;
        cout<<"The net interest is :"<<interest<<endl;
        cout<<"The EMI you are supposed to pay every month is :"<<emi<<endl;
        


      }
      else exit;

  

    
    }
    }
    else{
      cout<<"You are not eligible for loan, please work on your cibil score"<<endl;
    }

  }

  void lender(string name,float amount, long accno)
  {
    cout<<"You can Lend to our services at a rate of 3 percent p.a"<<endl;
    cout<<"Enter the duration in Years"<<endl;
    float year;
    cin>>year;

    float interest;
    interest= amount*3*year/100;
    cout<<"You would be reciving "<<interest<<"as interest from bank after "<< year<<"Years"<<endl;
    cout<<"The net amount that you would be receiving is "<<interest+amount<<endl;


  
  }



};


int main ()
{
    system("cls");
    clrscr();
     
  loan ob;
cout<<"WELCOME TO SHASH'S LOAN SERVICES"<<endl;
cout<<"Enter 1 IF YOU ARE A BORROWER"<<endl;
cout<<"Enter 2 IF YOU ARE A LENDER"<<endl;
cout<<"Enter 3 IF YOU WANNA EXIT"<<endl;

int option;
string name1;
long acc_no;
cin>>option;

switch(option)
{
    case '1':
    cout<<"Enter Your Name"<<endl;
    
    cin>>name1;
    cout<<"Enter Your Account No"<<endl;
    
    cin>>acc_no;
    cout<<"Enter Your Cibil Score"<<endl;
    int cibils;
    cin>>cibils;
    ob.borrow(name1, cibils ,acc_no);



    
    break;

    case '2':
    cout<<"Enter Your Name"<<endl;
    
    cin>>name1;
    cout<<"Enter Your Account No"<<endl;
    
    cin>>acc_no;
    cout<<"Enter the Amount"<<endl;
    float amt;
    cin>>cibils;
    ob.lender(name1, amt ,acc_no);


}
getch();
return 0;




}