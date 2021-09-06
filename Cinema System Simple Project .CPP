Files::

1. MoviesList: 

Id #	Movie Name	Price

  
001	Sandandreas	400
002	Kaabil		350
003	Aliens		400
004	Fear		400
005	Heaven		350
006	Limelight	400
007	Mermaids	400
008	Argo		350
009	GodFellas	400
010	Wolf		400
011	Devil		350
012	Seven		400
013	Donkey King	400
014	Planes		350
015	Suddenly	400
MoviesRecord:

sws	0	0	0
Rana	0	0	0
salim	0	0	0
Nawab	0	0	0
Ali	0	0	0
Jutt	0	0	0


#include<iostream>

#include<cstdio>

#include<fstream>

#include<cstdlib>

#include<conio.h>

using namespace std;

void StartingPage();

void Welcome();

void BookTicket();

void ShowTickets();

void AddNewMovie();

void EditMovie();

void DeleteMovieList();

void ShowMovieList();

void Welcome()

{

    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tCinema System";

    getch();system("cls");

    StartingPage();

}

void StartingPage() {

cout << "Welcome To Movie Ticket Booking System" << endl << endl;

    cout << "Menu" << endl;	

    int chooseOneFromMenu = 0;

    int num = 1;

    int fin = 0;



    for (int i = 0; i < 1; i++) {

        fin = num;

        cout << fin << ". Book Ticket" << endl;

        fin += num;

        cout << fin << ". Show Tickets" << endl;

        fin += num;

        cout << fin << ". Add New Movie" << endl;

        fin += num;

        cout << fin << ". Delete Movie" << endl;

        fin += num;

        cout << fin << ". Show Movie List" << endl;

        cout << "Choose One: ";

    }

    cin >> chooseOneFromMenu;



    switch (chooseOneFromMenu)

    {

    case 1:

       { BookTicket();

        break;}

    case 2:

       { ShowTickets();

        break;}

    case 3:

        {AddNewMovie();

        break;}

    case 4:

        {DeleteMovieList();

        break;}

    case 5:

        {ShowMovieList();

        break;}

	default: {cout<<"Invalid choice\n\n";}}

}

int main(){

   Welcome();

   StartingPage();

}

void BookTicket() {



    system("cls");

    string c_name;

    cout<<"\nEnter Your Name"<<endl;cin>>c_name;

    string c_phone;

    cout<<"\nEnter Your Phone"<<endl;cin>>c_phone;

    string c_seat;

    cout<<"\nEnter Your Seat i-e:'A1','C3'"<<endl;cin>>c_seat;

    string getId;

    cout<<"\nEnter Movie Id"<<endl;cin>>getId;

    char ch;	

	ofstream Rout;

	Rout.open("MoviesRecord.txt",ios::app);

	if(Rout.is_open())

	{

		Rout<<"\n"<<c_name<<"\t"<<c_phone<<"\t"<<c_seat<<"\t"<<getId;

	}

	system("cls");

	char u_ch;

       cout<<"\n\n\n\n\t\t\tYour Ticket has been Booked\n\n\n\n\n\n\n";

       cout<<"Enter 'm' to go to main menu or anyother key to exit\n\n";cin>>u_ch;

    switch(u_ch)

    {

    	case 'm': {system("cls");StartingPage();

			break;

		}

    	default: cout<<"Invalid Choice\n\n";

	}

}

void ShowTickets() {

	system("cls");

   ifstream Rin;

   Rin.open("MoviesRecord.txt");

   if(Rin.is_open())

   {

   	cout<<Rin.rdbuf();

   }

	else

	{cout<<"Error in opening file";}

	char u_ch;

	   cout<<"\n\n\n\nEnter 'm' to go to main menu or anyother key to exit\n\n";cin>>u_ch;

	   if(u_ch=='m'){

	   	system("cls");	StartingPage();

	   }

	   else cout<<"Invalid Choice";

}

void AddNewMovie() {

	int TP;string name,Id;

     system("cls");

    cout << "Enter Movie Name: \n";

    cin>>name;

    cout << "\nEnter Ticket Price: \n";

    cin>>TP;

    cout << "\nEnter ID: \n";

    cin>>Id;

	ofstream Rout;

	Rout.open("MoviesList.txt",ios::app);

    Rout<<"\n"<<Id<<"\t"<<name<<"\t"<<TP;char u_ch;

       cout<<"\n\n\n\nEnter 'm' to go to main menu or anyother key to exit\n\n";cin>>u_ch;

    switch(u_ch)

    {

    	case 'm': {system("cls");StartingPage();

			break;

		}

    	default: cout<<"Invalid Choice";

	}

}

void DeleteMovieList() {

    system("cls");

		ofstream Rout("MoviesList.txt");Rout<<"  ";

		cout<<"\n\n\n\nAll Movies has been Deleted.";char u_ch;

		   cout<<"\n\n\n\nEnter 'm' to go to main menu or anyother key to exit\n\n";cin>>u_ch;

    switch(u_ch)

    {

    	case 'm': {system("cls");StartingPage();

			break;

		}

    	default: cout<<"Invalid Choice";

	}

	}

void ShowMovieList() {

    system("cls");



    ifstream Rin;

    Rin.open("MoviesList.txt");

    if(Rin.is_open())

	{

		cout<<Rin.rdbuf();

	}char u_ch;

	   cout<<"\n\n\n\n\n\nEnter 'm' to go to main menu or anyother key to exit\n\n";cin>>u_ch;

    switch(u_ch)

    {

    	case 'm': {system("cls");StartingPage();

			break;

		}

    	default: cout<<"Invalid Choice";

	}

}
