#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<stdio.h>
using namespace std;
class homepage
{
public:
    int choice;
    homepage()
    {
        cout<< "\n\t\t\t\xB1\xB2\xB1\xB2 Welcome to Ticket Reservation System of Bangladesh Railway \xB2\xB1\xB2\xB1"<<endl;
        cout<< "\t\t\t____________________________________________________________________";
        cout<< "\n\n\t\t\t\t \xB9 1:Login \n\t\t\t\t \xB9 2:Sign up \n\t\t\t\t \xB9 3:Stations of Bangladesh \n\t\t\t\t \xB9 4:Train Schedule \n\t\t\t\t \xB9 5:Complain \n\t\t\t\t \xB9 6:Contacts \n\t\t\t\t \xB9 7:About Bangladesh Railway\n";
        cout << "\n\t\t\t\xB3\xB2\xB3\xB2 Make your choice: ";
        cin>> choice;

    }

};


class information
{
public:
    string full_name, user_name, gender, email;
    char password[10];
    long long int phone,age,nid;
    int choice;
    store()
    {
        cout << "\n\t\t\t\t\t\xB1\xB2\xB1\xB2 PLEASE ENTER THE INFORMATION \xB2\xB1\xB2\xB1" << endl;
        cout << "\t\t\t______________________________________________________________________\n";
        cout << "\n\t\t\t\t\xB1**\xB1 PLEASE DON'T USE ANY SPACE IN BETWEEN YOUR INPUT \xB1**\xB1";
        cout << "\n\t\t\t\t\xB1**\xB1\t       USE _ INSTEAD OF SPACE          \xB1**\xB1\n";
        cout << "\n\n\n\t\xB1\xB2\xB1\xB2 Enter your Full_Name: ";
        cin >> full_name;
        cout << "\n\t\xB1\xB2\xB1\xB2 Enter your User_Name: ";
        cin >> user_name;///SYNTAXERROR
        //cout << "\n\t\xB1\xB2\xB1\xB2 Enter your Father's_Name: ";
        //cin >> f_name;
        //cout << "\n\t\xB1\xB2\xB1\xB2 Enter your Mother's_Name: ";
        //cin >> m_name;
        cout << "\n\t\xB1\xB2\xB1\xB2 Enter your Phone_Number: ";
        cin >> phone;
        cout << "\n\t\xB1\xB2\xB1\xB2 Enter your Age: ";
        cin >> age;
        cout << "\n\t\xB1\xB2\xB1\xB2 Enter your Gender(Male/Female/Others): ";
        cin >> gender;
        cout << "\n\t\xB1\xB2\xB1\xB2 Enter your NID/Birth Certificate NO: ";
        cin >> nid;
        cout << "\n\t\xB1\xB2\xB1\xB2 Enter your Email: ";
        cin >> email;
        //cout << "\n\t\xB1\xB2\xB1\xB2 Enter password: ";
        // cin >> password;
start:
        cout << "\n\t\t\t\xB3\xB2\xB3 Enter Password(ATLEAST 4 Digit): " ;
        cin >> password;
        {


            {
                try
                {
                    if(strlen(password) < 4)
                    {
                        cout << "\n\t\t\xB2\xB1\xB2\xB1 Password is too short......" << endl;
                        throw 'c';
                    }

                    else
                    {
                        cout << "\n\t\t\t\xB3\xB2\xB3 Formate is okay......." << endl;
                        cout << "\n\t\t\xB2\xB1\xB2\xB1 Successfully account created........." << endl;
                        system("Pause");
                    }

                }
                catch(char c)
                {
                    cout << "\n\t\t\xB2\xB1\xB2\xB1 Invalid password formate" << endl;
                    cout << "\n\t\t\xB2\xB1\xB2\xB1 Again ";
                    goto start;
                }
            }
        }
    }
    display()
    {
        system("CLS");
        cout << "\n\t\t\t\t\t\xB1\xB2\xB1\xB2 PLEASE ENTER THE INFORMATION \xB2\xB1\xB2\xB1" << endl;
        cout << "\t\t\t______________________________________________________________________\n";
        cout << "\n\t\t\xB2\xB1\xB2\xB1 Your Entered Informations : " << endl;
        cout << "\t\t_________________";
        cout << "\n\n\t\t\t\xB3\xB2\xB3 " << "your full name: "<< full_name <<endl;
        cout << "\n\t\t\t\xB3\xB2\xB3 " << "your user name: "<< user_name << endl;
        cout << "\n\t\t\t\xB3\xB2\xB3 " << "your phone number:+880"<<phone << endl;
        cout << "\n\t\t\t\xB3\xB2\xB3 " << "your age: "<< age << endl;///SYNTAXERROR
        cout << "\n\t\t\t\xB3\xB2\xB3 " << "your gender: "<< gender << endl;
        cout << "\n\t\t\t\xB3\xB2\xB3 " << "your NID/Birth Certificate Number: "<< nid <<endl;
        cout << "\n\t\t\t\xB3\xB2\xB3 " << "Your email: "<< email << endl;
        cout << "\n\t\t\t\xB3\xB2\xB3 " << "Your Password: "<< password << endl;
        cout << "\n\n\t\t\xB2\xB1\xB1 Is All of Your Information RIGHT......??" << endl;
        cout << "\n\t\t\t\t\t\xB2\xB1 1:YES  \xB2\xB1 2:NO" << endl;
        cout << "\n\t\t\xB2\xB1\xB2 My choice: ";
        cin >> choice;

        if (choice==1)
        {
            std::ofstream myfile;
            myfile.open("store.txt",std::ios_base::app);
            myfile << full_name << endl << user_name << endl;
            myfile << nid << endl << age << endl << gender << endl << email << endl;
            myfile.close();

            std::ofstream myfile1;
            myfile1.open("logininfo.txt", std::ios_base::app);
            myfile1  << phone << " " << password << endl;
            myfile1.close();
            system("CLS");
        }
        else if (choice == 2)
        {
            //system("CLS");
            store();
            display();
        }

    }
};

