/**          “Everything should be made as simple as possible, but not simpler.” -Albert Einstein          **/



#include<iostream>

#include<conio.h>

#include<iomanip>

#include<windows.h>

using namespace std;

void startup();

void title();

void deployment();



class character{

public:

    string choice,name,country;

};

/**11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111*/

class billionaire:public character

{

private:

    int rank,age;

    float networth;

    string source,industry;

public:

    /**Methods name specifying the source(Industry) from which billionaires belong.*/

    void link();

    void technology();

    void fashionRetail();

    void investment();

    void diversified();

    void get_data(int r,string n,float nw,int a,string territory,string root,string ind)

    {

        rank=r;

        name=n;

        networth=nw;

        age=a;

        country=territory;

        source=root;

        industry=ind;

    }

    void put_data()

    {

        system("CLS");

        system("color F2");

        cout<<"\n\n\n\n\n\n";

        for(int i=1;i<120;i++)

            {cout<<"*";}

        cout<<"\n\n\t\t\t\t\tI think of...."<<"\""<<name<<"\"\n\n";

        for(int i=1;i<120;i++)

            {cout<<"*";}

        cout<<"\n\t\t\t\t\tRank"<<setw(7)<<": "<<rank<<endl;

        cout<<"\t\t\t\t\tNetworth : $"<<networth<<" Billion"<<endl;

        cout<<"\t\t\t\t\tAge"<<setw(8)<<": "<<age<<endl;

        cout<<"\t\t\t\t\tCountry"<<setw(4)<<": "<<country<<endl;

        cout<<"\t\t\t\t\tSource"<<setw(5)<<": "<<source<<endl;

        cout<<"\t\t\t\t\tIndustry : "<<industry<<endl;

    }



};

void billionaire::link()

{

    system("ClS");

    system("color F0");

    cout<<"\n\n\n\t\t\t\tIs your character related to technology?(Yes/No) :";

    cin>>choice;

    if(choice=="Yes" || choice=="yes")

    {

        technology();

    }

    else if(choice=="No" || choice=="no")

    {

        cout<<"\n\n\t\t\t\tIs your character related to fashion and retail industry?(Yes/No) :";

        cin>>choice;

        if(choice=="Yes" || choice=="yes")

        {

            fashionRetail();

        }

        else if(choice=="No" || choice=="no")

        {

            cout<<"\n\n\t\t\t\tIs your character an investment manager?(Yes/No) :";

            cin>>choice;

            if(choice=="Yes" || choice=="yes")

            {

                investment();

            }

            else if(choice=="No" || choice=="no")

            {

                diversified();

            }

        }

    }

}

void billionaire::technology()

