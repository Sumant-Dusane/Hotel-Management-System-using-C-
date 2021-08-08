#include<iostream>
#include<string.h>
using namespace std;

class hotel
{
    public:
    int rooms[5][4]=
    {
        {00,01,02,03},
        {10,11,12,13},
        {20,21,22,23},
        {30,31,32,33},
        {40,41,42,43}
    };
    char type;
    char rent[6];
    char status;
    int rent1;
    char name[100];
    char no[10];
    char add[300];
    char doc[20];
    char gender;
    int no_per;
    int age;
    int stay;
    int i,j,o=1;
    char ac_no[14];
    char ifsc[10];
    int cvv;
    char bk_name[20];
    char cc;
    char ans;


   public:
   void search()
{
    cout<<"Enter the floor and room number:";
    cin>>rooms[i][j];         

    if(o==1)
    {
        cout<<"Available!";
        cout<<"\nWanna Check-in??(Y/N):";
        cin>>ans;

        if(ans=='Y')
        {
            void check_in();
        }
    }
    else
    {
        cout<<"Unavailable!!";
    }
    
}


   void check_in()
{
    

    if(o==1)
    {
        cout<<"\nEnter the Customer Name:";
        cin>>name;
        cout<<"\nPhone Number:";
        cin>>no;
        cout<<"\nAddress:";
        cin>>add;
        cout<<"\nAny Verification document:";
        cin>>doc;
        cout<<"\nGender(M/F):";
        cin>>gender;
        cout<<"\nAge:";
        cin>>age;
        cout<<"\nHow many people are residing?:";
        cin>>no_per;

        cout<<"\nAc/Non-Ac(a/n):";
        cin>>type;

        cout<<"\nRent per day:";
        if(type=='A')
        {
            cout<<"\tRs.3500";
            rent1=3500;
        }
        else
        {
            
            cout<<"\tRs.1500";
            rent1=1500;
        }

        cout<<"\nEnter floor & room no:";
        cin>>rooms[i][j];
        

        o=0;
        cout<<"\nCheck-IN sucessfully done!!";
        cout<<"\n\n*******************";
        cout<<"\nSummary:\n";
        cout<<"Customer Name:"<<name;
        cout<<"\nContact Number:"<<no;
        cout<<"\nAddress:"<<add;
        cout<<"\nGender/Age:("<<gender<<"/"<<age<<")";
        cout<<"\nNo of people residing:"<<no_per;

        cout<<"\n\nHotel Room No:"<<rooms[i][j];
        cout<<"\nRent of suite per day:"<<rent1;
        cout<<"\nType Ac/Non-Ac:"<<type;

        cout<<"\n*******************";
    }
    else
    {
        cout<<"\nSorry rooms are booked!";
    }
    
}

void check_out()
{
    cout<<"Enter Payment status(y/n):";
    cin>>status;
    cout<<"\nEnter floor and room number:";
    cin>>rooms[i][j];

    if(status=='y')
    {
        o=1;
        cout<<"Check-out sucessful!!Come back soon";
    }
    else
    {
        cout<<"You are kindly requested to PAY the rent";
    }
    
}

void payment()
{
    cout<<"Ac/Non-Ac??:";
    cin>>type;
    cout<<"Rent per day:";
    if(type=='A')
    {
        cout<<"Rs.3500";
        rent1=3500;
    }
    else
    {
        cout<<"Rs.1500:";
        rent1=1500;
    }
    cout<<"\nHow many Stays(day):";
    cin>>stay;
    rent1=rent1*stay;
    cout<<"\nAmount:"<<rent1;
    cout<<"\nPayment mode Cash or Card(M/C):";
    cin>>cc;
    if(cc=='C')
    {
    cout<<"\nEnter Bank A/c Number:";
    cin>>ac_no;
    cout<<"\nEnter IFSC Code:";
    cin>>ifsc;
    cout<<"\nEnter CVV number:";
    cin>>cvv;
    cout<<"\nEnter Bank Holder Name:";
    cin>>bk_name;

    cout<<"\n\n***************************************";
    cout<<"\nOnline Receipt:\n";
    cout<<"\t\tAmount Transferred:"<<rent1;
    cout<<"\n\nName OF Bank Holder:"<<bk_name;
    cout<<"\nAccount Number:"<<ac_no;
    cout<<"\nIFSC Code:"<<ifsc;
    cout<<"\nCVV number:"<<cvv;
    cout<<"\n\n***************************************";
    }
    else
    {
        cout<<"Pay the Cash!!";
    }
    
    status='y';

    cout<<"\nPayment sucessful";
}


}c;


int main()
{
    int i,j,o,ch,k;
    
    for(k=0;k<5;k++)
    {
    cout<<"\n\n";
    cout<<"\t\t\t\t/////////////////////////////////////\n";
    cout<<"\t\t\t\t///Welcome to HOTEL SWAMI SAMARTHA///\n";
    cout<<"\t\t\t\t/////////////////////////////////////";
    cout<<"\n\n1.Check Avaliablity:";
    cout<<"\n2.Check In:";
    cout<<"\n3.Check Out:";
    cout<<"\n4.Payment:";
    cout<<"\n5.Exit";
    cout<<"\nEnter:";
    cin>>ch;
  
   switch(ch)
    {
        case 1:
        c.search();
        break;

        case 2:
        c.check_in();
        break;
        
        case 3:
        c.check_out();
        break;

        case 4:
        c.payment();
        break;

        case 5:
        exit(0);
        break;

        default:
        cout<<"Invalid Input!!";
        break;
    }
    }

       return 0;

}


/* Output:



                                /////////////////////////////////////
                                ///Welcome to HOTEL SWAMI SAMARTHA///
                                /////////////////////////////////////

1.Check Avaliablity:
2.Check In:
3.Check Out:
4.Payment:
5.Exit
Enter:1
Enter the floor and room number:502
Available!
Wanna Check-in??(Y/N)t


                                /////////////////////////////////////
                                ///Welcome to HOTEL SWAMI SAMARTHA///
                                /////////////////////////////////////

1.Check Avaliablity:
2.Check In:
3.Check Out:
4.Payment:
5.Exit
Enter:2

Enter the Customer Name:Sumant

Phone Number:8805267254

Address:Mumbai

Any Verification document:no

Gender(M/F):M

Age:20

How many people are residing?:3

Ac/Non-Ac(a/n):A

Rent per day:   Rs.3500
Enter floor & room no:502

Check-IN sucessfully done!!

*******************
Summary:
Customer Name:Sumant
Contact Number:8805267254Mumbai
Address:Mumbai
Gender/Age:(M/20)
No of people residing:3

Hotel Room No:502
Rent of suite per day:3500
Type Ac/Non-Ac:A
*******************

                                /////////////////////////////////////
                                ///Welcome to HOTEL SWAMI SAMARTHA///
                                /////////////////////////////////////

1.Check Avaliablity:
2.Check In:
3.Check Out:
4.Payment:
5.Exit
Enter:1
Enter the floor and room number:502
Unavailable!!

                                /////////////////////////////////////
                                ///Welcome to HOTEL SWAMI SAMARTHA///
                                /////////////////////////////////////

1.Check Avaliablity:
2.Check In:
3.Check Out:
4.Payment:
5.Exit
Enter:

*/