class login
{
public:
    string ph,p,phone,password;
    int exist=0;
    int LIsuccess() /// we can use LIsuccess as a constructor.
    {
        cout << "\n\t\t\t\t\t\xB1\xB2\xB1\xB2 PLEASE ENTER THE INFORMATION \xB2\xB1\xB2\xB1" << endl;
        cout << "\t\t\t______________________________________________________________________\n";
        cout << "\n\n\t\xB1\xB2\xB1\xB2  Phone number:+880";
        cin >> phone;
        cout << "\n\t\xB1\xB2\xB1\xB2  Password: ";
        cin >> password;
        ifstream log("logininfo.txt");
        while (log >> ph >> p)
        {
            if((ph.compare(phone) == 0) && (p.compare(password))==0)
            {
                exist = 1;
                break;
            }
            else
                exist = 2;
        }

    }

};

class aboutrail
{
public:
    string ucomplain;
    about()
    {
        cout<<"\n\t\t\t \xB1\xB2\xB1\xB2 Bangladesh Railway \xB2\xB1\xB2\xB1"<<endl;
        cout<< "\t\t\t______________________________"<<endl<<endl;
        cout<<"\tBangladesh Railway (BR), the state-run transportation"<<endl;
        cout<<"\tagency of the country,who is responsible for operating and"<<endl;
        cout<<"\tmaintenance of 2877.10 Km railway line. For smooth operations"<<endl;
        cout<<"\tthe Railway network is divided into 2 regions, Eastern and "<<endl;
        cout<<"\tWestern. Bangladesh Railway (BR) operates and maintains the"<<endl;
        cout<<"\tentire railway network of the country. BR is headed by the"<<endl;
        cout<<"\tDirectorate General of Bangladesh Railway under the Ministry"<<endl;
        cout<<"\tof Railways along with Bangladesh Railway Authority (BRA) "<<endl;
        cout<<"\twhich works for policy guidance of BR. To upgrade the services"<<endl;
        cout<<"\tof BR,Railway ministry has newly been established as an"<<endl;
        cout<<"\tindependent ministry in 2011 separating it from previous "<<endl;
        cout<<"\tMinistry of Communications."<<endl;///SYNTAXERROR
        cout<<"\tRailway connected almost all important places of 44 civil districts"<<endl;
        cout<<"\tand plays important role in the economy. It operates Total 348"<<endl;
        cout<<"\tPassenger trains and 6 Container trains & 20-25 goods trains daily."<<endl;
        cout<<"\tBesides, it operates the largest Inland Container Depot with capacity "<<endl;
        cout<<"\tof 90,000 TEUs. BR network was initially North-South connection based"<<endl;
        cout<<"\tbecause of riverine land script. Establishment of new East-West "<<endl;
        cout<<"\tconnections and missing links and revival of old and abandon tracks"<<endl;
        cout<<"\tare the key areas of interventions."<<endl;
    }
};

