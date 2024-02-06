#include<iostream>
#include<fstream>
#include<istream>
#include<conio.h>
#include<string.h>
#include <string>
#include<stdlib.h>
#include<windows.h>
#include<cwchar>
#include <ctime>
//#define max_name_length 100
//#define max_author_name_length 200
using namespace std;
int error, exist=0, pl=0;
void guest();
void login();
void reg();
void forgot();
void history();
void incorrectlogin();
string u,p;
string name1[1000];
string publishername1[1000];
int choice1,counter=0;
int id1[1000];
int date1[1000];
time_t now[1000];
int i,start=0,purchase,registration=0;
string user[100],pass[100];
string rt[1000],rtf[1000];
string lt[1000],ltf[1000],ltg[1000];
string userh[1000],userhf[1000];
    //time_t now = time (0);
//char* dt[1000];
int q=0;
int log=0;
int rightt=0,wrong =0,guestt=0;

int main()       /*don't forget to change it to void*/
{
    int choice;
cout<<"\n\t\tWELCOME TO HABESHA E-BOOK STORE!!!"<<endl;
cout<<"\n*************************** HOME PAGE ***************************"<<endl;
    cin.clear();
    cout<<"\n\n\tPlease select an option from the menu below\n\n";
    cout<<"\t\t1. Create an account (New member) \n\n\t\t2. Login to an existing account (Already a member) \n\n\t\t3. Guest login(if you are a guest) \n\n\t\t4. Forgot password/username\n\n\t\t5. Login history\n\n";

    cout<< "\n\tPlease enter your selection : ";
    cin>>choice;
    system("cls");
if (choice==1)
{
    reg();
}
else if(choice==2)
{
   login();
}
else if (choice==3)
{
for(int u=guestt;u<=guestt;u++)
            {
            now [u]= {time (0)};
            ltg[u]=ctime(&now[u]);
            }
            log++;
guestt++;
guest();
}
else if (choice==4)
{
forgot();
}
else if (choice==5)
{
history();
}
else
{
    cout<<endl;
    cout<<"You have entered an invalid number. Please try again"<<endl;
    cout<<endl;
    main();
}
}

void history()
{
    //now [q]= {time (0)};
    //rt[q]=ctime(&now[q]);
    if (log>0)
    {
    cout<<"*************LOG IN HISTORY*************\n\n";
    //if(rightt>0)
    //{
    for(int i=0;i<rightt;i++)
    {
    cout<<userh[i]<<" logged in at "<<lt[i]<<endl;
    }
    //}
    //if(wrong>0)
    //{
    for(int j=0;j<wrong;j++)
    {
    cout<<userhf[j]<<" failed to log in at "<<ltf[j]<<endl;//main
    }
    //}
    for(int k=0;k<guestt;k++)
    {
    cout<<"Guest logged in at "<<ltg[k]<<endl;//main
    }
   int l;
     cout<<"\nEnter 0 to go back to main menu: ";
   here101:
   cin>>l;
    if(l==0)
    {
        system ("cls");
        main();
    }
    else
    {
    cout<<"You have entered an invalid number";
   goto here101;
    }
    }
    else
    {
        cout<<"No history of login"<<endl;
         main();
    }
}