{

    cout<<"\n\n\t\t\t\tIs your character older than 40?(Yes/No) : ";

    cin>>choice;

    if(choice=="Yes" || choice=="yes")

    {

        cout<<"\n\n\t\t\t\tDoes your character wear glasses?(Yes/No) : ";

        cin>>choice;

        if(choice=="Yes" || choice=="yes")

        {

            cout<<"\n\n\t\t\t\tIs your character associated with Microsoft?(Yes/No) : ";

            cin>>choice;

            if(choice=="Yes" || choice=="yes")

            {

                cout<<"\n\n\t\t\t\tDoes your character run the world's biggest Welfare Organization?(Yes/No/Probably) : ";

                cin>>choice;

                if(choice=="Yes" || choice=="yes")

                {

                    get_data(4,"Bill Gates",124,65,"United States","Microsoft","Technology");  //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                    put_data();

                }

                else if(choice=="No" || choice=="no" || choice=="Probably" || choice=="probably")

                {

                    cout<<"\n\n\t\t\t\tDoes he and his wife recently divorce after 27 years of marriage?(Yes/No/dk(don't know)) : ";

                    cin>>choice;

                    if(choice=="Yes" || choice=="yes")

                    {

                        get_data(4,"Bill Gates",124,65,"United States","Microsoft","Technology");  //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                        put_data();

                    }

                    else if(choice=="No" || choice=="no" || choice=="dk")

                    {

                            cout<<"\n\n\t\t\t\tIs your character have a big body?(Yes/No/dk(don't know)) :";

                            cin>>choice;

                            if(choice=="Yes" || choice=="yes")

                            {

                                get_data(14,"Steve Ballmer",68.7,65,"United States","Microsoft","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                put_data();

                            }

                            else if(choice=="No" || choice=="no" || choice=="dk")

                            {

                                cout<<"\n\n\t\t\t\tDoes your character have a friend more famous than him?(Yes/No) :";

                                cin>>choice;

                                if(choice=="Yes" || choice=="yes")

                                {

                                    get_data(14,"Steve Ballmer",68.7,65,"United States","Microsoft","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                    put_data();

                                }

                                else

                                {

                                    get_data(4,"Bill Gates",124,65,"United States","Microsoft","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                    put_data();

                                }

                            }

                    }

                  }



                    else if(choice=="No" || choice=="no")

                        {

                            cout<<"\n\n\t\t\t\tIs your character related to gaming and entertainment conglomerates?(Yes/No) : ";

                            cin>>choice;

                            if(choice=="Yes" || choice=="yes")

                            {

                                 get_data(15,"Ma Huateng",65.8,49,"China","Internet Media","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                 put_data();

                            }

                            else if(choice=="No" || choice=="no")

                            {

                                cout<<"\n\n\t\t\t\tIs your character related to Pinduoduo?(Yes/No) : ";

                                cin>>choice;

                                if(choice=="Yes" || choice=="yes")

                                {

                                    get_data(21,"Colin Zheng Huang",55.3,41,"China","Pinduoduo(E-Commerce)","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                    put_data();

                                }

                                else

                                {

                                    get_data(15,"Ma Huateng",65.8,49,"China","Internet Media","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                    put_data();

                                }

                            }

                        }

                    }

                else if(choice=="No" || choice=="no")

                {

                    cout<<"\n\n\t\t\t\tDoes your character related to Tencent?(Yes/No) :";

                    cin>>choice;

                    if(choice=="Yes" || choice=="yes")

                    {

                        get_data(15,"Ma Huateng",65.8,49,"China","Internet Media","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                        put_data();

                    }

                    else if(choice=="No" || choice=="no")

                    {

                        get_data(21,"Colin Zheng Huang",55.3,41,"China","Pinduoduo(E-Commerce)","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                        put_data();

                    }

                }

           }



        else if(choice=="No" || choice=="no")

        {

            cout<<"\n\n\t\t\t\tIs your character linked with cars?(Yes/No) : ";

            cin>>choice;

            if(choice=="Yes" || choice=="yes")

            {

                cout<<"\n\n\t\t\t\tDoes your character love to go space?(Yes/No) : ";

                cin>>choice;

                if(choice=="Yes" || choice=="yes")

                {

                    get_data(2,"Elon Musk",151,49,"United States","Tesla, SpaceX","Automotive,Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                    put_data();

                }

                else if(choice=="No" || choice=="no")

                {

                    cout<<"\n\n\t\t\t\tDoes he always talk about"<<"\""<<"AI"<<"\"?"<<"(Yes/No) : ";

                    cin>>choice;

                    if(choice=="Yes" || choice=="yes")

                    {

                        get_data(2,"Elon Musk",151,49,"United States","Tesla, SpaceX","Automotive,Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                        put_data();

                    }

                    else if(choice=="No" || choice=="no")

                    {

                        cout<<"\n\n\t\t\t\tIs he an electrical engineer?(Yes/No) : ";

                        cin>>choice;

                        if(choice=="Yes" || choice=="yes")

                        {

                           get_data(2,"Elon Musk",151,49,"United States","Tesla, SpaceX","Automotive,Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                           put_data();

                        }

                        else if(choice=="No" || choice=="no")

                        {

                            cout<<"\n\n\t\t\t\tIs he related to Amazon?(Yes/No) : ";

                            cin>>choice;

                            if(choice=="Yes" || choice=="yes")

                            {

                                get_data(1,"Jeff Bezoz",177,57,"United States","Amazon","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                put_data();

                            }

                            else

                            {

                                get_data(4,"Bill Gates",124,65,"United States","Microsoft","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                put_data();

                            }

                        }

                    }

                }

            }

            else if(choice=="No" || choice=="no")

            {

                cout<<"\n\n\t\t\t\tIs your character involved with Amazon(Yes/No) : ";

                cin>>choice;

                if(choice=="Yes" || choice=="yes")

                {

                    cout<<"\n\n\t\t\t\tIs your character bald?(Yes/No) : ";

                    cin>>choice;

                    if(choice=="Yes" || choice=="yes")

                    {

                        get_data(1,"Jeff Bezoz",177,57,"United States","Amazon","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                        put_data();

                    }

                    else if(choice=="No" || choice=="no")

                    {

                        cout<<"\n\n\t\t\t\tIs your character an admin of popular website?(Yes/No) :";

                        cin>>choice;

                        if(choice=="Yes" || choice=="yes")

                        {

                           get_data(1,"Jeff Bezoz",177,57,"United States","Amazon","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                           put_data();

                        }

                        else if(choice=="No" || choice=="no")

                        {

                            cout<<"\n\n\t\t\t\tIs your character known for her higly-profiled divorce from Amazon\'s admin?(Yes/No) :";

                            cin>>choice;

                            if(choice=="Yes" || choice=="yes")

                            {

                                get_data(22,"MacKenzie Scott",53,50,"United States","Amazon","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                put_data();

                            }

                            else if(choice=="No" || choice=="no")

                            {

                               get_data(1,"Jeff Bezoz",177,57,"United States","Amazon","Technology") ;  //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                               put_data();

                            }

                        }

                    }

                }

                else if(choice=="No" || choice=="no")

                {

                    cout<<"\n\n\t\t\t\tDoes your character run a Facebook group?(Yes/No) : ";

                    cin>>choice;

                    if(choice=="Yes" || choice=="yes")

                    {                                                                  //an admin of popular website

                        cout<<"\n\n\t\t\t\tDoes your character work with database?(Yes/No) : ";//work with database,leader of a computer club

                        cin>>choice;

                        if(choice=="Yes" || choice=="yes")

                        {

                            get_data(5,"Mark Zuckerberg",97,36,"United States","Facebook","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                            put_data();

                        }

                        else if(choice=="No" || choice=="no")

                        {

                            cout<<"\n\n\t\t\t\tIs your character linked with blue color?(Yes/No) :";

                            cin>>choice;

                            if(choice=="Yes" || choice=="yes")

                            {

                                get_data(5,"Mark Zuckerberg",97,36,"United States","Facebook","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                put_data();

                            }

                            else if(choice=="No" || choice=="no")

                            {

                                get_data(7,"Larry Ellison",93,76,"United States","Oracle(Software)","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                put_data();

                            }

                        }

                    }

                    else if(choice=="No" || choice=="no")

                    {

                        cout<<"\n\n\t\t\t\tIs your character the leader of the software company?(Yes/No) :";

                        cin>>choice;

                        if(choice=="Yes" || choice=="yes")

                        {

                            cout<<"\n\n\t\t\t\tDoes your character wear a black suit?(Yes/No) :";

                            cin>>choice;

                            if(choice=="Yes" || choice=="yes")

                            {

                                get_data(7,"Larry Ellison",93,76,"United States","Oracle(Software)","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                put_data();

                            }

                            else if(choice=="No" || choice=="no")

                            {

                                cout<<"\n\n\t\t\t\tDoes your character belongs to a team of two?(Yes/No) :";

                                cin>>choice;

                                if(choice=="Yes" || choice=="yes")

                                {

                                    cout<<"\n\n\t\t\t\tDoes your character have silver hairs?(Yes/No) :";

                                    cin>>choice;

                                    if(choice=="Yes" || choice=="yes")

                                    {

                                        get_data(8,"Larry Page",91.5,48,"United States","Google","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                        put_data();

                                     }

                                     else if(choice=="No" || choice=="no")

                                     {

                                         get_data(9,"Sergey Brin",89,47,"United States","Google","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                        put_data();

                                     }

                                }

                                else if(choice=="No" || choice=="no")

                                {

                                    cout<<"\n\n\t\t\t\tIs your character related to Google?(Yes/No) : ";

                                    cin>>choice;

                                    if(choice=="Yes" || choice=="yes")

                                    {

                                        cout<<"\n\n\t\t\t\tDoes your character have silver hairs?(Yes/No) : ";

                                        cin>>choice;

                                        if(choice=="Yes" || choice=="yes")

                                       {

                                           get_data(8,"Larry Page",91.5,48,"United States","Google","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                           put_data();

                                       }

                                       else if(choice=="No" || choice=="no")

                                        {

                                            get_data(9,"Sergey Brin",89,47,"United States","Google","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                            put_data();

                                        }

                                    }

                                    else if(choice=="No" || choice=="no")

                                    {

                                        cout<<"\n\n\t\t\t\tDoes your character work with Microsoft?(Yes/No) :";

                                        cin>>choice;

                                        if(choice=="Yes" || choice=="yes")

                                         {

                                             cout<<"\n\n\t\t\t\tIs your character have a big body?(Yes/No) :";

                                             cin>>choice;

                                             if(choice=="Yes" || choice=="yes")

                                             {

                                                 get_data(14,"Steve Ballmer",68.7,65,"United States","Microsoft","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                                 put_data();

                                             }

                                             else if(choice=="No" || choice=="no")

                                             {

                                                 cout<<"\n\n\t\t\t\tDoes your character have a friend more famous than him?(Yes/No) :";

                                                 cin>>choice;

                                                 if(choice=="Yes" || choice=="yes")

                                                 {

                                                     get_data(14,"Steve Ballmer",68.7,65,"United States","Microsoft","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                                    put_data();

                                                 }

                                                 else if(choice=="No" || choice=="no")

                                                {

                                                    get_data(4,"Bill Gates",124,65,"United States","Microsoft","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                                    put_data();

                                                }

                                             }

                                         }

                                         else if(choice=="No" || choice=="no")

                                         {

                                             cout<<"\n\n\t\t\t\tDoes your character launch computers?(Yes/No) :";

                                             if(choice=="Yes" || choice=="yes")

                                             {

                                                 cout<<"\n\n\t\t\t\tIs your character founder of Dell?(Yes/No) :";

                                                 cin>>choice;

                                                 if(choice=="Yes" || choice=="yes")

                                                 {

                                                    get_data(30,"Michael Dell",45.1,56,"United States","Dell","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                                    put_data();

                                                 }

                                                 else if(choice=="No" || choice=="no")

                                                 {

                                                     system("CLS");

                                                     system("color F0");

                                                     cout<<"\n\n\n\n\n\n\n\t\t\t\t\tI think of Steve's Job.......";

                                                 }

                                             }

                                         }

                                    }

                                //does your character have silver hairs

                               } //does your character belong to a team of two

                            }

                        }

                        else if(choice=="No" || choice=="No")

                        {

                            system("CLS");

                            cout<<"\n\n\n\t\t\t\tIs your character related to E-Commerce?(Yes/No) :";

                            cin>>choice;

                            if(choice=="Yes" || choice=="yes")

                            {

                                cout<<"\n\n\t\t\t\tIs your character short?(Yes/No) :";

                                cin>>choice;

                                if(choice=="Yes" || choice=="yes")

                                {

                                    get_data(26,"Jack Ma",48.4,56,"China","Ali Baba Group","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                    put_data();

                                }

                                else if(choice=="No" || choice=="no")

                                {

                                    get_data(21,"Colin Zheng Huang",55.3,41,"China","Internet Media","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                    put_data();

                                }

                            }

                            else if(choice=="No" || choice=="no")

                            {

                                cout<<"\n\n\t\t\t\tIs your character related to telecom firm?(Yes/No) :";

                                cin>>choice;

                                if(choice=="Yes" || choice=="yes")

                                {

                                    cout<<"\n\n\t\t\t\tIs your character Mexican?(Yes/No) :";

                                    cin>>choice;

                                    if(choice=="Yes" || choice=="yes")

                                    {

                                        cout<<"\n\n\t\t\t\tIs he a richest person in Latin America?(Yes/No) :";

                                        cin>>choice;

                                        if(choice=="Yes" || choice=="yes" || choice=="No" || choice=="no")

                                        {

                                            get_data(16,"Carlos slim Helu",62.8,81,"Mexico","America Móvil","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                            put_data();

                                        }

                                    }

                                    else if(choice=="No" || choice=="no")

                                    {

                                        get_data(29,"Masayoshi Son",45.4,63,"Japan","SoftBank group","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                            put_data();

                                    }

                                }

                                else if(choice=="No" || choice=="no")

                                {

                                    cout<<"\n\n\t\t\t\tIs your character linked with Amazon?(Yes/No) :";

                                    cin>>choice;

                                    if(choice=="Yes" || choice=="yes")

                                    {

                                        cout<<"\n\n\t\t\t\tDoes your character love to go space?(Yes/No/dk(don't know)) : ";

                                        cin>>choice;

                                        if(choice=="Yes" || choice=="yes")

                                        {

                                            get_data(1,"Jeff Bezoz",177,57,"United States","Amazon","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                            put_data();

                                        }

                                        else if(choice=="No" || choice=="no" || choice=="dk")

                                        {

                                            cout<<"\n\n\t\t\t\tIs your character bald?(Yes/No) :";

                                            cin>>choice;

                                            if(choice=="Yes" || choice=="yes")

                                            {

                                                get_data(1,"Jeff Bezoz",177,57,"United States","Amazon","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                                put_data();

                                            }

                                            else if(choice=="No" || choice=="no")

                                            {

                                                cout<<"Is your character known for her highly profiled divorce?(Yes/No) :";

                                                cin>>choice;

                                                 if(choice=="Yes" || choice=="yes")

                                                {

                                                   get_data(22,"MacKenzie Scott",53,50,"United States","Amazon","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                                                   put_data();

                                                }

                                                else

                                                {

                                                    system("CLS");

                                                    system("color 4F");

                                                    cout<<"\n\n\n\n\n\n\n\t\t\t\t\tI think of nothing......";

                                                }

                                             }

                                         }

                                     }

                                 }

                             }

                         }

                     }

                 }

             }

         }

     }

     else if(choice=="No" || choice=="no")

    {

        cout<<"\n\n\t\t\t\tDoes your character run a Facebook group?(Yes/No) :";

        cin>>choice;

        if(choice=="Yes" || choice=="yes")

        {                                                                  //an admin of popular website

            cout<<"\n\n\t\t\t\tDoes your character work with database?(Yes/No) :";//work with database,leader of a computer club

            cin>>choice;

            if(choice=="Yes" || choice=="yes")

            {

                get_data(5,"Mark Zuckerberg",97,36,"United States","Facebook","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                put_data();

            }

            else if(choice=="No" || choice=="no")

            {

                cout<<"\n\n\t\t\t\tIs your character linked with blue color?(Yes/No) :";

                cin>>choice;

                if(choice=="Yes" || choice=="yes")

                {

                    get_data(5,"Mark Zuckerberg",97,36,"United States","Facebook","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                    put_data();

                }

                else if(choice=="No" || choice=="no")

                {

                    get_data(7,"Larry Ellison",93,76,"United States","Oracle(Software)","Technology");   //get_data(int r,string n,float nw,int a,string territory,string root,string ind)

                    put_data();

                }

            }

        }

        else if(choice=="No" || choice=="no")

        {

            system("CLS");

            system("color 4F");

            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tAllah knows...|\n";

        }

    }

}

           //"Is your character an Admin of world's largest social network



/**********************************************************************************************************************************

********************************************Billionaire by Fashion Retail industry***********************************************8*8

***********************************************Method : Fashion Retail/****************************************************************

**************************************************************************************************************************************/





void billionaire::fashionRetail()

{

    cout<<"\n\n\t\t\t\tDoes your character live in France?(Yes/No) :";

    cin>>choice;

    if(choice=="Yes" || choice=="yes")

    {

        cout<<"\n\n\t\t\t\tIs your character the boss of an luxury good company?(Yes/No) :";

        cin>>choice;

        if(choice=="Yes" || choice=="yes")

        {

            get_data(4,"Bernard Arnault",150,72,"France","LVMH","Fashion & retail");

            put_data();

        }

        else if(choice=="No" || choice=="no")

        {

            cout<<"\n\n\t\t\t\tDoes your character related to a cosmetic Company?(Yes/No) :";

            cin>>choice;

            if(choice=="Yes" || choice=="yes")

            {

                get_data(12,"Francoise Bettencourt Meyers",73.6,67,"France","L'Oreal","Fashion & retail");

                put_data();

            }

            else

            {

                get_data(4,"Bernard Arnault",150,72,"France","LVMH","Fashion & retail");

                put_data();

            }

        }

    }

    else if(choice=="No" || choice=="no")

    {

        cout<<"\n\n\t\t\t\tIs your character related to Walton's family?(Yes/No) :";

        cin>>choice;

        if(choice=="Yes" || choice=="yes")

        {

            cout<<"\n\n\t\t\t\tIs your character a female?(Yes/No) :";

            cin>>choice;

            if(choice=="Yes" || choice=="yes")

            {

                get_data(17,"Alice Walton",61.8,71,"United States","Walmart","Fashion & Retail");

                put_data();

            }

            else if(choice=="No" || choice=="no")

            {

                cout<<"\n\n\t\t\t\tIs your character the youngest son Walmart's founder?(Yes/No) :";

                cin>>choice;

                if(choice=="Yes" || choice=="yes")

                {

                    get_data(18,"Jim Walton",60.2,72,"United States","Walmart","Fashion & Retail");

                    put_data();

                }

                else

                {

                    get_data(17,"Rob Walton",59.5,76,"United States","Walmart","Fashion & Retail");

                put_data();

                }

            }

        }

        else if(choice=="No" || choice=="no")

        {

            diversified();

        }

    }

}

void billionaire::investment()

{

    cout<<"\n\n\t\t\t\tDoes your character wear orange glasses?(Yes/No) :";

    cin>>choice;

    if(choice=="Yes" || choice=="yes")

    {

        get_data(6,"Warren Buffett",96,90,"United States","Berkshire Hathaway","Finance & Investment");

        put_data();

    }

    else if(choice=="No" || choice=="no")

    {

        diversified();

    }



}



void billionaire::diversified()

{

    cout<<"\n\n\t\t\t\tIs your character Indian?(Yes/No) :";

    cin>>choice;

    if(choice=="Yes" || choice=="yes")

    {

        cout<<"\n\n\t\t\tIs your character interested in petrochemicals, oil and gas, telecom and retail?(Yes/No) :";

        cin>>choice;

        if(choice=="Yes" || choice=="yes")

        {

            get_data(10,"Mukesh Ambani",84.5,63,"India","Reliance Industry","Diversified");

            put_data();

        }

        else if(choice=="No" || choice=="no")

        {

            cout<<"\n\n\t\t\t\tIs your character involved in port development?(Yes/No) :";cin>>choice;

            if(choice=="Yes" || choice=="yes")

            {

                get_data(24,"Gautum Adani",50.5,58,"India","Adani group","Diversified");

            put_data();

            }

            else

            {

                get_data(10,"Mukesh Ambani",84.5,63,"India","Reliance Industry","Diversified");

              put_data();

            }

        }

    }

    else

    {

        system("CLS");

        system("color 4F");

        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tI think of nothing...\n";



    }

}





/******************************************************************************************************************************

\\\\\////////////////////*********************************************************************************************************

*******************************************CLass of footballers***************************************************************8

*************************************************************************************||||||||||||||///////////////////////\\\\\

******************************************************************************************************************************/





class footballers:public character

{

private:

    string team,position;

    int squadNumber;

public:

    void link();

    void fcbarcelona();

    void portuguese();

    void EPL();

    void realMadrid();

    void brazilian();

    void Germanclub();

    void get_data(string n,string territory,string ct,int sn,string pos)

    {

        name=n;

        country=territory;

        team=ct;

        squadNumber=sn;

        position=pos;

    }

    void put_data()

    {

        system("CLS");

        system("color F0");

        cout<<"\n\n\n\n\n\n";

        for(int i=1;i<120;i++)

            {cout<<"*";}

        cout<<"\n\n\t\t\t\t\tI think of...."<<"\""<<name<<"\"\n\n";

        for(int i=1;i<120;i++)

            {cout<<"*";}

        cout<<"\n\t\t\t\t\tCountry"<<setw(9)<<": "<<country<<endl;

        cout<<"\t\t\t\t\tCurrent teams : "<<team<<endl;

        cout<<"\t\t\t\t\tNumber"<<setw(10)<<": "<<squadNumber<<endl;

        cout<<"\t\t\t\t\tPosition"<<setw(8)<<": "<<position<<endl;

    }

};

void footballers::link()

{

    system("CLS");

    system("color F0");



    cout<<"\n\n\n\t\t\t\t"<<"Is your character linked to FC Barcelona(Yes/No) : ";

    cin>>choice;

    if(choice=="Yes" || choice=="yes")

    {

        fcbarcelona();

    }

    else if(choice=="No" || choice=="no")

    {

        cout<<"\n\n\t\t\t\t"<<"Is your character Portuguese(Yes/No) : ";

        cin>>choice;

        if(choice=="Yes" || choice=="yes")

        {

            portuguese();

        }

        else if(choice=="No" || choice=="no")

        {

            cout<<"\n\n\t\t\t\t"<<"Is your character linked to the English premier league?(Yes/No) : ";

            cin>>choice;

            if(choice=="Yes" || choice=="yes")

            {

                EPL();

            }

            else if(choice=="No" || choice=="no")

            {

                cout<<"\n\n\t\t\t\t"<<"Is your character linked with Real Madrid?(Yes/No) : ";

                cin>>choice;

                if(choice=="Yes" || choice=="yes")

                {

                    realMadrid();

                }

                else if(choice=="No" || choice=="no")

                {

                    cout<<"\n\n\t\t\t\tIs your character Brazilian?(Yes/No) : ";

                    cin>>choice;

                    if(choice=="Yes" || choice=="yes")

                    {

                        brazilian();

                    }

                    else if(choice=="No" || choice=="no")

                    {

                        cout<<"\n\n\t\t\t\t"<<"Is your character play for a German club(Yes/No) : ";

                        cin>>choice;

                        if(choice=="Yes" || choice=="yes")

                        {

                            Germanclub();

                        }

                        else if(choice=="No" || choice=="no")

                        {

                        }

                    }

                }

            }

        }

    }

}



///-------------------------------------------------------------------------------------------------------------



void footballers::Germanclub()

{



}



///-----------------------------------------------------------------------------------------------------------------------



void footballers::brazilian()

{

    system("CLS");

    system("color 62");

    cout<<"\n\n\n\t\t\tHad your character moved to PSG with a highest transfer ever?(Yes/No/dk(don't know)) : ";

    cin>>choice;

    if(choice=="Yes" || choice=="yes")

    {

        get_data("Neymar Jr","Brazil","PSG",10,"Forward");

        put_data();

    }

    else if(choice=="No" || choice=="no" || choice=="dk")

    {

        cout<<"\n\n\t\t\tDoes your character famous for his free style and hair style?(Yes/No) : ";

        cin>>choice;

        if(choice=="Yes" || choice=="yes")

        {

            get_data("Neymar Jr","Brazil","PSG",10,"Forward");

            put_data();

        }

        else if(choice=="No" || choice=="no")

        {

            cout<<"\n\n\t\t\tDoes he considered as one of the greatest right backs of all time and the most\n\t\t\tdecorated player in the history of football with 41 trophies?(Yes/No) : ";

            cin>>choice;

            if(choice=="Yes" || choice=="yes")

            {

                get_data("Dani Alves","Brazil","São Paulo(is), FCB(was) and PSG(was)",10,"Right back/Winger");

                put_data();

            }

            else if(choice=="No" || choice=="no")

            {

                cout<<"\n\n\t\t\t\tIs your character a captain?(Yes/No) : ";

                cin>>choice;

                if(choice=="Yes" || choice=="yes")

                {

                    get_data("Thiago Silva","Brazil","Chelsea F.C",14,"Central back");

                    put_data();

                }

                else if(choice=="no" || choice=="No")

                {

                    cout<<"\n\n\t\t\t\tDoes your character has long and curly hairs?(Yes/No) : ";

                    cin>>choice;

                    if(choice=="Yes" || choice=="yes")

                    {

                        cout<<"\n\n\t\t\t\tDoes your character link to Arsenal?(Yes/No) : ";

                        cin>>choice;

                        if(choice=="Yes" || choice=="yes")

                        {

                            cout<<"\n\n\t\t\t\tIs your character a defender?(Yes/No) : ";

                            cin>>choice;

                            if(choice=="Yes" || choice=="yes")

                            {

                                get_data("David Luiz","Brazil","Arsenal F.C",23,"Defender");

                                put_data();

                            }

                            else

                            {

                                get_data("Willian","Brazil","Arsenal F.C",12,"Att:midfielder");

                                put_data();

                            }

                        }

                        else if(choice=="No" || choice=="no")

                        {

                            get_data("Marcelo Viera","Brazil","Real Madrid C.F",12,"Right back");

                            put_data();

                        }

                    }



                    else if(choice=="No" || choice=="no")

                    {

                        get_data("Oscar","Brazil","Shanghai Port",8,"Right back");

                            put_data();

                    }

                }

            }

        }

    }

}



///------------------------------------------------------------------------------------------------------------------

void footballers::realMadrid()

{

    system("CLS");

    system("color F6");

    cout<<"\n\n\n\t\t\t\tIs your character a defender?(Yes/No) : ";

    cin>>choice;

    if(choice=="Yes" || choice=="yes")

    {

        cout<<"\n\n\t\t\t\tDoes he love the number 4?(Yes/No) :";

        cin>>choice;

        if(choice=="Yes" || choice=="yes")

        {

            get_data("Sergio Ramos","Spain","Real Madrid",4,"Defender");

            put_data();

        }

        else if(choice=="No" || choice=="no")

        {

            cout<<"\n\n\t\t\t\tIs he a captain?(Yes/No) : ";

            cin>>choice;

            if(choice=="Yes" || choice=="yes")

            {

                get_data("Sergio Ramos","Spain","Real Madrid",4,"Defender");

                put_data();

            }

            else if(choice=="No" || choice=="no")

            {

                cout<<"\n\n\t\t\t\tDoes your character play as a right-back?(Yes/No) : ";

                cin>>choice;

                if(choice=="Yes" || choice=="yes")

                {

                    get_data("Dani Carvajal","Spain","Real Madrid",2,"Defender");

                    put_data();

                }

                else if(choice=="No" || choice=="no")

                {

                    cout<<"\n\n\t\t\t\tLeft back?(Yes/No) :";

                    cin>>choice;

                    if(choice=="Yes" || choice=="yes")

                    {

                        cout<<"\n\n\t\t\t\tIs he Brazilian?(Yes/No) :";

                        cin>>choice;

                        if (choice=="Yes" || choice=="yes")

                        {

                           get_data("Marcelo Vierra","Brazil","Real Madrid",12,"Defender");

                           put_data();

                        }

                        else

                        {

                        }

                    }

                    else if(choice=="No" || choice=="no")

                    {

                        get_data("Rafael Verane","France","Real Madrid",5,"Defender");

                        put_data();

                    }

                }

            }

        }



    }

    else if(choice=="No" || choice=="no")

    {

        cout<<"\n\n\t\t\t\tIs your character Croatian?(Yes/No) :";

        cin>>choice;

        if(choice=="Yes" || choice=="yes")

        {

            cout<<"\n\n\t\t\t\tIs he a defensive midfielder?(Yes/No) :";

            cin>>choice;

            if(choice=="Yes" || choice=="yes")

            {

                get_data("Luka Modric","Croatia","Real Madrid",10,"Midfielder");

                put_data();

            }

            else

            {

                get_data("Luka Modric","Croatia","Real Madrid",10,"Midfielder");

                put_data();

            }

        }

        else if(choice=="No" || choice=="no")

        {

            cout<<"\n\n\t\t\t\tIs your character Belgian?(Yes/No) :";

            cin>>choice;

            if(choice=="Yes" || choice=="yes")

            {

                cout<<"\n\n\t\t\t\tDid he ever play for Chelsea?(Yes/No) : ";

                cin>>choice;

                if(choice=="Yes" || choice=="yes")

                {

                    get_data("Eden Hazard","Belgium","Real Madrid",7,"Forward");

                    put_data();

                }

                else if(choice=="No" || choice=="no")

                {

                       get_data("Thibaut Courtois","Belgium","Real Madrid",1,"Goalkeeper");

                       put_data();

                }

            }

            else if(choice=="No" || choice=="no")

            {

                cout<<"\n\n\t\t\t\tDoes he a striker?(Yes/No) : ";

                cin>>choice;

                if(choice=="Yes" || choice=="yes")

                {

                     cout<<"\n\n\t\t\t\tIs your character a Muslim?(Yes/No) : ";

                     cin>>choice;

                     if(choice=="Yes" || choice=="yes")

                     {

                         get_data("Karim Benzema","France","Real Madrid",9,"Forward");

                         put_data();

                     }

                     else if(choice=="No" || choice=="no")

                     {

                         cout<<"\n\n\t\t\t\tIs your character a former chelsea player?(Yes/No) : ";

                         cin>>choice;

                         if(choice=="Yes" || choice=="yes")

                         {

                              get_data("Eden Hazard","Belgium","Real Madrid",7,"Forward");

                              put_data();

                         }

                         else if(choice=="No" || choice=="no")

                         {

                             cout<<"\n\n\t\t\t\tIs your character wear number 9?(Yes/No) : ";

                             cin>>choice;

                             if(choice=="Yes" || choice=="yes")

                             {

                                 get_data("Karim Benzema","France","Real Madrid",9,"Forward");

                                 put_data();

                             }

                             else if(choice=="No" || choice=="no")

                             {

                                 get_data("Vinícius Júnior","Brazil","Real Madrid",20,"Forward");

                                 put_data();

                             }

                         }

                     }

                }

                else if(choice=="No" || choice=="no")

                {

                    cout<<"\n\n\t\t\t\tDoes he play as a midfielder?(Yes/No) :";

                    cin>>choice;

                    if(choice=="Yes" || choice=="yes")

                    {

                        cout<<"\n\n\t\t\t\tIs your character German?(Yes/No) :";

                        cin>>choice;

                        if(choice=="Yes" || choice=="yes")

                        {

                            get_data("Toni Kroos","Germany","Real Madrid",8,"Midfielder");

                            put_data();

                        }

                        else if(choice=="No" || choice=="no")

                        {

                            cout<<"\n\n\t\t\t\tIs your character Spanish?(Yes/No) :";

                            cin>>choice;

                            if(choice=="Yes" || choice=="yes")

                            {

                                cout<<"\n\n\t\t\t\tDoes he also play as an attacker?(Yes/No) :";

                                cin>>choice;

                                if(choice=="Yes" || choice=="yes")

                                {

                                    get_data("Isco","Spain","Real Madrid",22,"Att/Midfielder");

                                    put_data();

                                }

                                else

                                {

                                   get_data("Lucas","Spain","Real Madrid",17,"Midfielder");

                                   put_data();

                                }

                            }

                            else if(choice=="No" || choice=="no")

                            {

                                cout<<"\n\n\t\t\t\tIs your character belongs to Brazilian ethnicity?(Yes/No) : ";

                                cin>>choice;

                                if(choice=="Yes" || choice=="yes")

                                {

                                    get_data("Casemiro","Brazil","Real Madrid",14,"Midfielder");

                                    put_data();

                                }

                                else if(choice=="No" || choice=="no")

                                {

                                    get_data("Nacho","Spain","Real Madrid",6,"Midfielder");

                                    put_data();

                                }

                            }

                        }

                    }

                    else if(choice=="No" || choice=="no")

                    {

                        get_data("Thibaut Courtois","Belgium","Real Madrid",1,"Goalkeeper");

                        put_data();

                    }

                }

            }

         }

    }

}





///-----------------------------------------------------------------------------------------------------------



void footballers::EPL()

{

    system("CLS");

    cout<<"\n\n\n\t\t\t\tIs your character linked with Manchester? (Yes/No) :";           ///Manchester

    cin>>choice;

    if(choice=="Yes" || choice=="yes")

    {

        cout<<"\n\n\t\t\t\tIs your character a midfielder : ";

        cin>>choice;

        if(choice=="Yes" || choice=="yes")

        {

            cout<<"\n\n\t\t\t\tIs your character Muslim? (Yes/No) : ";

            cin>>choice;

            if(choice=="Yes" || choice=="yes")

            {

                cout<<"\n\n\t\t\t\tIs your character French? (Yes/No) : ";

                cin>>choice;

                if(choice=="Yes" || choice=="yes")

                {

                    get_data("Paul Pogba","France","Man Utd",6,"Striker");

                    put_data();

                }

                else if(choice=="No" || choice=="no")

                {

                    get_data("Paul Pogba","France","Man Utd",6,"Striker");

                    put_data();

                }

            }

            else if(choice=="No" || choice=="no")

            {

                cout<<"\n\n\t\t\t\tIs your character Belgian? (Yes/No) : ";

                cin>>choice;

                if(choice=="Yes" || choice=="yes")

                {

                    get_data("Kevin de Bryune","Belgium","Man city",6,"Midfielder");

                    put_data();

                }

                else if(choice=="No" || choice=="no")

                {

                    cout<<"\n\n\t\t\t\tGerman ? (Yes/No) :";

                    cin>>choice;

                    if(choice=="Yes" || choice=="yes")

                    {

                        get_data("Ilkay Gundogan","Germany","Man City",8,"Midfielder");

                            put_data();

                    }

                    else if(choice=="No" || choice=="no")

                    {

                        get_data("Bruno Fernandez","Portugal","Man Utd",18,"Midfielder");

                        put_data();

                    }

                }

            }

        }

        else if(choice=="No" || choice=="no")

        {



            cout<<"\n\n\t\t\t\tIs your character play for Man city? (Yes/No) : ";

            cin>>choice;

            if(choice=="Yes" || choice=="yes")

            {

                system("CLS");

                system("color 9F");

                cout<<"\n\n\n\t\t\t\tIs your character play for Man city? (Yes/No) : Yes \n";

                cout<<"\n\n\t\t\t\tIs your character striker? (Yes/No) : ";

                cin>>choice;

                if(choice=="Yes" || choice=="yes")

                {

                    cout<<"\n\n\t\t\t\tIs your character Argentinian? (Yes/No) :";

                    cin>>choice;

                    if(choice=="Yes" || choice=="yes")

                    {

                        get_data("Sergio Aguero","Argentina","Man City",10,"Forward");

                        put_data();

                    }

                    else if(choice=="No" || choice=="no")

                    {

                        get_data("Riyad Mahrez","Algeria","Man City",26,"Forward");

                        put_data();

                    }

                }

            }

            else if(choice=="No" || choice=="no")

            {

                cout<<"\n\n\t\t\t\tIs your character Striker?(Yes/No) : ";

                cin>>choice;

                if(choice=="Yes" || choice=="yes")

                {

                    cout<<"\n\n\t\t\t\tIs your character have long hairs(Yes/No) :";

                    cin>>choice;

                    if(choice=="Yes" || choice=="yes")

                    {

                        get_data("Edison Cavani","Uruguay","Man Utd",10,"Forward");

                        put_data();

                    }

                    else if(choice=="No" || choice=="no")

                    {

                        cout<<"\n\n\t\t\t\tIs your character Muslim?(Yes/No) : ";

                        cin>>choice;

                        if(choice=="Yes" || choice=="yes")

                        {

                            get_data("Riyad Mahrez","Algeria","Man City",26,"Forward");

                            put_data();

                        }

                        else if(choice=="No" || choice=="no")

                        {

                            get_data("Sergio Aguero","Argentina","Man City",10,"Forward");

                            put_data();

                        }

                    }

                }

                else if(choice=="No" || choice=="no")

                {

                    cout<<"\n\n\t\t\t\tGoalKeeper?(Yes/No) :";

                    cin>>choice;

                    if(choice=="Yes" || choice=="yes")

                    {

                        cout<<"\n\n\t\t\t\tSpanish?(Yes/No) : ";

                        cin>>choice;

                        if(choice=="Yes" || choice=="yes")

                        {

                            get_data("David de Gea","Spain","Man Utd",1,"Goalkeeper");

                            put_data();

                        }

                        else if(choice=="No" || choice=="no")

                        {

                            get_data("Ederson Santana","Brazil","Man City",31,"Goalkeeper");

                            put_data();

                        }

                    }

                }

            }

        }

    }

    else if(choice=="No" || choice=="no")

    {

        cout<<"\n\n\t\t\t\tDoes your character belongs the"<<"\""<< "The Reds"<<"\""<<", Liverpool?(Yes/No) :";         ///Liverpool

        cin>>choice;

        if(choice=="Yes" || choice=="yes")

        {

            system("CLS");

            system("color 4F");

            cout<<"\n\n\n\t\t\t\tIs he a Muslim ?(Yes/No) :";

            cin>>choice;

            if(choice=="Yes" || choice=="yes")

            {

                get_data("Mohammad Salah","Egypt","Liverpool",11,"Forward");

                put_data();

            }

            else if(choice=="No" || choice=="no")

            {

                cout<<"\n\n\t\t\t\tIs your character a defender?(Yes/No) :";

                cin>>choice;

                if(choice=="Yes" || choice=="yes")

                {

                    cout<<"\n\n\t\t\t\tIs he from Holland?(Yes/No) : ";

                    cin>>choice;

                    if(choice=="Yes" || choice=="yes")

                    {

                        get_data("Virgil van dijk","Holland","Liverpool",4,"Defender");

                        put_data();

                    }

                    else if(choice=="No" || choice=="no")

                    {

                        get_data("Ozan Kabak","Turkey","Liverpool",19,"Defender");

                        put_data();

                    }

                }

                else if(choice=="No" || choice=="no")

                {

                    cout<<"\n\n\t\t\t\tDoes your character a striker?(Yes/No) :";

                    cin>>choice;

                    if(choice=="yes" || choice=="Yes")

                    {

                        cout<<"\n\n\t\t\t\tDoes he speak Arabic?(Yes/No) : ";

                        cin>>choice;

                        if(choice=="Yes" || choice=="yes")

                        {

                            get_data("Mohammad Salah","Egypt","Liverpool",11,"Forward");

                            put_data();

                        }

                        else if(choice=="No" || choice=="no")

                        {

                            cout<<"\n\n\t\t\t\tBrazilian?(Yes/No):";

                            cin>>choice;

                            if(choice=="Yes" || choice=="yes")

                            {

                                get_data("Roberto Firmino","Brazil","Liverpool",9,"Forward");

                                put_data();

                            }

                            else

                            {

                                get_data("Diego Jota","Portugal","Liverpool",20,"Forward");

                                put_data();

                            }

                        }

                    }

                  }

            }

        }





        else if(choice=="No" || choice=="no")

        {

            cout<<"\n\n\t\t\t\tIs your character from Wales? (Yes/No) : ";

            cin>>choice;

            if(choice=="Yes" || choice=="yes")

            {

                cout<<"\n\n\t\t\t\tDoes he a striker?(Yes/No) : ";

                cin>>choice;

                if(choice=="Yes" || choice=="yes")

                {

                    get_data("Gareth Bale","Wales","Totenham",11,"Forward");

                    put_data();

                }

                else if(choice=="No" || choice=="no")

                {

                    cout<<"\n\n\t\t\t\tDoes he play for Tottenham?(Yes/No) :";

                    cin>>choice;

                    if(choice=="Yes" || choice=="yes" || choice=="No" || choice=="no")

                    {

                        get_data("Gareth Bale","Wales","Tottenham",11,"Forward");

                        put_data();

                    }

                }

            }

            else if(choice=="No" || choice=="no")

            {

                cout<<"\n\n\t\t\t\tIs your character from England?(Yes/No) :";

                cin>>choice;

                if(choice=="Yes" || choice=="yes")

                {

                    cout<<"\n\n\t\t\t\tIs he a Striker?(Yes/No) : ";

                    cin>>choice;

                    if(choice=="Yes" || choice=="yes")

                    {

                        get_data("Hary Kane","England","Totenham",10,"Forward");

                        put_data();

                    }

                    else if(choice=="No" || choice=="no")

                    {

                        cout<<"\n\n\t\t\t\tDoes he play for Totenham?(Yes/No) :";

                        cin>>choice;

                        if(choice=="Yes" || choice=="yes" || choice=="No" || choice=="no")

                       {

                            get_data("Gareth Bale","Wales","Totenham",11,"Forward");

                            put_data();

                       }

                    }

               }

               else if(choice=="No" || choice=="no")

               {

                   cout<<"\n\n\t\t\t\tIs your character Egyptian? (Yes/No) :" ;

                   cin>>choice;

                   if(choice=="Yes" || choice=="yes")

                   {

                       cout<<"\n\n\t\t\t\tDoes he play for liverpool?(Yes/No) :";

                       cin>>choice;

                       if(choice=="Yes" || choice=="No" || choice=="no" || choice=="yes")

                       {

                           get_data("Mohammad Salah","Egypt","Liverpool",11,"Forward");

                           put_data();

                       }

                   }

                   else

                    {

                        system("CLS");

                        system("color 4F");

                        cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\tI think of Nothing....";}

               }

           }

        }

    }

}





///-------------------------------------------------------------------------------------------------------------



        ///Barcelona players

void footballers::fcbarcelona()

{

    system("color 9C");

    cout<<"\n\n\t\t\t\t"<<"Is your character win the golden ball and golden shoe six times.(Yes/No) : ";

    cin>>choice;

    if(choice=="Yes" || choice=="yes")

    {

        cout<<"\n\n\t\t\t\t"<<"He is also an Argentinian,isn't he?(Yes/No) : ";

        cin>>choice;

        if(choice=="Yes" || choice=="yes")

        {

            cout<<"\n\n\t\t\t\t"<<"All time top scorer of barca....?(Yes/No/dk(don't know)) : ";

            cin>>choice;

            if(choice=="Yes" || choice=="yes")

            {

                get_data("Lionel Messi","Argentina","FC barcelona",10,"Forward");

                put_data();

            }

            if(choice=="No" || choice=="no" || choice=="dk" || choice=="don't know")

            {

                cout<<"\n\n\t\t\t\t"<<"Does he wear number 10(Yes/No) : ";

                cin>>choice;

               if(choice=="Yes" || choice=="yes")

               {

                  get_data("Lionel Messi","Argentina","FC barcelona",10,"Forward");

                  put_data();

               }

               if(choice=="No" || choice=="no")

               {

                  get_data("Cristiano Ronaldo","Portugal","Juventus",7,"Forward");

            put_data();

               }

            }

        }

        else if(choice=="No" || choice=="no")

        {

            get_data("Cristiano Ronaldo","Portugal","Juventus",7,"Forward");

            put_data();

        }



    }

    else if(choice=="No" || choice=="no")

    {

        cout<<"\n\n\t\t\t\t"<<"Did he play in 2018 FIFA world cup(Yes/No) : ";

        cin>>choice;

        if(choice=="Yes" || choice=="yes")

        {

            cout<<"\n\n\t\t\t\t"<<"French guy?(Yes/No) : ";

            cin>>choice;

            if(choice=="Yes" || choice=="yes")

            {

                cout<<"\n\n\t\t\t\t"<<"Does he play as a striker?(Yes/No/dk(don't know)) : ";

                cin>>choice;

                if(choice=="Yes" || choice=="yes" || choice=="probably" || choice=="Probably")

                {

                    cout<<"\n\n\t\t\t\t"<<"Does your character a Muslim(Yes/No) :";

                    cin>>choice;

                    if(choice=="Yes" || choice=="yes")

                    {

                        get_data("Ousmane Dembele","France","FC barcelona",11,"Forward");

                        put_data();

                    }

                    if(choice=="No" || choice=="no")

                    {

                      get_data("Antoine Griezman","France","FC barcelona",7,"Forward");

                      put_data();

                    }

                }

                else if(choice=="No" || choice=="no" || choice=="don't know" || choice=="dk")

                {

                  get_data("Samuel Umittitti","France","FC barcelona",23,"Defender");

                  put_data();

                }

            }



            else if(choice=="No" || choice=="no")

            {

                cout<<"\n\n\t\t\t\t"<<"Spanish guy(Yes/No) : ";

                cin>>choice;

                if(choice=="Yes" || choice=="yes")

                {

                    cout<<"\n\n\t\t\t\t"<<"Is your character a defender?(Yes/No) : ";

                    cin>>choice;

                    if(choice=="Yes" || choice=="yes")

                    {

                        cout<<"\n\n\t\t\t\t"<<"Does he married to a singer?(Yes/No) : ";

                        cin>>choice;

                        if(choice=="Yes" || choice=="yes")

                        {

                            get_data("Gerrard Pique","Spain","FC barcelona",3,"Defender");

                            put_data();

                        }

                        else if(choice=="No" || choice=="no")

                        {

                            cout<<"\n\n\t\t\t\t"<<"Is your character a former Manchester Utd player? (Yes/No) : ";

                            cin>>choice;

                            if(choice=="Yes" || choice=="yes")

                            {

                                get_data("Gerrard Pique","Spain","FC barcelona",3,"Defender");

                                put_data();

                            }

                            else if(choice=="No" || choice=="no")

                            {

                                get_data("Jordi Alba","Spain","FC barcelona",3,"Left back");

                                put_data();

                            }

                         }

                     else if(choice=="No" || choice=="no")

                     {

                        cout<<"\n\n\t\t\t\t"<<"Does your character play as a defender as well as midfielder? (Yes/No/probably) : ";

                        cin>>choice;

                        if(choice=="Yes" || choice=="yes")

                        {

                            get_data("Sergio Roberto","Spain","Fc Barcelona",4,"Defender/D.midfielder");

                            put_data();

                        }

                        if(choice=="No" || choice=="no" || choice=="Probably" || choice=="probably")

                          {

                              cout<<"\n\n\t\t\t\t"<<"Is your character pay in left back?(Yes/No/Probably) : ";

                              cin>>choice;

                              if(choice=="Yes" || choice=="yes" || choice=="probably" || choice=="probably")

                                {

                                    get_data("Jordi Alba","Spain","Fc Barcelona",18,"Defender");

                                    put_data();

                                }

                              if(choice=="No" || choice=="no")

                                {

                                   get_data("Sergio Roberto","Spain","Fc Barcelona",20,"Defender/D.midfielder");

                                   put_data();

                                }

                           }

                        }

                     }



                     else if(choice=="No" || choice=="no")

                     {

                        cout<<"\n\n\t\t\t\t"<<"Did he play in 2010 FIFA world cup final?(Yes/No) : ";

                        cin>>choice;

                        if(choice=="Yes" || choice=="yes")

                        {

                            cout<<"\n\n\t\t\t\t"<<"He is a midfielder....Ahan?(Yes/No) : ";

                            cin>>choice;

                           if(choice=="Yes" || choice=="yes")

                           {

                                get_data("Sergio busquest","Spain","Fc Barcelona",5,"D.midfielder");

                                put_data();

                           }

                           else

                            {

                                get_data("Sergio Roberto","Spain","Fc Barcelona",20,"Defender/D.midfielder");

                                put_data();

                            }

                         }

                         else

                         {

                             get_data("Sergio Roberto","Spain","Fc Barcelona",20,"Defender/D.midfielder");

                                put_data();

                         }

                      }

                }

        else if(choice=="No" || choice=="no")

        {

            cout<<"\n\n\t\t\t\t"<<"Brazilian....?(Yes/No) : ";

            cin>>choice;

            if(choice=="Yes" || choice=="yes")

            {

                get_data("Philippe Coutinho","Brazil","Fc Barcelona",14,"Forward");

                put_data();

            }

            if(choice=="No" || choice=="no")

            {

                cout<<"\n\n\t\t\t\t"<<"Does he a goalkeeper?(Yes/No) : ";

                cin>>choice;

                if(choice=="Yes" || choice=="yes")

                {

                   cout<<"\n\n\t\t\t\t"<<"Does he belongs to Germany?(Yes/No) : ";

                   cin>>choice;

                   if(choice=="Yes" || choice=="yes")

                    {

                       get_data("Mar-Ter-Stegen","Germany","Fc Barcelona",1,"Goalkeeper");

                       put_data();

                    }

                   else

                   {

                       system("CLS");

                       system("color 1F");

                       cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\tI think of Neto(Spanish).";

                   }

                }

            }

        }

            }

        }

        else if(choice=="No" || choice=="no")

        {

            cout<<"\n\n\t\t\t\tIs your character young?(Yes/No) :";

            cin>>choice;

            if(choice=="Yes" || choice=="yes")

            {

                cout<<"\n\n\t\t\t\tIs your character black?(Yes/No) : ";

                cin>>choice;

                if(choice=="Yes" || choice=="yes")

                {

                    get_data("Ansu Fati","Spain","Fc Barcelona",22,"Forward");

                       put_data();

                }

                else if(choice=="No" || choice=="no")

                {

                    get_data("Pedri Gonzalez","Spain","Fc Barcelona",16,"Midfielder");

                       put_data();

                }

            }

            else if(choice=="No" || choice=="no")

            {

                system("CLS");

                system("color 4F");

                cout<<"\n\n\n\n\n\n\t\t\t\t\tI think of nothing.....";

            }

        }

    }

}



///*************************----------------------------------------------------------------------------------------------------------



void footballers::portuguese()

{

    system("CLS");

    system("color 4E");

    cout<<"\n\n\n\t\t\t\t"<<"Does your character play for Juventus?(Yes/No):";

    cin>>choice;

    if(choice=="Yes" || choice=="yes")

    {

        cout<<"\n\n\t\t\t\t"<<"Does he wear the number 7 jersey?(Yes/No) : ";

        cin>>choice;

        if(choice=="Yes" || choice=="yes")

        {

            cout<<"\n\n\t\t\t\t"<<"Highest paid athlete naa?(Yes/No/Probably) : ";

            cin>>choice;

            if(choice=="Yes" || choice=="yes")

            {

                get_data("Cristiano Ronaldo","Portugal","Juventus",7,"Forward");

                put_data();

            }

            if(choice=="No" || choice=="no" || choice=="Probably" || choice=="probably")

                {

                    cout<<"\n\n\t\t\t\t"<<"Is your character the only five times UCL winner?(Yes/No) : ";

                    cin>>choice;

                    if(choice=="Yes" || choice=="yes" || choice=="Probably" || choice=="probably")

                    {

                        get_data("Cristiano Ronaldo","Portugal","Juventus",7,"Forward");

                        put_data();

                    }

                    else if(choice=="No" || choice=="No")

                    {

                        cout<<"\n\n\t\t\t\t"<<"Did he ever play for Real Madrid?(Yes/No) : ";

                        cin>>choice;

                        if(choice=="Yes" || choice=="yes")

                        {

                            get_data("Cristiano Ronaldo","Portugal","Juventus",7,"Forward");

                            put_data();

                        }

                        if(choice=="No" || choice=="no")

                        {

                            cout<<"\n\n\t\t\t\t"<<"Does your character a five times ballon d'or winner(Yes/No/Probably) : ";

                            cin>>choice;

                            if(choice=="Yes" || choice=="yes")

                            {

                                get_data("Cristiano Ronaldo","Portugal","Juventus",7,"Forward");

                                put_data();

                            }

                        }

                   }

            }

        }

        else if(choice=="No" || choice=="no")

        {

            cout<<"\n\n\t\t\t\t"<<"Did he ever play for Real Madrid?(Yes/No) : ";

            cin>>choice;

            if(choice=="Yes" || choice=="yes")

            {

                get_data("Cristiano Ronaldo","Portugal","Juventus",7,"Forward");

                put_data();

            }

            if(choice=="No" || choice=="no")

            {

                cout<<"\n\n\t\t\t\t"<<"Does your character a five times ballon d'or winner(Yes/No/Probably) : ";

                cin>>choice;

                if(choice=="Yes" || choice=="yes")

                {

                    get_data("Cristiano Ronaldo","Portugal","Juventus",7,"Forward");

                    put_data();

                }

                else if(choice=="No" || choice=="no" || choice=="Probably" || choice=="probably")

                {

                    cout<<"\n\n\t\t\t\t"<<"Is your character the only five times UCL winner?(Yes/No) : ";

                    cin>>choice;

                    if(choice=="Yes" || choice=="Yes")

                    {

                        get_data("Cristiano Ronaldo","Portugal","Juventus",7,"Forward");

                        put_data();

                    }

                    else

                    {

                        system("CLS");

                        system("color 4F");

                        cout<<"\n\n\n\n\n\n\t\t\t\t\tAre you mocking me?\n";

                        cout<<"\t\t\t\t\tThere is no player..";

                    }

                }

            }

        }

    }

    else if(choice=="No" || choice=="no")

    {

        cout<<"\n\n\t\t\t\tDid he link to Real Madrid? (Yes/No) : ";

        cin>>choice;

        if(choice=="Yes" || choice=="yes")

        {

            cout<<"\n\n\t\t\t\tIs he a defender? (Yes/No) : ";

            cin>>choice;

            if(choice=="Yes" || choice=="yes")

            {

                get_data("Pepe","Portugal","Real Madrid",3,"Defender");

                put_data();

            }

            if(choice=="No" || choice=="no")

            {

                cout<<"\n\n\t\t\t\tDoes he famous for his aggression? (Yes/No) :";

                cin>>choice;

               if(choice=="Yes" || choice=="yes" || choice=="No" || choice=="no")

               {

                   get_data("Pepe","Portugal","Real Madrid",3,"Defender");

                   put_data();

               }

            }

        }

        else if(choice=="No" || choice=="no")

        {

            cout<<"\n\n\t\t\t\tDoes your character link to Barclays Premier league?(Yes/No) : ";

            cin>>choice;

            if(choice=="Yes" || choice=="yes")

            {

               cout<<"\n\n\t\t\t\tManchester? (Yes/No) :";

                cin>>choice;

               if(choice=="Yes" || choice=="yes")

               {

                   cout<<"\n\n\t\t\t\tIs he a defender? (yes/No) :";

                   cin>>choice;

                   if(choice=="Yes" || choice=="yes")

                   {

                      get_data("Pepe","Portugal","Real Madrid",3,"Defender");

                      put_data();

                   }

                   if(choice=="No" || choice=="no")

                   {

                      cout<<"\n\n\t\t\t\tHe is a Midfielder...?(Yes/No) : ";

                      cin>>choice;

                      if(choice=="Yes" || choice=="yes" || choice=="No" || choice=="no")

                       {

                          get_data("Bruno Farnandez","Portugal","Man Utd",3,"midfielder");

                          put_data();

                       }

                   }

               }

                else if(choice=="No" || choice=="no")

                {

                   cout<<"\n\n\t\t\t\tDoes he play for liverpool? (Yes/No) :";

                   cin>>choice;

                   if(choice=="Yes" || choice=="yes")

                     {

                      get_data("Diego Jota","Portugal","Liverpool",3,"Striker");

                      put_data();

                    }

                   if(choice=="No" || choice=="no")

                   {

                       system("CLS");

                       system("color 4F");

                      cout<<"\n\n\n\n\n\n\t\t\t\t\tI think of nothing.....";

                   }

                }

            }

            if(choice=="No" || choice=="no")

            {

                system("CLS");

                system("color 40");

                cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tI think of nothing.....";

            }

        }

    }

}

///---------------------------------------------------------------------------------------------------------



int main()

{

    startup();

     deployment();

    //system("Pause");

    return 0;

}

void startup()

{

    system("color F0");

    for(int i=8;i>=1;i-- )

    {

        for(int j=1;j<=i;j++)

        {

            cout<<(char)219;

        }

        cout<<endl;

    }

    title();

    cout<<setw(60)<<"Loading\n\n";

    char c=178;



    cout.width(35);

    for(int i=0;i<40;i++)

     {

        cout<<c;

        if(i<=10)

        {

            Sleep(200);

        }

        if(i>10 && i<=25)

        {

            Sleep(50);

        }

        if(i>25 && i<=35)

        {

            Sleep(300);

        }

        if(i>35)

        {

            Sleep(50);

        }

    }

    cout<<"\n";

    cout.width(100);

    cout<<right<<"Name:"<<" Umer Rasheed Mahar\n";

    cout.width(103);

    cout<<right<<"Roll No:"<<" 20SW033\n";

    Sleep(2000);

}

void deployment()

{

         char ch;

    cout<<"\n\n\n\nPress Enter to continue...";

    if(getch()==13)

    {

        do

        {

            system("CLS");

            system("color 0F");

            cout<<"\n\n\n\n\n\n\n\n\n\n\n";

            cout<<setw(80)<<"Think about a footballer or a billionaire\n\n";

            cout<<setw(76)<<"Challenge me, I'll read your mind\n";

            cout<<"\n\n\n\n\n\n\n\n\nPress Enter to challenge";

            if(getch()==13)

            {

                system("CLS");

                system("color F0");

                    char c=178;

                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";

                cout.width(35);

                for(int i=0;i<40;i++)

                {

                    cout<<c;

                    if(i<=5)

                    {

                        Sleep(150);

                    }

                    if(i>5 && i<=25)

                    {

                        Sleep(50);

                    }

                    if(i>25 && i<=35)

                    {

                        Sleep(30);

                    }

                    if(i>35)

                    {

                        Sleep(300);

                    }

                 }

                system("CLS");

                system("color 0F");

                string op;

                cout<<"\n\n\n";

                cout<<setw(86)<<"Is your character's fame linked with football?(Yes/No) :";

                cin>>op;

                if(op=="Yes" || op=="yes")

                {

                    footballers f;

                    f.link();

                }

                else if(op=="No" || op=="no")

                {

                  cout<<"\n\n"<<setw(95)<<"Is your character the boss of an important corporation?(Yes/No) :";

                  cin>>op;

                  if(op=="Yes" || op=="yes")

                   {

                        billionaire b;

                        b.link();

                   }

                }

            }

            cout<<"\n\n\n\n\n\n\n\nTo continue, press c or press e to exit..";

        }while(getch()=='c');

    }

}

void title()

{



    cout<<setw(30)<<"*********"<<setw(13)<<"*********"<<setw(5)<<"*"<<setw(8)<<"*"<<setw(13)<<"*********"<<setw(13)<<"*********"<<setw(14)<<"*********\n";

    cout<<setw(22)<<"*"<<setw(8)<<"*"<<setw(5)<<"*"<<setw(14)<<"*"<<setw(6)<<"*"<<setw(6)<<"*"<<setw(17)<<"*"<<setw(10)<<"*\n";

    cout<<setw(22)<<"*"<<setw(8)<<"*"<<setw(5)<<"*"<<setw(19)<<"*   *"<<setw(7)<<"*"<<setw(17)<<"*"<<setw(10)<<"*\n";

    cout<<setw(22)<<"*"<<setw(8)<<"*"<<setw(5)<<"*"<<setw(18)<<"* *"<<setw(8)<<"*"<<setw(17)<<"*"<<setw(10)<<"*\n";

    cout<<setw(30)<<"*********"<<setw(13)<<"*********"<<setw(9)<<"*"<<setw(9)<<"*"<<setw(17)<<"*"<<setw(10)<<"*\n";

    cout<<setw(22)<<"*"<<setw(21)<<"*"<<setw(9)<<"*"<<setw(9)<<"*"<<setw(17)<<"*"<<setw(10)<<"*\n";

    cout<<setw(22)<<"*"<<setw(21)<<"*"<<setw(9)<<"*"<<setw(9)<<"*"<<setw(17)<<"*"<<setw(10)<<"*\n";

    cout<<setw(22)<<"*"<<setw(21)<<"*"<<setw(9)<<"*"<<setw(9)<<"*"<<setw(17)<<"*"<<setw(10)<<"*\n";

    cout<<setw(22)<<"*"<<setw(21)<<"*********"<<setw(9)<<"*"<<setw(17)<<"*********"<<setw(13)<<"*********"<<setw(14)<<"*********\n";

        cout<<"\n\n";

}