class mainpart:public aboutrail
{
public:
    int choice,choice1,choice2,choice3,classs,sits,confirm;
    double charge;
    string date,name,ucomplain;
    void stations()
    {
        cout << "\n\t\t\t\t\t\xB1\xB2\xB1\xB2 STATIONS OF BANGLADESH \xB2\xB1\xB2\xB1" << endl;
        cout << "\t\t\t\t________________________________________________________________\n";
        cout << "\n\t\t\tStation Name\t\tDistrict\t  Division\n";
        cout << "\t\t\t____________\t\t________\t  ________\n";///SYNTAXERROR
        cout << "\t\t\tKomlapur\t\tDhaka\t\t  Dhaka\n\t\t\tBiman Bandar\t\tDhaka\t\t  Dhaka\n\t\t\tJoydebpur\t\tDhaka\t\t  Dhaka\n\t\t\tTangail\t\t\tTangail\t\t  Dhaka\n";
        cout << "\t\t\tBBSetu E\t\tTangail\t\t  Dhaka\n\t\t\tBBSetu W\t\tSirajganj\t  Rajshahi\n\t\t\tSM Monsur Ali\t\tSirajganj\t  Rajshahi\n\t\t\tUllapara\t\tSirajganj\t  Rajshahi\n";
        cout << "\t\t\tBoral Bridge\t\tPabna\t\t  Rajshahi\n\t\t\tIshawrdi\t\tPabna\t\t  Rajshahi\n\t\t\tBhairamara\t\tKustia\t\t  khulna\n\t\t\tPoradaha\t\tKustia\t\t  Khulna\n";
        cout << "\t\t\tChuadanga\t\tChuadanga\t  Khulna\n\t\t\tDarshana Halt\t\tDarshana\t  Khulna\n\t\t\tCourt Chadpur\t\tJhinaidaha\t  khulna\n\t\t\tJashore\t\t\tJashore\t\t  Khulna\n";
        cout << "\t\t\tKhulna\t\t\tKhulna\t\t  Khulna\n\t\t\tAbdulpur\t\tNator\t\t  Rajshahi\n\t\t\tRajshahi\t\tRajshahi\t  Rajshahi\n\t\t\tAkhaura\t\t\tBrahmanbaria\t  Chittagong\n";
        cout << "\t\t\tChattogram\t\tChattogram\t  Chattogram\n\t\t\tPahartali\t\tChattogram\t  Chattogram\n\t\t\tSantahar\t\tBogra\t\t  Rajshahi\n\t\t\tPanchbibi\t\tJoypurhat\t  Rajshahi\n";
        cout << "\t\t\tHili\t\t\tDinajpur\t  Rangpur\n\t\t\tParbatipur\t\tDinajpur\t  Rangpur\n\t\t\tBurimari\t\tLalmonirhat\t  Rangpur\n\t\t\tLalmonirhat\t\tLalmonirhat\t  Rangpur\n";
        cout << "\t\t\tChilahati\t\tNilphamari\t  Rangpur\n\t\t\tSrimangal\t\tMoulvibazar\t  Sylhet\n\t\t\tChhatak Bazar\t\tSunamganj\t  Sylhet\n\t\t\tGafargaon\t\tMymensingh\t  Mymensingh\n";
        cout << "\t\t\tMymensingh\t\tMymensingh\t  Mymensingh\n\t\t\tJamalpur\t\tJamalpur\t  Mymensingh\n\t\t\tSharishabari\t\tJamalpur\t  Mymensingh\n\t\t\tTarakandi\t\tJamalpur\t  Mymensingh\n";
    }
    void schedule()
    {
        cout << "\n\t\t\t\t\t\xB1\xB2\xB1\xB2 TRAIN SCHEDULE \xB2\xB1\xB2\xB1" << endl;
        cout << "\t\t\t\t____________________________________\n";
        cout<< "\n\t\t\t\t\xB1\xB2\xB1\xB2 Select a train \xB2\xB1\xB2\xB1"<<endl;
        cout<< "\t\t\t\t_________________________";
        cout<< "\n\n\t\t\t \xB9 1:Sundarban Express \n\t\t\t \xB9 2:Silkcity Express \n\t\t\t \xB9 3:Banalata Express \n\t\t\t \xB9 4:Chitra express \n";
        cout << "\n\t\t\t \xB3\xB2\xB3\xB2 Make your choice: ";
        cin>> choice;
        if (choice==1)
        {
            system("CLS");
            cout<<"\n\t\t\t\t\xB1\xB2\xB1\xB2 Sundarban Express \xB2\xB1\xB2\xB1"<<endl;
            cout<<"\t\t\t\t_________________________"<<endl<<endl;
            cout<<"\t\t\tStation Name\t    Up Time(725)\t   Down Time(726)"<<endl;
            cout<<"\t\t\t______________ \t   ______________\t  ________________"<<endl;
            cout<<"\t\t\tDhaka\t\t\t08:15\t\t\t07:00\n\t\t\tBiman Bandar\t\t08:47\t\t\t06:28\n\t\t\tJoydebpur\t\t09:17\t\t\t06:02\n\t\t\tTangail\t\t\t10:30\t\t\t-----\n\t\t\tBBSETU_E\t\t10:55\t\t\t04:44";
            cout<<"\n\t\t\tSM Monsur Ali\t\t11:24\t\t\t04:03\n\t\t\tJamtoil\t\t\t11:34\t\t\t03:53\n\t\t\tUllapara\t\t11:49\t\t\t03:39\n\t\t\tBoral bridge\t\t12:11\t\t\t03:18\n\t\t\tChatmohar\t\t12:27\t\t\t03:02";
            cout<<"\n\t\t\tIshurdi\t\t\t13:20\t\t\t02:35\n\t\t\tBhairamara\t\t13:43\t\t\t01:56\n\t\t\tPoradaha\t\t14:04\t\t\t01:35\n\t\t\tAlamdanga\t\t14:23\t\t\t1:16\n\t\t\tChuadanga\t\t14:45\t\t\t00:56";
            cout<<"\n\t\t\tDarsana Halt\t\t15:18\t\t\t-----\n\t\t\tCourt Chandpur\t\t15:44\t\t\t00:01\n\t\t\tMobarakgong\t\t15:56\t\t\t-----\n\t\t\tJessore\t\t\t16:24\t\t\t23:24";
            cout<<"\n\t\t\tNoapara\t\t\t16:56\t\t\t22:52\n\t\t\tDaulatpur\t\t17:21\t\t\t22:27\n\t\t\tKhulna\t\t\t17:40\t\t\t22:15"<<endl;///SYNTAXERROR
        }
        else if (choice==2)
        {
            system("CLS");
            cout<<"\n\t\t\t\t\xB1\xB2\xB1\xB2 Silkcity Express \xB2\xB1\xB2\xB1"<<endl;
            cout<<"\t\t\t\t_________________________"<<endl<<endl;
            cout<<"\t\t\tStation Name\t    Up Time(754)\t   Down Time(755)"<<endl;
            cout<<"\t\t\t______________ \t   ______________\t  ________________"<<endl;
            cout<<"\t\t\tDhaka\t\t\t14:45\t\t\t13:30\n\t\t\tBiman Bandar\t\t15:17\t\t\t12:53\n\t\t\tJoydebpur\t\t15:53\t\t\t12:30\n\t\t\tMirzapur\t\t-----\t\t\t11:44\n\t\t\tTangail\t\t\t16:59\t\t\t11:11\n\t\t\tBBSETU_E\t\t17:29\t\t\t10:49";
            cout<<"\n\t\t\tSM Monsur Ali\t\t17:58\t\t\t10:06\n\t\t\tJamtoil\t\t\t18:17\t\t\t09:55\n\t\t\tUllapara\t\t18:32\t\t\t09:41\n\t\t\tBoral bridge\t\t19:00\t\t\t09:15\n\t\t\tChatmohar\t\t19:16\t\t\t09:00";
            cout<<"\n\t\t\tIshurdi Bypass\t\t19:37\t\t\t08:39\n\t\t\tAbdulpur\t\t19:52\t\t\t08:23\n\t\t\tRajshahi\t\t20:35\t\t\t07:40"<<endl;
        }
        else if (choice==3)
        {
            system("CLS");
            cout<<"\n\t\t\t\t\xB1\xB2\xB1\xB2 Banalata Express \xB2\xB1\xB2\xB1"<<endl;
            cout<<"\t\t\t\t_________________________"<<endl<<endl;
            cout<<"\t\t\tStation Name\t    Up Time(791)\t   Down Time(792)"<<endl;
            cout<<"\t\t\t______________ \t   ______________\t  ________________"<<endl;
            cout<<"\t\t\tDhaka\t\t\t13:30\t\t\t11:30\n\t\t\tBiman Bandar\t\t14:02\t\t\t-----\n\t\t\tRajshahi\t\t18:35\t\t\t07:00\n\t\t\tChapainababganj\t\t19:30\t\t\t06:00"<<endl;
        }
        else if (choice==4)
        {
            system("CLS");
            cout<<"\n\t\t\t\t\xB1\xB2\xB1\xB2 Chitra Express \xB2\xB1\xB2\xB1"<<endl;
            cout<<"\t\t\t\t_________________________"<<endl<<endl;
            cout<<"\t\t\tStation Name\t    Up Time(763)\t   Down Time(764)"<<endl;
            cout<<"\t\t\t______________ \t   ______________\t  ________________"<<endl;
            cout<<"\t\t\tDhaka\t\t\t19:00\t\t\t17:55\n\t\t\tBiman Bandar\t\t19:32\t\t\t17:25\n\t\t\tJoydebpur\t\t19:58\t\t\t17:01\n\t\t\tTangail\t\t\t21:00\t\t\t16:09\n\t\t\tBBSETU_E\t\t21:25\t\t\t15:47";
            cout<<"\n\t\t\tSM Monsur Ali\t\t21:53\t\t\t14:52\n\t\t\tUllapara\t\t22:12\t\t\t14:33\n\t\t\tBoral bridge\t\t22:31\t\t\t14:12\n\t\t\tChatmohar\t\t22:47\t\t\t13:56";
            cout<<"\n\t\t\tIshurdi\t\t\t23:35\t\t\t13:25\n\t\t\tBheramara\t\t23:58\t\t\t12:52\n\t\t\tPoradaha\t\t00:29\t\t\t12:27\n\t\t\tAlamdanga\t\t00:38\t\t\t12:09\n\t\t\tChuadanga\t\t00:58\t\t\t11:49";
            cout<<"\n\t\t\tDarsana Halt\t\t-----\t\t\t11:49\n\t\t\tCourt Chandpur\t\t01:43\t\t\t11:02\n\t\t\tMobarakganj\t\t-----\t\t\t10:49\n\t\t\tJessore\t\t\t02:42\t\t\t10:06";
            cout<<"\n\t\t\tNoapara\t\t\t02:55\t\t\t09:34\n\t\t\tKhulna\t\t\t03:40\t\t\t09:00"<<endl;
        }
        else if (choice<0&&choice>4)
        {
            system("CLS");
            cout<< "\n\t\t\t\xB3\xB2\xB3\xB2 You have entered a wrong number. ";
        }

    }
    void usercomplain()
    {
        cout << "\n\t\t\t\t\t\xB1\xB2\xB1\xB2 PLEASE WRITE DOWN YOUR COMPLAIN HERE \xB2\xB1\xB2\xB1" << endl;
        cout << "\t\t\t\t________________________________________________________________\n";
        cout << "\n\t\t\t\t\xB1**\xB1 PLEASE DON'T USE ANY SPACE IN BETWEEN YOUR INPUT \xB1**\xB1";
        cout << "\n\t\t\t\t\xB1**\xB1\t       USE _ INSTEAD OF SPACE                 \xB1**\xB1\n\n\n";
        cin>> ucomplain;
        std::ofstream myfile;
        myfile.open("complain.txt",std::ios_base::app);
        myfile << ucomplain << endl;
        myfile.close();
    }
    void reservation()
    {
        /// Function 1
        system("CLS");
        cout<< "\n\t\xB1\xB2\xB1\xB2 Reservation \xB2\xB1\xB2\xB1"<<endl;
        cout<< "\t_____________________";
        cout<< "\n\n\t\xB1\xB2\xB1\xB2 Please enter your name:";
        cin>>name;
        cout<< "\n\n\t\xB1\xB2\xB1\xB2 Please select your class:"<<endl;
        cout<< "\t ___________________________"<<endl;
        cout<< "\n\t 1:AC_S \n\t 2:Snigdha \n\t 3:S_chair"<<endl;
        cout<<"\n\n\t\xB1\xB2\xB1\xB2 Make your choice:";
        cin>>classs;
        cout<<"\n\t\xB1\xB2\xB1\xB2 Number of seat:";
        cin>> sits;
        system("CLS");
        cout<< "\n\t\xB1\xB2\xB1\xB2 Ticket \xB2\xB1\xB2\xB1"<<endl;
        cout<< "\t__________________";
        cout<< "\n\n\t\xB3\xB2\xB3 Passenger's Name:"<< name <<endl;
        cout<< "\n\n\t\xB3\xB2\xB3 Journey date:"<< date <<endl;
        cout<< "\n\n\t\xB3\xB2\xB3 Number of seats:"<< sits <<endl;

        // cout<<"name:"<<user_name<<endl;
        //cout<<"charge:"<<charge;
        void ticket();
    }
    void lastpart()
    {
        cout<<"\n\n\t\xB3\xB2\xB3 Please confirm your reservation \n\t\xB3\xB2\xB3 1:Yes \n\t\xB3\xB2\xB3 2:No "<<endl;
        cout<<"\t\xB3\xB2\xB3 Input your choice:";
        cin >> confirm;
        if(confirm == 1)
        {
            cout<<"\n\n\t\t\t==================";
            cout<<"\n\t\t\t Reservation Done\n";
            cout<<"\t\t\t=================="<<endl;
            system("pause");
            function_1();
        }
        else
        {
            cout<<"To go to main menu ";
            system("pause");
            function_1();

        }

    }