void reg()
{
    cout<<"************ REGISTER PAGE ************\n\n";
     for(int i=q;i<=q;i++)
     {
    now [q]= {time (0)};
    rt[q]=ctime(&now[q]);
    cout<<"Enter your username: ";
    cin>>user[i];
    cout<<"Enter your password: ";
    cin>>pass[i];

     //ofstream reg("data.txt", ios::app);
    //reg<<user[i]<<' '<<pass[i]<<endl;
    system("cls");
    cout<<"Registration is successful"<<endl;
    cout<<endl;
registration++;
q++;
    main();
     }
}



   void login()
{
  if(registration>0)
  {
  here13:
    string u[100],p[100],userr,passs;
int k=(registration-1);
 cout<<"There are a total of "<<registration<<" registered users.\n\n";



                //system("cls");
             cout<<"Enter your username: ";
            cin>>userr;
            cout<<"Enter your password: ";
            cin>>passs;
                system("cls");
             int x=(registration-1),w=0, counter2=w+1;

            for(w=0;w<=x;w++)
                     {
         //int k[100];
             if(userr==user[w]&&passs==pass[w])
             {
            for(int g=rightt;g<=rightt;g++)
            {
            userh[g]=user[w];
            now [g]= {time (0)};
            lt[g]=ctime(&now[g]);
            }
            exist++;
            rightt++;
            log++;
            guest();
            counter2++;

             }

                     }
           //     here13:


  for(int z=0;z<=x;z++)
                     {
             if(userr!=user[z]||passs!=pass[z])
             {
            while (z==x)
             {
                 system("cls");
                 cout<<"INCORRECT USERNAME/PASSWORD. Please try again!!!\n\n";
             for(int v=wrong;v<=wrong;v++)
            {
            userhf[v]=userr;
            now [v]= {time (0)};
            ltf[v]=ctime(&now[v]);
            }
            log++;
            wrong++;
            login();
            }

             }
                     }

 //input.close();


}
else
{
    cout<<"There are 0 registered account. Please register first to login!\n";
    main();
}
}
void forgot()
{
    //system("cls");
    here5:
    cout<<"************ FORGOT PAGE ************\n\n";
    int choice,ex=0;
    cout<<"1. Search by username"<<endl;
    cout<<"2. Search by password"<<endl;
    cout<<"3. Return to mainmenu";
    string fuser,fpass,fu,fp;
    cout<<"\nEnter your choice: ";
    cin>>choice;
    if(choice==1)
    {

                system("cls");
             cout<<"Enter the username you remember: ";
            cin>>fuser;

                system("cls");
             int x=(registration-1),w=0, counter2=w+1;

            for(w=0;w<=x;w++)
                     {
         //int k[100];
             if(fuser==user[w])
             {
         //for(int i=0;i<=99;i++)
         //{
         //k[100]=z;
         //}

            cout<<"Congratulations account found!!!";
            cout<<"\n\nUsername: "<<user[w];
            cout<<"\nPassword: "<<pass[w];
            cout<<"\nRegistration time and date: "<<rt[w];
            main();
            counter2++;
            while (w==x)
             {
                 int d;
                 cout<<"\n\t\tPress 0 to return to your page";
                 cout<<"\n\n\t\tEnter your selection:\t";
                 cin>>d;
                  if(d==0)
                 {
                    system("cls");
                    main();
                 }
                 else
                 {
                     system("cls");
                     main();
                 }
                 }
             }
             for(int c=x;c>=0;c--)
             {
             while(w==x&&fuser==user[c])
             //else if (z==h&&uname==name1[f]||z==h&&uname==name1[k])
             {
                 int d;
                 cout<<"\nPress 0 to return to your page";
                 cout<<"Enter your selection:\t";
                 cin>>d;
                  if(d==0)
                 {
                    system("cls");
                    main();
                 }
                 else
                 {
                    system("cls");
                     main();
                 }
             }
             }
                     }
           //     here13:


  for(int z=0;z<=x;z++)
                     {
             if(fuser!=user[z])
             {
            while (z==x)
             {
                 system("cls");
                 cout<<"Account NOT found!!!Please try again\n";
            forgot();
            }
             }
                     }



    }
    else if(choice==2)
    {
        system("cls");
             cout<<"Enter the password you remember: ";
            cin>>fpass;

                system("cls");
             int x=(registration-1),w=0, counter2=w+1;

            for(w=0;w<=x;w++)
                     {
         //int k[100];
             if(fpass==pass[w])
             {
         //for(int i=0;i<=99;i++)
         //{
         //k[100]=z;
         //}

            cout<<"Congratulations account found!!!";
            cout<<"\n\nUsername: "<<user[w];
            cout<<"\nPassword: "<<pass[w];
            cout<<"\nRegistration time and date: "<<rt[w];
            main();
            counter2++;
            while (w==x)
             {
                 int d;
                 cout<<"\n\t\tPress 0 to return to your page";
                 cout<<"\n\n\t\tEnter your selection:\t";
                 cin>>d;
                  if(d==0)
                 {
                    system("cls");
                    main();
                 }
                 else
                 {
                     system("cls");
                     main();
                 }
                 }
             }
             for(int c=x;c>=0;c--)
             {
             while(w==x&&fpass==pass[c])
             //else if (z==h&&uname==name1[f]||z==h&&uname==name1[k])
             {
                 int d;
                 cout<<"\nPress 0 to return to your page";
                 cout<<"Enter your selection:\t";
                 cin>>d;
                  if(d==0)
                 {
                    system("cls");
                    main();
                 }
                 else
                 {
                    system("cls");
                     main();
                 }
             }
             }
                     }
           //     here13:


  for(int z=0;z<=x;z++)
                     {
             if(fpass!=pass[z])
             {
            while (z==x)
             {
                 system("cls");
                 cout<<"Account NOT found!!!Please try again\n";
            forgot();
            }
             }
                     }


    }
    else if(choice==3)
    {
         for(int i=0;i<registration;i++)
       {
           if(fuser==user[i])
           {
            system("cls");
            cout<<"Congratulations! Account found."<<endl;
            cout<<"Your password is: "<<pass[i]<<endl;
            main();
           }
      else
      {
          if (i<registration) continue;
          else
          {
          cout<<"Sorry Account NOT found";
            main();//forgot();
          }
      }
       } system("cls");
        main();
    }

        else { cout<<"Invalid number";
        }
}