    void function_1()
    {
        system("CLS");
        /// Function 1
        cout<< "\n\t\t\t\t\xB1\xB2\xB1\xB2 Home \xB2\xB1\xB2\xB1"<<endl;
        cout<< "\t\t\t\t_____________";
        cout<< "\n\n\t\t\t \xB9 1:Purchase ticket \n\t\t\t \xB9 2:Train information \n\t\t\t \xB9 3:Logout\n";
        cout << "\n\t\t\t \xB3\xB2\xB3\xB2 Make your choice: ";
        cin>> choice;
        if(choice==1)
        {
            function_2();
        }
        else if(choice==2)
        {
            function_3();
        }
        else if(choice==3)
        {
            // goto start;
            system("CLS");
            homepage();
            // return 0;
        }
        else
        {
            cout << "Invalid input...........\nPlease input your choice again\n\n";
            system("pause");
            function_1();
        }



    }
    void function_2()
    {
        ///function 2
        system("CLS");
        cout << "\n\t\t\t\t\t\xB1\xB2\xB1\xB2 Purchase Ticket \xB2\xB1\xB2\xB1" << endl;
        cout << "\t\t\t\t\t_____________________________\n"<<endl;
        cout << "\n\n\t\xB1\xB2\xB1\xB2 From station: "<<endl;
        cout<<"\t_________________"<<endl;
        cout<<"\t1:Dhaka\n\t2:Khulna\n\t3:Rajshahi"<<endl;
        cout<<"\n\t\xB1\xB2\xB1\xB2 Make your choice:";
        cin>>choice;
        cout << "\n\n\t\xB1\xB2\xB1\xB2 To station: "<<endl;
        cout<<"\t_________________"<<endl;
        cout<<"\t1:Dhaka\n\t2:Khulna\n\t3:Rajshahi"<<endl;
        cout<<"\n\t\xB1\xB2\xB1\xB2 Make your choice:";
        cin>>choice1;
        cout<<"\n\t\xB1\xB2\xB1\xB2 Journey Date:";
        cin>>date;

        if(choice==1&&choice1==2)
        {
            system("CLS");
            cout << "\n\n\t\xB1\xB2\xB1\xB2 Train List: "<<endl;
            cout<<"\t_________________"<<endl;
            cout<<"\t1.Sundarban Express\n\t  Dhaka-Khulna\n\t  Time: 08:15\n\t  Date:"<<date<<endl;
            cout<<"\n\n\t2.Chitra Express\n\t  Dhaka-Khulna\n\t  Time:19:00\n\t  Date:"<<date<<endl;
            cout<<"\n\n\t\xB1\xB2\xB1\xB2 Make your choice:";
            cin>>choice2;
            if(choice2==1)
            {
                reservation();
                if(classs==1)
                {
                    charge=1156*sits;
                }
                else if(classs==2)
                {
                    charge=966*sits;
                }
                else if(classs==3)
                {
                    charge=(505*sits);
                }
                cout<< "\n\n\t\xB3\xB2\xB3 Ticket fare:"<< charge <<endl;
                cout<<"\n\n\t\xB3\xB2\xB3 From station: Dhaka \n\n\n\t\xB3\xB2\xB3 To station: Khulna"<<endl;
                cout<<"\n\n\t\xB3\xB2\xB3 Train name: Sundarban Express\n"<<endl;///SYNTAXERROR
                cout<<"\n\n\t\xB3\xB2\xB3 Depurture time:08:15"<<endl;
                lastpart();

                system("pause");
                function_1();
            }
            else if (choice2==2)
            {
                reservation();
                if(classs==1)
                {
                    charge=1781*sits;
                }
                else if(classs==2)
                {
                    charge=966*sits;
                }
                else if(classs==3)
                {
                    charge=(505*sits);
                }
                cout<< "\n\n\t\xB3\xB2\xB3 Ticket fare:"<< charge <<endl;
                cout<<"\n\n\t\xB3\xB2\xB3 From station: Dhaka \n\n\n\t\xB3\xB2\xB3 To station: Khulna"<<endl;
                cout<<"\n\n\t\xB3\xB2\xB3 Train name: Chitra Express\n"<<endl;
                cout<<"\n\n\t\xB3\xB2\xB3 Depurture time:19:00"<<endl;
                lastpart();
                system("pause");
                function_1();
            }
        }
        else if(choice==1&&choice1==3)
        {
            system("CLS");
            cout << "\n\n\t\xB1\xB2\xB1\xB2 Train List: "<<endl;
            cout<<"\t_________________"<<endl;
            cout<<"\t1.Banalata Express\n\t  Dhaka-Rajshahi\n\t  Time: 13:30\n\t  Date:"<<date<<endl;
            cout<<"\n\n\t2.Silkcity Express\n\t  Dhaka-Rajshahi\n\t  Time:14:45\n\t  Date:"<<date<<endl;
            cout<<"\n\n\t\xB1\xB2\xB1\xB2 Make your choice:";
            cin>>choice3;///SYNTAXERROR
            if(choice3==1)
            {
                reservation();
                if(classs==1)
                {
                    charge=865*sits;
                }
                else if(classs==2)
                {
                    charge=725*sits;
                }
                else if(classs==3)
                {
                    charge=(375*sits);
                }
                cout<< "\n\n\t\xB3\xB2\xB3 Ticket fare:"<< charge <<endl;
                cout<<"\n\n\t\xB3\xB2\xB3 From station: Dhaka \n\n\n\t\xB3\xB2\xB3 To station: Rajshahi"<<endl;
                cout<<"\n\n\t\xB3\xB2\xB3 Train Name: Banalata Express"<<endl;
                cout<<"\n\n\t\xB3\xB2\xB3 Depurture time:13:30"<<endl;
                lastpart();
                system("pause");
                function_1();
            }
            else if(choice3==2)
            {
                reservation();
                if(classs==1)
                {
                    charge=782*sits;
                }
                else if(classs==2)
                {
                    charge=656*sits;
                }
                else if(classs==3)
                {
                    charge=(340*sits);
                }
                cout<< "\n\n\t\xB3\xB2\xB3 Ticket fare:"<< charge <<endl;
                cout<<"\n\n\t\xB3\xB2\xB3 From station: Dhaka \n\n\n\t\xB3\xB2\xB3 To station: Rajshahi"<<endl;
                cout<<"\n\n\t\xB3\xB2\xB3 Train Name: Silkcity Express"<<endl;
                cout<<"\n\n\t\xB3\xB2\xB3 Depurture time:14:45"<<endl;
                lastpart();
                system("pause");
                function_1();
            }
        }



    }
    void function_3()
    {

        // void train()
        // {
        system("CLS");
        cout<< "\n\t\t\t\t\xB1\xB2\xB1\xB2 Select a train \xB2\xB1\xB2\xB1"<<endl;
        cout<< "\t\t\t\t_________________________";///SYNTAXERROR
        cout<< "\n\n\t\t\t \xB9 1:Sundarban Express \n\t\t\t \xB9 2:Banalata Express \n\t\t\t \xB9 3:Silkcity Express \n\t\t\t \xB9 4:Chitra express \n\t\t\t \xB9 5:Back To Home\n";
        cout << "\n\t\t\t \xB3\xB2\xB3\xB2 Make your choice: ";
        cin>> choice;
        //}
        if(choice==1)
        {
            system("CLS");
            cout<< "\n\t\t\t\t\xB1\xB2\xB1\xB2 Select your information type \xB2\xB1\xB2\xB1"<<endl;
            cout<< "\t\t\t\t______________________________________";
            cout<< "\n\n\t\t\t \xB9 1:Train rout \n\t\t\t \xB9 2:Ticket fare \n\t\t\t \xB9 3:Purchase Ticket \n\t\t\t \xB9 4:Back To Home\n";
            cout << "\n\t\t\t \xB3\xB2\xB3\xB2 Make your choice: ";
            cin>> choice;
            if(choice==1)
            {
                system("CLS");
                cout<<"\n\t\t\t\t\xB1\xB2\xB1\xB2 Sundarban Express \xB2\xB1\xB2\xB1"<<endl;
                cout<<"\t\t\t\t_________________________"<<endl<<endl;
                cout<<"\t\t\tStation Name\tDepurture Time"<<endl;
                cout<<"\t\t\t______________\t______________"<<endl;
                cout<<"\t\t\tDhaka\t\t\t08:15\n\t\t\tBiman Bandar\t\t08:47\n\t\t\tJoydebpur\t\t09:17\n\t\t\tTangail\t\t\t10:30\n\t\t\tBBSETU_E\t\t10:55";
                cout<<"\n\t\t\tSM Monsur Ali\t\t11:24\n\t\t\tJamtoil\t\t\t11:34\n\t\t\tUllapara\t\t11:49\n\t\t\tBoral bridge\t\t12:11\n\t\t\tChatmohar\t\t12:27";
                cout<<"\n\t\t\tIshurdi\t\t\t13:20\n\t\t\tBheramara\t\t13:43\n\t\t\tPoradaha\t\t14:04\n\t\t\tAlamdanga\t\t14:23\n\t\t\tChuadanga\t\t14:45";
                cout<<"\n\t\t\tDarsana Halt\t\t15:18\n\t\t\tCourt Chandpur\t\t15:44\n\t\t\tMobarakgong\t\t15:56\n\t\t\tJessore\t\t\t16:24";
                cout<<"\n\t\t\tNoapara\t\t\t16:56\n\t\t\tDaulatpur\t\t17:21\n\t\t\tKhulna\t\t\t17:40"<<endl;
                system("pause");
                function_1();
            }
            else if(choice==2)
            {
                system("CLS");
                cout<<"\n\t\t\t\t\xB1\xB2\xB1\xB2 Ticket Fare"<<endl;
                cout<< "\t\t\t\t_________________________";
                cout<< "\n\n\t\t\t \xB9 AC_S    : 1156 Taka\n\t\t\t \xB9 Snigdha : 966 Taka \n\t\t\t \xB9 S_Chair : 505 Taka \n\t\t\t \xB9 4:Back To Home\n";
                system("pause");//SYNTAXERROR
                function_1();
            }
            else if(choice==3)
            {
                function_2();
            }
            else if(choice==4)
            {
                function_1();
            }
            else
            {

                cout << "Invalid input...........\nPlease again start from Home Page\n\n";
                system("pause");
                function_1();
            }

        }
        else if(choice==2)
        {
            system("CLS");
            cout<< "\n\t\t\t\t\xB1\xB2\xB1\xB2 Select your information type \xB2\xB1\xB2\xB1"<<endl;
            cout<< "\t\t\t\t______________________________________";
            cout<< "\n\n\t\t\t \xB9 1:Train rout \n\t\t\t \xB9 2:Ticket fare \n\t\t\t \xB9 3:Purchase Ticket \n\t\t\t \xB9 4:Back To Home\n";
            cout << "\n\t\t\t \xB3\xB2\xB3\xB2 Make your choice: ";
            cin>> choice;
            if(choice==1)
            {
                system("CLS");
                cout<<"\n\t\t\t\t\xB1\xB2\xB1\xB2 Banalata Express \xB2\xB1\xB2\xB1"<<endl;
                cout<<"\t\t\t\t_________________________"<<endl<<endl;
                cout<<"\t\t\tStation Name\tDepurture Time"<<endl;
                cout<<"\t\t\t______________\t______________"<<endl;
                cout<<"\t\t\tDhaka\t\t\t13:30\n\t\t\tBiman Bandar\t\t14:02\n\t\t\tRajshahi\t\t18:35\n\t\t\tChapainababganj\t\t19:30"<<endl;
                system("pause");
                function_1();
            }
            else if(choice==2)
            {
                system("CLS");
                cout<<"\n\t\t\t\t\xB1\xB2\xB1\xB2 Ticket Fare"<<endl;
                cout<< "\t\t\t\t_________________________";
                cout<< "\n\n\t\t\t \xB9 AC_S    : 865 Taka\n\t\t\t \xB9 Snigdha : 725 Taka \n\t\t\t \xB9 S_Chair : 375 Taka \n\t\t\t \xB9 4:Back To Home\n";
                system("pause");
                function_1();
            }
            else if(choice==3)
            {
                function_2();
            }
            else if(choice==4)
            {
                function_1();
            }
            else
            {

                cout << "Invalid input...........\nPlease again start from Home Page\n\n";
                system("pause");
                function_1();
            }

        }

        else if(choice==3)
        {
            system("CLS");
            cout<< "\n\t\t\t\t\xB1\xB2\xB1\xB2 Select your information type \xB2\xB1\xB2\xB1"<<endl;
            cout<< "\t\t\t\t______________________________________";
            cout<< "\n\n\t\t\t \xB9 1:Train rout \n\t\t\t \xB9 2:Ticket fare \n\t\t\t \xB9 3:Purchase Ticket \n\t\t\t \xB9 4:Back To Home\n";
            cout << "\n\t\t\t \xB3\xB2\xB3\xB2 Make your choice: ";
            cin>> choice;
            if(choice==1)
            {
                system("CLS");
                cout<<"\n\t\t\t\t\xB1\xB2\xB1\xB2 Silkcity Express \xB2\xB1\xB2\xB1"<<endl;
                cout<<"\t\t\t\t_________________________"<<endl<<endl;
                cout<<"\t\t\tStation Name\tDepurture Time"<<endl;                    //SYNTAXERROR
                cout<<"\t\t\t______________\t______________"<<endl;
                cout<<"\t\t\tDhaka\t\t\t14:45\n\t\t\tBiman Bandar\t\t15:17\n\t\t\tJoydebpur\t\t15:53\n\t\t\tTangail\t\t\t16:59\n\t\t\tBBSETU_E\t\t17:29";
                cout<<"\n\t\t\tSM Monsur Ali\t\t17:58\n\t\t\tJamtoil\t\t\t18:17\n\t\t\tUllapara\t\t18:32\n\t\t\tBoral bridge\t\t19:00\n\t\t\tChatmohar\t\t19:16";
                cout<<"\n\t\t\tIshurdi Bypass\t\t19:37\n\t\t\tAbdulpur\t\t19:52\n\t\t\tRajshahi\t\t20:35"<<endl;
                system("pause");
                function_1();
            }
            else if(choice==2)
            {
                system("CLS");
                cout<<"\n\t\t\t\t\xB1\xB2\xB1\xB2 Ticket Fare"<<endl;
                cout<< "\t\t\t\t_________________________";
                cout<< "\n\n\t\t\t \xB9 AC_S    : 782 Taka\n\t\t\t \xB9 Snigdha : 656 Taka \n\t\t\t \xB9 S_Chair : 340 Taka \n\t\t\t \xB9 4:Back To Home\n";
                system("pause");
                function_1();
            }
            else if(choice==3)//SYNTAXERROR
            {
                function_2();
            }
            else if(choice==4)
            {
                function_1();
            }
            else
            {

                cout << "Invalid input...........\nPlease again start from Home Page\n\n";
                system("pause");
                function_1();
            }


        }
        else if(choice==4)
        {
            system("CLS");
            cout<< "\n\t\t\t\t\xB1\xB2\xB1\xB2 Select your information type \xB2\xB1\xB2\xB1"<<endl;
            cout<< "\t\t\t\t______________________________________";
            cout<< "\n\n\t\t\t \xB9 1:Train rout \n\t\t\t \xB9 2:Ticket fare \n\t\t\t \xB9 3:Purchase Ticket \n\t\t\t \xB9 4:Back To Home\n";
            cout << "\n\t\t\t \xB3\xB2\xB3\xB2 Make your choice: ";
            cin>> choice;
            if(choice==1)
            {
                system("CLS");
                cout<<"\n\t\t\t\t\xB1\xB2\xB1\xB2 Chitra Express \xB2\xB1\xB2\xB1"<<endl;
                cout<<"\t\t\t\t_________________________"<<endl<<endl;
                cout<<"\t\t\tStation Name\tDepurture Time"<<endl;
                cout<<"\t\t\t______________\t______________"<<endl;
                cout<<"\t\t\tDhaka\t\t\t19:00\n\t\t\tBiman Bandar\t\t19:32\n\t\t\tJoydebpur\t\t19:58\n\t\t\tTangail\t\t\t21:00\n\t\t\tBBSETU_E\t\t21:25";
                cout<<"\n\t\t\tSM Monsur Ali\t\t21:53\n\t\t\tUllapara\t\t22:12\n\t\t\tBoral bridge\t\t22:31\n\t\t\tChatmohar\t\t22:47";//SYNTAXERROR
                cout<<"\n\t\t\tIshurdi\t\t\t23:35\n\t\t\tBheramara\t\t23:58\n\t\t\tPoradaha\t\t00:29\n\t\t\tAlamdanga\t\t00:38\n\t\t\tChuadanga\t\t00:58";
                cout<<"\n\t\t\tCourt Chandpur\t\t01:43\n\t\t\tJessore\t\t\t02:42";
                cout<<"\n\t\t\tNoapara\t\t\t02:55\n\t\t\tKhulna\t\t\t03:40"<<endl;
                system("pause");
                function_1();
            }
            else if(choice==2)
            {
                system("CLS");
                cout<<"\n\t\t\t\t\xB1\xB2\xB1\xB2 Ticket Fare"<<endl;
                cout<< "\t\t\t\t_________________________";
                cout<< "\n\n\t\t\t \xB9 AC_S    : 1781 Taka\n\t\t\t \xB9 Snigdha : 966 Taka \n\t\t\t \xB9 S_Chair : 505 Taka \n\t\t\t \xB9 4:Back To Home\n";
                system("pause");
                function_1();
            }
            else if(choice==3)
            {
                function_2();
            }
            else if(choice==4)
            {
                function_1();
            }
            else
            {

                cout << "Invalid input...........\nPlease again start from Home Page\n\n";
                system("pause");
                function_1();
            }


        }
        else if(choice==5)
        {
            function_1();
        }
        else
        {

            cout << "Invalid input...........\nPlease again start from Home Page\n\n";
            system("pause");
            function_1();
        }
}
    void function_4()
    {

        system("CLS");
        cout<< "\n\t\t\t\t\xB1\xB2\xB1\xB2 Emergency Contacts \xB2\xB1\xB2\xB1"<<endl;
        cout<< "\t\t\t\t___________________________";
        cout<< "\n\n\t\t\t \xB9 National Emergency Center : 999 \n\t\t\t \xB9 National Help Desk        : 333";
        cout<< "\n\t\t\t \xB9 Dhaka Station             : 029358634\n\t\t\t \xB9 Khulna station            : 041760691";
        cout<< "\n\t\t\t \xB9 Rajshahi Station          : 0721761940 \n\t\t\t \xB9 Tech support(9AM-6PM)     : 01401168806";
        cout<< "\n\t\t\t \xB9 Tech. support(Email)      : esheba-ticket@cnsbd.com"<<endl;
        //system("pause");//SYNTAXERROR
    }

};