void guest()
 {
     time_t now = time (0);
char* dt = ctime(&now);
    //system ("cls");
    system("cls");
     cout<<"\t\t\t\t\t\t\t"<<dt;
    cout<<"\n\t\tHello user,welcome to your page!!!"<<endl;
        here:
cout<<"\n\tCurrently, there are "<<counter<<" available books in stock."<<endl;
    //cin.clear();
    cout<<"\n\n\tWhat do you want to do?\n\n";
    cout<<"\t\t1. Purchase a book\n\n\t\t2. Add a book\n\n\t\t3. Search a book\n\n\t\t4. Edit a book\n\n\t\t5. Return to main menu\n\n";

    cout<< "\n\tPlease enter your selection : ";
    cin>>choice1;
        //cin.ignore();
        int purchase,editt;

        if(choice1==4)
{
    int b;
    if(counter>0)
            {
           system("cls");
            cout<<"Books available to edit:\n\n";
          int j,a=1;
         for(j=0;j<=counter-1;j++)
            {
            //ifstream detail("bookdata3.txt");
            //while(detail>>name1[j]>>id1[j]>>date1[j]>>publishername1[j])
            //{

                cout<<"*****************************"<<endl;
            cout<<"Book Title: "<<name1[j]<<endl;
            cout<<"Book ID number: "<<id1[j]<<endl;
            cout<<"Author name: "<<publishername1[j]<<endl;
            cout<<"Published date: "<<date1[j]<<endl;
            cout<<endl;
            cout<<"Press "<<a++<<" to edit this Book."<<endl;
            cout<<"*****************************"<<endl;
            cout<<endl;
            }
            cout<<"press 0 to return to main menu.\n\n";
            cout<<"Which book do you want to edit: ";
            cin>>editt;
         b=editt-1;
            if(editt==0)
            {
                system("cls");
                goto here;
            }
            else
            {
                int choice11;
                system("cls");
                cout<<"What do you want to edit about this book("<<name1[b]<<") ?";
                cout<<"\n\n1. Edit Book name";
                cout<<"\n2. Edit Author name";
                cout<<"\n3. Edit Publish date";
                cout<<"\n4. Edit ID number";
                cout<<"\n\nEnter your selection: ";
                cin>>choice11;
                if(choice11==1)
                {
                    system("cls");
                    string ename;

                    cout<<"The current name of this book is "<<name1[b];
                    cout<<"\n\nEnter the new name for this book? ";
                    cin.get();
            getline(cin, ename);
            system("cls");
            cout<<"Book name successfully edited from "<<name1[b]<<" to "<<ename<<endl;
                    name1[b]=ename;
            goto here;
                }
                if(choice11==2)
                {
                    system("cls");
                    string eauthor;

                    cout<<"The current Author of this book is "<<publishername1[b];
                    cout<<"\n\nEnter the new Author for this book? ";
                    cin.get();
            getline(cin, eauthor);
            system("cls");
            cout<<"Author name successfully edited from "<<publishername1[b]<<" to "<<eauthor<<endl;
                    publishername1[b]=eauthor;
            goto here;
                }
                if(choice11==3)
                {
                    system("cls");
                     int edate;

                    cout<<"The current publish date of this book is "<<date1[b];
                    cout<<"\n\nEnter the new publish date for this book? ";
                    cin>>edate;
            system("cls");
            cout<<"Publish date successfully edited from "<<date1[b]<<" to "<<edate<<endl;
                    date1[b]=edate;
            goto here;
                }
                if(choice11==4)
                {
                    system("cls");
                    int eid;

                    cout<<"The current ID number of this book is "<<id1[b];
                    cout<<"\n\nEnter the new ID for this book? ";
                    cin>>eid;
            system("cls");
            cout<<"ID number successfully edited from "<<id1[b]<<" to "<<eid<<endl;
                    id1[b]=eid;
            goto here;
                }

            //b++;

            cout<<endl;
            }
            }
            else if(counter<=0)
            {
                system("cls");
                cout<<"No available book to edit.";
            goto here;
            }

            cout<<"press 0 to return to main menu.\n\n";
            cout<<"Which book do you want to edit: ";
            cin>>editt;
 }
        else if(choice1==2)
        {
           system("cls");
            for(i=start;i<=start;i++)
            {
            cout<<"Enter the details of the book you want to add:\n\n";
            cout<<"What is the Book's Name: ";
            cin.get();
            getline(cin, name1[i]);
            cout<<"Enter the Book's ID number: ";
            cin>>id1[i];
            cout<<"When was the Book published: ";
            cin>>date1[i];
            cout<<"Who is the Author of the book: ";
            cin.get();
            getline(cin, publishername1[i]);
            //cin.ignore();
        //   ofstream login("bookdata3.txt", ios::app);
  //login<<name1[i]<<' '<<id1[i]<<' '<<date1[i]<<' '<<publishername1[i]<<endl;
    system("cls");


    cout<<"Book is successfully added!!!"<<endl;
    cout<<endl;
    start++;
    counter++;
    goto here;
            }
        }
    else if(choice1==1)
        {
            if(counter>0)
            {
           system("cls");
            cout<<"Books available for purchase:\n\n";
          int j,a=1;
         for(j=0;j<=counter-1;j++)
            {
            //ifstream detail("bookdata3.txt");
            //while(detail>>name1[j]>>id1[j]>>date1[j]>>publishername1[j])
            //{
                cout<<"*****************************"<<endl;
            cout<<"Book Title: "<<name1[j]<<endl;
            cout<<"Book ID number: "<<id1[j]<<endl;
            cout<<"Author name: "<<publishername1[j]<<endl;
            cout<<"Published date: "<<date1[j]<<endl;
            cout<<endl;
            cout<<"Press "<<a++<<" to purchase this Book."<<endl;
            cout<<"*****************************"<<endl;
            cout<<endl;
            }
            cout<<"press 0 to return to main menu.\n\n";
            cout<<"Which book do you want to purchase: ";
            cin>>purchase;
            if(purchase==0)
            {
                system("cls");
                goto here;
            }
            else
            {
                int b;
                b=purchase-1;
            counter--;
            //b++;

            cout<<endl;
            system("cls");
            cout<<name1[b]<<" successfully purchased. Thank You for using Habesha E-book store."<<endl;
            for(int i=b;i<=10;i++)
                     {
                     name1[i]=name1[i+1];
                     id1[i]=id1[i+1];
                     publishername1[i]=publishername1[i+1];
                     date1[i]=date1[i+1];
                     }
                     start--;
            goto here;
            }
            }
            else if(counter<=0)
            {
                system("cls");
                cout<<"No available book for purchase.";
            goto here;
            }
        }
             else if(choice1==3)
        {
            if(counter>0)
            {
            system("cls");
            here3:
            int select,uid,udate;
            string uname,uauthor;
            cout<<"How do you want to search your book?\n\n\n";
            cout<<"1. Using Name\n\n2. Using ID number\n\n3. Using Author's name\n\n4. Using published date\n\n5. Go back to main menu";
            cout<<"\n\nEnter your selection: ";
            cin>>select;
              if(select==1)
            {
                system("cls");
             cout<<"Enter the Name of the book: ";
              cin.get();
            getline(cin, uname);
                system("cls");
             int h=(counter-1),z=0, counter2=z+1;

            for(z=0;z<=h;z++)
                     {
         int k[100];
             if(uname==name1[z])
             {
         for(int i=0;i<=99;i++)
         {
         k[100]=z;
         }

            cout<<"\t\tSearch result "<<counter2<<" for "<<"["<<uname<<"]";
            cout<<"\n\n\t\tBook Title: "<<name1[z]<<endl;
            cout<<"\t\tBook ID number: "<<id1[z]<<endl;
            cout<<"\t\tAuthor name: "<<publishername1[z]<<endl;
            cout<<"\t\tPublished date: "<<date1[z];
            cout<<"\n\n\t\tPress "<<counter2<<" to purchase this book.\n";
            cout<<"\t\t*****************************"<<endl;
            cout<<endl;
            counter2++;
            while (z==h)
             {
                 int y;
                 cout<<"\n\t\tPress 0 to return to your page";
                 cout<<"\n\n\t\tEnter your selection:\t";
                 cin>>y;
                  if(y==0)
                 {
                    system("cls");
                    goto here;
                 }
                 else
                 {
                     system("cls");
                     cout<<name1[z]<<" sucessfully purchased!\n\n";
                    for(int i=z;i<=10;i++)
                     {
                     name1[i]=name1[i+1];
                     id1[i]=id1[i+1];
                     publishername1[i]=publishername1[i+1];
                     date1[i]=date1[i+1];
                     }
                     start--;

                     counter--;
                     goto here;
                 }
                 }
             }
             for(int d=h;d>=0;d--)
             {
             while(z==h&&uname==name1[d])
             //else if (z==h&&uname==name1[f]||z==h&&uname==name1[k])
             {
                 int y;
                 cout<<"\nPress 0 to return to your page";
                 cout<<"Enter your selection:\t";
                 cin>>y;
                  if(y==0)
                 {
                    system("cls");
                    goto here;
                 }
                 else
                 {
                     cout<<name1[z]<<" sucessfully purchased!\n\n";
                     for(int i=z;i<=10;i++)
                     {
                     name1[i]=name1[i+1];
                     id1[i]=id1[i+1];
                     publishername1[i]=publishername1[i+1];
                     date1[i]=date1[i+1];
                     }
                     start--;
                     system("cls");

                     counter--;
                     goto here;
                 }
             }
             }
                     }
           //     here13:


  for(int z=0;z<=h;z++)
                     {
             if(uname!=name1[z])
             {
            while (z==h)
             {
                 cout<<"Book not found!Please try again.\n";
                 goto here3;}
             }
                     }

            }
             else if(select==2)
            {
               system("cls");
             cout<<"Enter the ID of the book: ";
             cin>>uid;
                system("cls");
             int h=(counter-1),z=0, counter2=z+1;

            for(z=0;z<=h;z++)
                     {
         int k[100];
             if(uid==id1[z])
             {
         for(int i=0;i<=99;i++)
         {
         k[100]=z;
         }

            cout<<"\t\tSearch result "<<counter2<<" for "<<"["<<uid<<"]";
            cout<<"\n\n\t\tBook Title: "<<name1[z]<<endl;
            cout<<"\t\tBook ID number: "<<id1[z]<<endl;
            cout<<"\t\tAuthor name: "<<publishername1[z]<<endl;
            cout<<"\t\tPublished date: "<<date1[z];
            cout<<"\n\n\t\tPress "<<counter2<<" to purchase this book.\n";
            cout<<"\t\t*****************************"<<endl;
            cout<<endl;
            counter2++;
            while (z==h)
             {
                 int y;
                 cout<<"\n\t\tPress 0 to return to your page"<<endl;
                 cout<<"\n\t\tEnter your selection:";
                 cin>>y;
                  if(y==0)
                 {
                    system("cls");
                    goto here;
                 }
                 else
                 {
                     system("cls");
                     cout<<name1[z]<<" sucessfully purchased!\n\n";
                    for(int i=k[z];i<=10;i++)
                     {
                     name1[i]=name1[i+1];
                     id1[i]=id1[i+1];
                     publishername1[i]=publishername1[i+1];
                     date1[i]=date1[i+1];
                     }
                     start--;

                     counter--;
                     goto here;
                 }
                 }
             }
             for(int d=h;d>=0;d--)
             {
             while(z==h&&uid==id1[d])
             //else if (z==h&&uname==name1[f]||z==h&&uname==name1[k])
             {
                 int y;
                 cout<<"\nPress 0 to return to your page";
                 cout<<"Enter your selection:\t";
                 cin>>y;
                  if(y==0)
                 {
                    system("cls");
                    goto here;
                 }
                 else
                 {
                     cout<<name1[z]<<" sucessfully purchased!\n\n";
                     for(int i=k[z];i<=10;i++)
                     {
                     name1[i]=name1[i+1];
                     id1[i]=id1[i+1];
                     publishername1[i]=publishername1[i+1];
                     date1[i]=date1[i+1];
                     }
                     start--;
                     system("cls");

                     counter--;
                     goto here;
                 }
             }
             }
                     }
           //     here13:


  for(int z=0;z<=h;z++)
                     {
             if(uid!=id1[z])
             {
            while (z==h)
             {
                 cout<<"Book not found!Please try again.\n";
                 goto here3;}
             }
                     }

            }
            else if(select==3)
            {
                system("cls");
             cout<<"Enter the author of the book: ";
             cin.get();
            getline(cin, uauthor);
                system("cls");
             int h=(counter-1),z=0, counter2=z+1;

            for(z=0;z<=h;z++)
                     {
         //int k[100];
             if(uauthor==publishername1[z])
             {
         //for(int i=0;i<=99;i++)
         //{
         //k[100]=z;
         //}

            cout<<"\t\tSearch result "<<counter2<<" for "<<"["<<uauthor<<"]";
            cout<<"\n\n\t\tBook Title: "<<name1[z]<<endl;
            cout<<"\t\tBook ID number: "<<id1[z]<<endl;
            cout<<"\t\tAuthor name: "<<publishername1[z]<<endl;
            cout<<"\t\tPublished date: "<<date1[z];
            cout<<"\n\n\t\tPress "<<counter2<<" to purchase this book.\n";
            cout<<"\t\t*****************************"<<endl;
            cout<<endl;
            counter2++;
            while (z==h)
             {
                 int y;
                 cout<<"\n\t\tPress 0 to return to your page";
                 cout<<"\n\n\t\tEnter your selection:\t";
                 cin>>y;
                  if(y==0)
                 {
                    system("cls");
                    goto here;
                 }
                 else
                 {
                     system("cls");
                     cout<<name1[z]<<" sucessfully purchased!\n\n";
                    for(int i=z;i<=10;i++)
                     {
                     name1[i]=name1[i+1];
                     id1[i]=id1[i+1];
                     publishername1[i]=publishername1[i+1];
                     date1[i]=date1[i+1];
                     }
                     start--;

                     counter--;
                     goto here;
                 }
                 }
             }
             for(int d=h;d>=0;d--)
             {
             while(z==h&&uauthor==publishername1[d])
             //else if (z==h&&uname==name1[f]||z==h&&uname==name1[k])
             {
                 int y;
                 cout<<"\nPress 0 to return to your page";
                 cout<<"Enter your selection:\t";
                 cin>>y;
                  if(y==0)
                 {
                    system("cls");
                    goto here;
                 }
                 else
                 {
                     cout<<name1[z]<<" sucessfully purchased!\n\n";
                     for(int i=z;i<=10;i++)
                     {
                     name1[i]=name1[i+1];
                     id1[i]=id1[i+1];
                     publishername1[i]=publishername1[i+1];
                     date1[i]=date1[i+1];
                     }
                     start--;
                     system("cls");

                     counter--;
                     goto here;
                 }
             }
             }
                     }
           //     here13:


  for(int z=0;z<=h;z++)
                     {
             if(uauthor!=publishername1[z])
             {
            while (z==h)
             {
                 cout<<"Book not found!Please try again.\n";
                 goto here3;}
             }
                     }

            }
            else if(select==4)
           {

           system("cls");
//           int udate;
             cout<<"When was the book published? ";
             cin>>udate;
                system("cls");
             int h=(counter-1),z=0, counter2=z+1;

            for(z=0;z<=h;z++)
                     {
         int k[100];
             if(udate==date1[z])
             {
         for(int i=0;i<=99;i++)
         {
         k[100]=z;
         }

            cout<<"\t\tSearch result "<<counter2<<" for "<<"["<<udate<<"]";
            cout<<"\n\n\t\tBook Title: "<<name1[z]<<endl;
            cout<<"\t\tBook ID number: "<<id1[z]<<endl;
            cout<<"\t\tAuthor name: "<<publishername1[z]<<endl;
            cout<<"\t\tPublished date: "<<date1[z];
            cout<<"\n\n\t\tPress "<<counter2<<" to purchase this book.\n";
            cout<<"\t\t*****************************"<<endl;
            cout<<endl;
            counter2++;
            while (z==h)
             {
                 int y;
                 cout<<"\n\t\tPress 0 to return to your page";
                 cout<<"\n\n\t\tEnter your selection:\t";
                 cin>>y;
                  if(y==0)
                 {
                    system("cls");
                    goto here;
                 }
                 else
                 {
                     system("cls");
                     cout<<name1[z]<<" sucessfully purchased!\n\n";
                    for(int i=z;i<=10;i++)
                     {
                     name1[i]=name1[i+1];
                     id1[i]=id1[i+1];
                     publishername1[i]=publishername1[i+1];
                     date1[i]=date1[i+1];
                     }
                     start--;

                     counter--;
                     goto here;
                 }
                 }
             }
             for(int d=h;d>=0;d--)
             {
             while(z==h&&udate==date1[d])
             //else if (z==h&&uname==name1[f]||z==h&&uname==name1[k])
             {
                 int y;
                 cout<<"\nPress 0 to return to your page";
                 cout<<"Enter your selection:\t";
                 cin>>y;
                  if(y==0)
                 {
                    system("cls");
                    goto here;
                 }
                 else
                 {
                     cout<<name1[z]<<" sucessfully purchased!\n\n";
                     for(int i=k[z];i<=10;i++)
                     {
                     name1[i]=name1[i+1];
                     id1[i]=id1[i+1];
                     publishername1[i]=publishername1[i+1];
                     date1[i]=date1[i+1];
                     }
                     start--;
                     system("cls");

                     counter--;
                     goto here;
                 }
             }
             }
                     }
           //     here13:


  for(int z=0;z<=h;z++)
                     {
             if(udate!=date1[z])
             {
            while (z==h)
             {
                 cout<<"Book not found!Please try again.\n";
                 goto here3;}
             }
                     }

            }
            else if(select==5)
            {
                system("cls");
                goto here;
            }
        }
else
{
    system("cls");
    cout<<"There are no available books to search. Please add a book!";
    goto here;
}

        }
         else if(choice1==5)
        {
            system("cls");
            main();
        }
        else
        {
            system("cls");
            cout<<"You have entered an invalid number. Please try again!\n\n";
            goto here;

        }
}