class ticket
{
public:

};
int main()
{
start://SYNTAXERROR
    system("CLS");
    homepage obj_homepage;
    login obj_login;
    information obj_information;
    mainpart obj_mainpart;
    system("CLS");


    if(obj_homepage.choice == 1)
    {
        system("CLS");
        obj_login.LIsuccess();
        while(obj_login.exist>0)
        {
            if(obj_login.exist==1)
            {
                cout << "\n\t\t\t\xB3\xB2\xB3\xB2 You have Successfully login" << endl;
                //system("cls");
                cout << "\n\t\t\t\xB3\xB2\xB3\xB2 ";
                system("pause");//SYNTAXERROR
                cout << " xB3\xB2\xB3\xB2 ";
                obj_mainpart.function_1();


                break;
            }
            else
            {
                cout << "\n\t\t\t\xB3\xB2\xB3\xB2 You've entered incorrect user name or password";
                cout << "\n\t\t\t";
                system("pause");
                system("ClS");//SYNTAXERROR
                obj_login.LIsuccess();
            }
        }

    }
    else if(obj_homepage.choice==2)
    {
        obj_information.store();
        obj_information.display();
        system("CLS");
        main();
    }

    else if(obj_homepage.choice==3)
    {
        system("CLS");
        obj_mainpart.stations();
        system("pause");
        goto start;
        //exit (0);
    }
    else if(obj_homepage.choice==4)
    {
        system("CLS");
        obj_mainpart.schedule();
        system("pause");
        goto start;
        //exit (0);
    }
    else if(obj_homepage.choice==5)
    {
        obj_mainpart.usercomplain();
        system("pause");
        goto start;
    }
    else if(obj_homepage.choice==6)
    {
        obj_mainpart.function_4();
        system("pause");
        goto start;
    }
    else if(obj_homepage.choice==7)
    {
        obj_mainpart.about();
        system("pause");
        goto start;
    }
    else
    {
        cout<< "\n\t\t\t\xB3\xB2\xB3\xB2 You have entered a wrong number. ";
        system("pause");
        goto start;
    }
    return 0;
}

//ENCODEDBYSYNTAXERROR

