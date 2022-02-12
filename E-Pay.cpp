#include<iostream>

#include<windows.h>		//For Timing Fuction in HomePage

#include<iomanip>		//For using Manipulaters

#include<fstream>		//For Storing Data in File

#include<conio.h>		//For Hold Function

#include<stdlib.h>	 		//For Setting Color 

using namespace std;

void StartingPage();            //Starting Page of Program

void SignIn();					//Made For SignIn Feature

void SignUp();					//Made For SignUp Feature

void HomePage();				//Opening Page

void Icon();

//void PasswordTaker();

class MAIN						//All Classes Linked to it by single inheritance

{

	string PhoneNum; 	

	string NIC_Num; 	

	string CNIC_EX_Date;

	string PIN;

	string C_PIN;

	public:	static double Op_Bal;

		MAIN()  {PhoneNum="";NIC_Num="";CNIC_EX_Date="";PIN="";C_PIN="";}

		void GetData(string pn,string nn,string ned,string pin,string cpin,double op_bal)

		{

			PhoneNum=pn;NIC_Num=nn;CNIC_EX_Date=ned;PIN=pin;C_PIN=cpin;Op_Bal=op_bal;

		}

		void StoreData()

		{

			ofstream out("DataInPro.txt");

			out<<PhoneNum<<"\t"<<PIN<<"\t"<<Op_Bal<<"\t"<<NIC_Num<<"\t"<<CNIC_EX_Date;

			out.close();

		}

};

double MAIN::Op_Bal=3000;

class SendMoney:public MAIN				//Child Classes

{

	string AccNo;	

	string RecieverAccNo;

	string RecieverCNIC;

	double TransferAmount;

	string RecieverBankAcc;

	string PurposeOfPayment;

	public:

		SendMoney() {AccNo="";RecieverAccNo="";RecieverBankAcc="";RecieverCNIC="";TransferAmount=0;PurposeOfPayment="";}

			void MobileAccounttrans(string RAN,double TA)

			{

				if(Op_Bal<TA)

				{

					cout<<"\nSorry,You have Insufficient Balance. ";

				}

				else

				{char ch;

					Op_Bal-=TA;system("cls");

					cout<<"\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Tranferred Rs:"<<TA<<" to Mobile Account Number "<<RAN<<".\nNow, Your Remaining Balance is "<<Op_Bal<<".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";

				TransferAmount=TA;RecieverAccNo=RAN;

				cout<<"Interested to go to Main Menu or Just Exit fron Here?\n Type m for main menu and e for exit.\n\t\t\t\t";cin>>ch;

				switch(ch)

				{

				case 'm':{system("cls");HomePage();

					break;

				}

				case 'e':{

					break;

				}

				case 'M':{system("cls");HomePage();

					break;

				}

				case 'E':{

					break;

				}

				default:  cout<<"\nInvalid Choice. ";

				}

				}

			}

			void CNICtrans(string RCN,double TA)

			{

				 if(Op_Bal<TA)

				 {

					cout<<"\nSorry,You have Insufficient Balance. ";

				}

				else

				{char ch;

					Op_Bal-=TA;system("cls");

					cout<<"\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Tranferred Rs:"<<TA<<" to CNIC Number "<<RCN<<".\nNow, Your Remaining Balance is "<<Op_Bal<<".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";

				TransferAmount=TA;RecieverCNIC=RCN;

				cout<<"Interested to go to Main Menu or Just Exit fron Here?\n Type m for main menu and e for exit.\n\t\t\t\t";cin>>ch;

				switch(ch)

				{

				case 'm':{system("cls");HomePage();

					break;

				}

				case 'e':{

					break;

				}

				case 'M':{system("cls");HomePage();

					break;

				}

				case 'E':{

					break;

				}

				default:  cout<<"\nInvalid Choice. ";

				}

				}

			}

			void BankAcctrans(string RBAN,double TA,string POP)

			{

				if(Op_Bal<TA)

				 {

					cout<<"\nSorry,You have Insufficient Balance. ";

				}

				else

				{char ch;

					Op_Bal-=TA;system("cls");

					cout<<"\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Tranferred Rs:"<<TA<<" to CNIC Number "<<RBAN<<".\nNow, Your Remaining Balance is "<<Op_Bal<<".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";

				RecieverBankAcc=RBAN;TransferAmount=TA;PurposeOfPayment=POP;

				cout<<"Interested to go to Main Menu or Just Exit fron Here?\n Type m for main menu and e for exit.\n\t\t\t\t";cin>>ch;

				switch(ch)

				{

				case 'm':{system("cls");HomePage();

					break;

				}

				case 'e':{

					break;

				}

				case 'M':{system("cls");HomePage();

					break;

				}

				case 'E':{

					break;

				}

				default:  cout<<"\nInvalid Choice. ";

				}

				}

			}

};

class LoadHundred:public MAIN			//Child Classes

{

	string RecieverNumber;

	public:

		LoadHundred() {RecieverNumber="";}

			void Mobile100Load(string RN)

			{

				if(Op_Bal<100)

				{

					cout<<"\nSorry,You have Insufficient Balance. ";

				}

				else

				{char ch;

					Op_Bal-=100;system("cls");

					cout<<"\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Tranferred Rs: 100 to Mobile Number "<<RN<<".\nNow, Your Remaining Balance is "<<Op_Bal<<".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";

				RecieverNumber=RN;

				cout<<"Interested to go to Main Menu or Just Exit fron Here?\n Type m for main menu and e for exit.\n\t\t\t\t";cin>>ch;

				switch(ch)

				{

				case 'm':{system("cls");HomePage();

					break;

				}

				case 'e':{

					break;

				}

				case 'M':{system("cls");HomePage();

					break;

				}

				case 'E':{

					break;

				}

				default:  cout<<"\nInvalid Choice. ";

				}

				}

			}

};

class MobileLoad:public MAIN			//Child Classes

{

	string RecieversNumber;

	double TransferAmount;

	public:

		MobileLoad() {RecieversNumber="";}

			void Mobile_Load(string RN,double TA)

			{

			if(Op_Bal<TA)

			{

				cout<<"\nSorry,You have Insufficient Balance. ";

			}

			else

			{char ch;

				Op_Bal-=TA;system("cls");

				cout<<"\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Tranferred Rs:"<<TA<<" to Mobile Number "<<RN<<".\nNow, Your Remaining Balance is "<<Op_Bal<<".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";

			RecieversNumber=RN;TransferAmount=TA;

			cout<<"Interested to go to Main Menu or Just Exit fron Here?\n Type m for main menu and e for exit.\n\t\t\t\t";cin>>ch;

			switch(ch)

			{

				case 'm':{system("cls");HomePage();

				break;

				}

				case 'e':{

					break;

				}

				case 'M':{system("cls");HomePage();

					break;

				}

				case 'E':{

					break;

				}

				default:  cout<<"\nInvalid Choice. ";

				}

				}

			}

};

class PayBills:public MAIN				//Child Classes

{

	string CustomerNumber;	

	string Division;

	double TransferAmount;

	public:

		PayBills() {CustomerNumber="";Division="";TransferAmount=0;}

			void ElectricityBill(string D,string CN,double TA)

			{

				if(Op_Bal<TA)

				{cout<<"\nSorry,You have Insufficient Balance. ";}

				else

				{char ch;

					Op_Bal-=TA;system("cls");

					cout<<"\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Paid your Electricity Bill of Rs:"<<TA<<" to "<<D<<" of Customer Number "<<CN<<".\nNow, Your Remaining Balance is "<<Op_Bal<<".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";

				TransferAmount=TA;CustomerNumber=CN;Division=D;

				cout<<"Interested to go to Main Menu or Just Exit from Here?\n Type m for main menu and e for exit.\n\t\t\t\t";cin>>ch;

				switch(ch)

				{	case 'm':{system("cls");StartingPage();break;}case 'e':{break;}case 'M':{system("cls");StartingPage();break;}case 'E':{break;}default:  cout<<"\nInvalid Choice. ";}	}

			}

	void GasBill(string CN,double TA)

			{

				if(Op_Bal<TA)

				{

					cout<<"\nSorry,You have Insufficient Balance. ";

				}

				else

				{char ch;

					Op_Bal-=TA;system("cls");

					cout<<"\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Paid your SSGC Gas Bill of Rs:"<<TA<<" of Customer Number "<<CN<<".\nNow, Your Remaining Balance is "<<Op_Bal<<".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";

				TransferAmount=TA;CustomerNumber=CN;

				cout<<"Interested to go to Main Menu or Just Exit from Here?\n Type m for main menu and e for exit.\n\t\t\t\t";cin>>ch;

				switch(ch)

				{

				case 'm':{system("cls");HomePage();

					break;

				}

				case 'e':{

					break;

				}

				case 'M':{system("cls");HomePage();

					break;

				}

				case 'E':{

					break;

				}

				default:  cout<<"\nInvalid Choice. ";

				}

				}

			}

		void WaterBill(string CN,double TA)

			{

				if(Op_Bal<TA)

				{

					cout<<"\nSorry,You have Insufficient Balance. ";

				}

				else

				{char ch;Op_Bal-=TA;system("cls");

				cout<<"\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Paid your HDA Water Bill of Rs:"<<TA<<" of Customer Number "<<CN<<".\nNow, Your Remaining Balance is "<<Op_Bal<<".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";

				TransferAmount=TA;CustomerNumber=CN;

				cout<<"Interested to go to Main Menu or Just Exit from Here?\n Type m for main menu and e for exit.\n\t\t\t\t";cin>>ch;

				switch(ch)

				{case 'm':{system("cls");HomePage();break;}

				case 'e':{break;}

				case 'M':{system("cls");HomePage();break;}

				case 'E':{break;}

				default:  cout<<"\nInvalid Choice. ";}

				}

			}

	void TelephoneBill(string CN,double TA)

			{

				if(Op_Bal<TA)

				{

					cout<<"\nSorry,You have Insufficient Balance. ";

				}

				else

				{char ch;

					Op_Bal-=TA;system("cls");

					cout<<"\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Paid your HDA Water Bill of Rs:"<<TA<<" of Customer Number "<<CN<<".\nNow, Your Remaining Balance is "<<Op_Bal<<".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";

				TransferAmount=TA;CustomerNumber=CN;

				cout<<"Interested to go to Main Menu or Just Exit from Here?\n Type m for main menu and e for exit.\n\t\t\t\t";cin>>ch;

				switch(ch)

				{

				case 'm':{system("cls");HomePage();

					break;

				}

				case 'e':{

					break;

				}

				case 'M':{system("cls");HomePage();

					break;

				}

				case 'E':{

					break;

				}

				default:  cout<<"\nInvalid Choice. ";

				}

				}

			}

};

class MobilePackages:public MAIN		//Child Classes

{

	string Operater;	

	string Division;

	double TransferAmount;

	public:

			MobilePackages() {Operater="";TransferAmount=0;}

			void PackageAll(double TA)

			{

				TransferAmount=TA;

					if(Op_Bal<TA)

				{cout<<"\nSorry,You have Insufficient Balance. ";}

				else

				{char ch;

					Op_Bal-=TA;system("cls");

					cout<<"\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Subscribed to the Package. \nNow, Your Remaining Balance is "<<Op_Bal<<".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";

				cout<<"Interested to go to Main Menu or Just Exit from Here?\n Type m for main menu and e for exit.\n\t\t\t\t";cin>>ch;

				switch(ch)

				{	case 'm':{system("cls");HomePage();break;}case 'e':{break;}case 'M':{system("cls");HomePage();break;}case 'E':{break;} default:  cout<<"\nInvalid Choice. ";}

			}

		}

};

class EducationPayments:public MAIN		//Child Classes

{

	double TransferAmount;

	string Institute;

	string AccountNumber;

	public:

			EducationPayments() {TransferAmount=0,AccountNumber="",Institute="";}

			void TransMoney(string AN,double TA,string I)

			{ 

			if(Op_Bal<TA)

				{cout<<"\nSorry,You have Insufficient Balance. ";}

				else

				{char ch;TransferAmount=TA;Institute=I;AccountNumber=AN;

					Op_Bal-=TA;system("cls");

					cout<<"\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Paid your Education Payment of Rs:"<<TA<<" to Account Number "<<AN<<" of "<<I<<".\nNow, Your Remaining Balance is "<<Op_Bal<<".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";

				cout<<"Interested to go to Main Menu or Just Exit from Here?\n Type m for main menu and e for exit.\n\t\t\t\t";cin>>ch;

				switch(ch)

				{	case 'm':{system("cls");HomePage();break;}case 'e':{break;}case 'M':{system("cls");HomePage();break;}case 'E':{break;}default:  cout<<"\nInvalid Choice. ";}	

			}	

			}

			

};

class EntertainmentAndOnlinePurchases:public MAIN		//Child Classes

{

	string EventName;

	double TransferAmount;

	string MovieName;

	string ProductName;

	public:

		EntertainmentAndOnlinePurchases() {EventName="",TransferAmount=0,MovieName="",ProductName="";}

		void EventTickets(string EN,double TA)

		{

			if(Op_Bal<TA)

			{

				cout<<"\nSorry,You have Insufficient Balance. ";

			}

			else

			{char ch;

				Op_Bal-=TA;system("cls");EventName=EN;TransferAmount=TA;

				cout<<"\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Booked Your "<<EN<<" Tickets.\nNow, Your Remaining Balance is "<<Op_Bal<<".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";

			cout<<"Interested to go to Main Menu or Just Exit fron Here?\n Type m for main menu and e for exit.\n\t\t\t\t";cin>>ch;

			switch(ch)

			{

				case 'm':{system("cls");HomePage();

				break;

				}

				case 'e':{

					break;

				}

				case 'M':{system("cls");HomePage();

					break;

				}

				case 'E':{

					break;

				}

				default:  cout<<"\nInvalid Choice. ";

				}

				}

		}

		void MovieTickets(string MN,double TA)

		{

			if(Op_Bal<TA)

			{

				cout<<"\nSorry,You have Insufficient Balance. ";

			}

			else

			{char ch;

				Op_Bal-=TA;system("cls");MovieName=MN;TransferAmount=TA;

				cout<<"\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Booked Your Tickets for "<<MN<<" Movie.\nNow, Your Remaining Balance is "<<Op_Bal<<".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";

			cout<<"Interested to go to Main Menu or Just Exit fron Here?\n Type m for main menu and e for exit.\n\t\t\t\t";cin>>ch;

			switch(ch)

			{

				case 'm':{system("cls");HomePage();

				break;

				}

				case 'e':{

					break;

				}

				case 'M':{system("cls");HomePage();

					break;

				}

				case 'E':{

					break;

				}

				default:  cout<<"\nInvalid Choice. ";

				}

				}

		}

		void DarazWallet(string PN,double TA)

		{

			if(Op_Bal<TA)

			{

				cout<<"\nSorry,You have Insufficient Balance. ";

			}

			else

			{char ch;

				Op_Bal-=TA;system("cls");ProductName=PN;TransferAmount=TA;

				cout<<"\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Booked "<<PN<<" Product. Your Product will be Delivered to you within 48 Hours\nNow, Your Remaining Balance is "<<Op_Bal<<".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";

			cout<<"Interested to go to Main Menu or Just Exit fron Here?\n Type m for main menu and e for exit.\n\t\t\t\t";cin>>ch;

			switch(ch)

			{

				case 'm':{system("cls");HomePage();

				break;

				}

				case 'e':{

					break;

				}

				case 'M':{system("cls");HomePage();

					break;

				}

				case 'E':{

					break;

				}

				default:  cout<<"\nInvalid Choice. ";

				}

				}			

		}

};

class GovernmentPayments:public MAIN		//Child Classes

{

	double TAX;

	double TrafficChallan;

	string Number;

	public:

		GovernmentPayments() {TAX=0,TrafficChallan=0,Number="";}

		void TAXPayment(string N,double TX)

		{

			if(Op_Bal<TX)

				{

					cout<<"\nSorry,You have Insufficient Balance. ";

				}

				else

				{char ch;TAX=TX;Number=N;

					Op_Bal-=TX;system("cls");

					cout<<"\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Paid Challan of Rs:"<<TX<<" to Government TAX Number "<<N<<" .\nNow, Your Remaining Balance is "<<Op_Bal<<".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";

				cout<<"Interested to go to Main Menu or Just Exit fron Here?\n Type m for main menu and e for exit.\n\t\t\t\t";cin>>ch;

				switch(ch)

				{

				case 'm':{system("cls");HomePage();

					break;

				}

				case 'e':{

					break;

				}

				case 'M':{system("cls");HomePage();

					break;

				}

				case 'E':{

					break;

				}

				default:  cout<<"\nInvalid Choice. ";

				}

		}

	}

		void TCPayment(string N,double TC)

		{

			if(Op_Bal<TC)

				{

					cout<<"\nSorry,You have Insufficient Balance. ";

				}

				else

				{char ch;TrafficChallan=TC;Number=N;

					Op_Bal-=TC;system("cls");

					cout<<"\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Paid Challan of Rs:"<<TC<<" to Government Challan Number "<<N<<".\nNow, Your Remaining Balance is "<<Op_Bal<<".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";

				cout<<"Interested to go to Main Menu or Just Exit fron Here?\n Type m for main menu and e for exit.\n\t\t\t\t";cin>>ch;

				switch(ch)

				{

				case 'm':{system("cls");HomePage();

					break;

				}

				case 'e':{

					break;

				}

				case 'M':{system("cls");HomePage();

					break;

				}

				case 'E':{

					break;

				}

				default:  cout<<"\nInvalid Choice. ";

				}

		}

	}

};

class TravelAndFood:public MAIN			//Child Classes

{

	string BusService;

	string Date;

	string From;

	string To;

	double TransferAmount;

	string ResturantName;

	string Menu;

	public:

		TravelAndFood() {BusService="",Date="",From="",To="",TransferAmount=0;}

		void BookTravelTicket(string BS,string D,string F,string T,double TA)

		{

			BusService=BS;Date=D;From=F;To=T;TransferAmount=TA;

			if(Op_Bal<TA)

				{

					cout<<"\nSorry,You have Insufficient Balance. ";

				}

				else

				{char ch;

					Op_Bal-=TA;system("cls");

					cout<<"\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Booked Your Seat in :"<<BS<<" From "<<F<<" To "<<T<<".\nNow, Your Remaining Balance is "<<Op_Bal<<".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";

				cout<<"Interested to go to Main Menu or Just Exit fron Here?\n Type m for main menu and e for exit.\n\t\t\t\t";cin>>ch;

				switch(ch)

				{

				case 'm':{system("cls");HomePage();

					break;

				}

				case 'e':{

					break;

				}

				case 'M':{system("cls");HomePage();

					break;

				}

				case 'E':{

					break;

				}

				default:  cout<<"\nInvalid Choice. ";

				}

				}

			}

		

		void FoodDelivery(string RN,string M,double TA)

		{

			  ResturantName=RN;Menu=M;TransferAmount=TA;

			if(Op_Bal<TA)

				{

					cout<<"\nSorry,You have Insufficient Balance. ";

				}

				else

				{char ch;

					Op_Bal-=TA;system("cls");

					cout<<"\n\t\t\tNOTIFICATION\n\n\nYour Order Have Been Succesfully Booked. It will be Delivered to you in 15-20 Minutes.\nNow, Your Remaining Balance is "<<Op_Bal<<".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";

				cout<<"Interested to go to Main Menu or Just Exit fron Here?\n Type m for main menu and e for exit.\n\t\t\t\t";cin>>ch;

				switch(ch)

				{

				case 'm':{system("cls");HomePage();

					break;

				}

				case 'e':{

					break;

				}

				case 'M':{system("cls");HomePage();

					break;

				}

				case 'E':{

					break;

				}

				default:  cout<<"\nInvalid Choice. ";

				}

				} 

		}

};

class AccountDetails:public MAIN		//Child Classes

{	

};

int main()

{

	system("mode con: lines=33 cols=74");

	StartingPage();

	int ch;system("cls");system("Color 0F");	cout<<"\n\n\n\n\e    Enter 1 For Sign In: \n\n\n\e    Enter 2 For Sign Up:\n\n\n\n\t\t\t\tYour Answer is:    ";cin>>ch;	

	if(ch==1){SignIn();}

	else if(ch==2){SignUp();}

	else cout<<"\nInvalid Input.";

}

	void SignUp()

	{

	system("cls");char ch;system("Color 75");

	do{	

		MAIN R1;

	string pn;string nn;string ned;string pin;string cpin;double  op_bal;

	cout<<"\n\n\t\t\tSignUp\n\n";

	cout<<"\n\nEnter Mobile Number:  ";cin>>pn;

	cout<<"\n\nEnter CNIC Number:  ";cin>>nn;

	cout<<"\n\nEnter CNIC End Date:  ";cin>>ned;

	cout<<"\n\nEnter Opening Balance: must be Greater than 1000 rupees. ";cin>>op_bal;

	if(op_bal<1000){cout<<"\n\nSorry, Your Account Not opened as Balance Must be Greater than 1000";break;	}

	cout<<"\n\nEnter PIN:  ";cin>>pin;

	cout<<"\n\nConfirm your PIN:  ";cin>>cpin;

	if(pin!=cpin){cout<<"\nNo Match among Passwords.\nTry again or not type (yes/no) ";cin>>ch;	}

	else {cout<<"\n\nYour Account Has Been Created \n Let`s Sign In Now";

																				R1.GetData(pn,nn,ned,pin,cpin,op_bal);

																				R1.StoreData();	

																				system("cls");

																				SignIn();	}

		}

	while(ch=='y');}

	void SignIn()

	{

	system("cls");system("Color 75");

		string MN;string PIN,ld1;string str1,str3;double str2;

		cout<<"\n\n\n\n\t\t\tSignIn\n\n";

		cout<<"\n\n\nEnter Your Mobile Number:  ";cin>>MN;

		cout<<"\n\nEnter Your 4-Digit PIN:    ";cin>>PIN;//PasswordTaker();

		ifstream in;

		in.open("DataInPro.txt");

		if (in.is_open())

		{in>>str1>>ld1>>str2>>str3;

		if(str1==MN && ld1==PIN){cout<<"\n\nMatched\n";system("cls");HomePage();}

		else {cout<<"\n\nNot Matched";}	

		in.close();

		}

		else 

		cout<<"\n\n\n\n\nAlas! Error in Opening File\n\n\n\n\n";

	}

	void HomePage()

	{

	int ch;cout<<"\n\t\t\tWelcome";//string str1,str2,str3,str4;double d;ifstream Jin;Jin.open("FileInPro.txt");Jin>>str1>>str2>>d>>str4>>str3;cout<<str1;Jin.close();

	system("Color A");

		cout<<"\n\n\n\e Enter 0 For Exit.";

		cout<<"\n\n\n\e Enter 1 For Send Money ";

		cout<<"\n\n\e Enter 2 For Self Load of 100 ";

		cout<<"\n\n\e Enter 3 For Mobile Load ";

		cout<<"\n\n\e Enter 4 For Pay Bill ";

		cout<<"\n\n\e Enter 5 For Mobile Packages ";

		cout<<"\n\n\e Enter 6 For Education Payments ";

		cout<<"\n\n\e Enter 7 For Entertainment and Online Purchases ";

		cout<<"\n\n\e Enter 8 For Government Payments ";

		cout<<"\n\n\e Enter 9 For Travel and Food ";

		cout<<"\n\n\e Enter 10 For Your Account Details ";

		cout<<"\n\n\e Enter 11 For Logout \n\n\t\t\t\t Your Answer is: ";

		cin>>ch;

		switch(ch)

		{

		case 11: {system("cls");StartingPage();break;};

		case 0:{break;}//HomePage lgani h

			case 1:{int c;system("cls");cout<<"\n\n\n\t\t\tSend Money\n\n\nEnter 1 in Order to Send Money to a Mobile Account.";cout<<"\n\nEnter 2 in Order to Send Money to CNIC.";cout<<"\n\nEnter 3 in Order to Send Money to Bank Account.\n\n\t\t\tYour Answer is:  ";cin>>c;system("cls");

				if(c==1){string RAN;double TA;cout<<"\n\n\t\t\tSend Money\n\n";SendMoney S1;cout<<"\nEnter Mobile Account Number \n";cin>>RAN;

				cout<<"\nEnter Amount \n";cin>>TA;S1.MobileAccounttrans(RAN,TA);break;}

				else if(c==2){string RCN;double TA;cout<<"\n\n\t\t\tSend Money\n\n";SendMoney S1;cout<<"\nEnter CNIC Number \n";cin>>RCN;

				cout<<"\nEnter Amount \n";cin>>TA;S1.CNICtrans(RCN,TA);	break;	}

				else if(c==3){string RBAN;double TA;string POP;cout<<"\n\n\t\t\tSend Money\n\n";SendMoney S1;cout<<"\nEnter Bank Account Number \n";cin>>RBAN;

				cout<<"\nEnter Amount \n";cin>>TA;cout<<"\nEnter Purpose of Payment \n";cin>>POP;S1.BankAcctrans(RBAN,TA,POP);	break;}

				else cout<<"\nIncorrect Choice.";

				}

				case 2:{string RN,op;system("cls");cout<<"\n\n\t\tRs-100 Mobile Load \n\n";cout<<"\nEnter Operater.";cin>>op;cout<<"\nEnter Mobile Number \n";cin>>RN;LoadHundred LH1;LH1.Mobile100Load(RN);break;}

					case 3:{string RN,op;double TA;system("cls");cout<<"\n\n\t\tMobile Load \n\n";cout<<"\nEnter Operater.";cin>>op;cout<<"\nEnter Mobile Number \n";cin>>RN;cout<<"\nEnter Amount \n";cin>>TA;MobileLoad ML1;ML1.Mobile_Load(RN,TA);break;}

						case 4:{int c;system("cls");cout<<"\nEnter 1 in Order to Pay your Electricity Bill.";cout<<"\nEnter 2 in Order to Pay your Gas Bill.";cout<<"\nEnter 3 in Order to Pay your Water Bill\n";cout<<"Enter 4 in Order to Pay your Telephone Bill\n\n\t\t\t\tYour Answer:  ";cin>>c;system("cls");

				if(c==1){string CN,D;double TA;cout<<"\n\n\t\t\tPay Bill\n\n";PayBills PB1;cout<<"\nEnter Division (HESCO,SEPCO,KESC.....) \n";cin>>D;cout<<"\nEnter Customer Number \n";cin>>CN;

				cout<<"\nEnter Amount \n";cin>>TA;PB1.ElectricityBill(D,CN,TA);break;}

				else if(c==2){string CN;double TA;cout<<"\n\n\t\t\tPay Bill\n\n";PayBills PB1;cout<<"\nEnter SSGC Customer Number \n";cin>>CN;

				cout<<"\nEnter Amount \n";cin>>TA;PB1.GasBill(CN,TA);break;}

				else if(c==3){string CN;double TA;cout<<"\n\n\t\t\tPay Bill\n\n";PayBills PB1;cout<<"\nEnter WASA Customer Number \n";cin>>CN;

				cout<<"\nEnter Amount \n";cin>>TA;PB1.WaterBill(CN,TA);break;}

				else if(c==4){string CN;double TA;cout<<"\n\n\t\t\tPay Bill\n\n";PayBills PB1;cout<<"\nEnter PTCL Customer Number \n";cin>>CN;

				cout<<"\nEnter Amount \n";cin>>TA;PB1.TelephoneBill(CN,TA);break;}

				else cout<<"\nIncorrect Choice.";}

							case 5:{char op;system("cls");cout<<"\n\n\nEnter Operater(z for zong,j for jazz,u  for ufone,t for telenor).";cin>>op;int ch;MobilePackages MP1;

														if(op=='z'||op=='Z'){cout<<"\nEnter 1 to Get 30 GB Data, 100 Other Networks Minutes, 3000 Zong Minutes and 3000 SMS for the entire week in just PKR 340 Load \nEnter 2 to get WEEKLY TIKTOK OFFER 2GB Data for the Whole Week @ only Rs. 50 icon 2GB Tiktok PKR. 50 \nEnter 3 to Avail MONTHLY WHATSAPP PLUS OFFER Off-net Mins PKR. 80\n\n\t\t\tYour Answer :";cin>>ch;if(ch==1){MP1.PackageAll(340);}else if(ch==2){MP1.PackageAll(50);} else if(ch==3){MP1.PackageAll(80);} else cout<<"Incorrect Input";}

																								else if(op=='J'||op=='j'||op=='M'||op=='m'){cout<<"\n\nEnter 1 to Jazz Weekly All Network Package 1000Minutes, 2000MBS in just 200Rs \nEnter 2 to Jazz Weekly Super Duper Offer 1500Minutes, 3000MBS in just 200Rs\nEnter 3 to Jazz Weekly Super Plus 5000Minutes, 12000MBS in just 800Rs\n\n\t\t\tYour Answer :";cin>>ch;if(ch==1){MP1.PackageAll(200);}else if(ch==2){MP1.PackageAll(200);} else if(ch==3){MP1.PackageAll(800);}else cout<<"Incorrect Input";}

																								else if(op=='t'||op=='T'){cout<<"\n\nEnter 1 to Telenor Good Time Offer Unlimited Minutes, 250 MBS for RS 120 \nEnter 2 to Telenor Din Bhar Package 100000 Minutes, 20 MBS in 200 \nEnter 3 to Telenor Daily YouTube Package 500 MBS in 15 \nEnter 4 to Telenor djuice 50 Minutes Bundle 50 Minutes, 10 MBS in 10 RS.\n\n\t\t\tYour Answer :";cin>>ch;if(ch==1){MP1.PackageAll(120);}else if(ch==2){MP1.PackageAll(200);}else if(ch==3){MP1.PackageAll(15);}else if(ch==4){MP1.PackageAll(10);}else cout<<"Incorrect Input";}

																								else if(op=='u'||op=='U'){cout<<"\n\nEnter 1 to Ufone Social Daily Package  Unlimiited Mbs for 1 day in 40 RS\nEnter 2 to Ufone 24 Ghantay Package Unlimiited Mbs for 1 day+86400 SMS in 150 RS.\nEnter 3 to Ufone Streaming Offer (1 hour) for 1 Day in 45 RS.\n\n\t\t\tYour Answer :";cin>>ch;if(ch==1){MP1.PackageAll(40);}else if(ch==2){MP1.PackageAll(70);}else if(ch==3){MP1.PackageAll(45);}else cout<<"Incorrect Input";}

																								else cout<<"\n\nInvalid operater.";

																								break;}

								case 6:{system("cls");EducationPayments EP1;string I,AN;double TA;cout<<"Enter Institute Name:  ";cin>>I;cout<<"Enter Account Number:  ";cin>>AN;cout<<"Enter Amount:  ";cin>>TA;EP1.TransMoney(AN,TA,I);}

									case 7:{system("cls");EntertainmentAndOnlinePurchases EAOP1;system("cls");int ch;string MN,EN,PN;double TA;cout<<"\nEnter 1 to Book Movie Tickets.\nEnter 2 to Book Event Tickets.\nEnter 3 to Pay for Daraz Wallet\n\n\t\t\tYour Answer:  ";cin>>ch;if(ch==1){cout<<"\nEnter Movie Name\n";cin>>MN;cout<<"\nEnter Amount\n";cin>>TA;EAOP1.MovieTickets(MN,TA);}else if(ch==2){cout<<"\nEnter Event Name\n";cin>>EN;cout<<"\nEnter Amount\n";cin>>TA;EAOP1.EventTickets(EN,TA);}else if(ch==3){cout<<"\nEnter Product Name\n";cin>>PN;cout<<"\nEnter Amount\n";cin>>TA;EAOP1.DarazWallet(PN,TA);}else cout<<"\n\nInvalid Entry";break;}

										case 8:{system("cls");int ch;string TN;double TA;cout<<"\nEnter 1 to Pay your TAX\nEnter 2 to Pay your Traffic Challan\n\n\t\t\tYour Answer:  ";cin>>ch;if(ch==1){cout<<"\nEnter your TAX Number\n";cin>>TN;cout<<"\nEnter your Challan Amount\n";cin>>TA;GovernmentPayments GP1;GP1.TAXPayment(TN,TA);}

																																					else if(ch==2){cout<<"\nEnter your Challan Number\n";cin>>TN;cout<<"\nEnter your Challan Amount\n";cin>>TA;GovernmentPayments GP1;GP1.TCPayment(TN,TA);}

																																					else cout<<"\n\nInvalid Input";break;}

											case 9:{system("cls");int ch;TravelAndFood TAF1;string BS,D,F,T;double TA;cout<<"\nEnter 1 to Book Your Travel Ticket\nEnter 2 to Order Your Food\n\n\t\t\tYour Answer:  ";cin>>ch;if(ch==1){cout<<"\nEnter Bus Service to Avail\n";cin>>BS;cout<<"\nEnter Date of Travel\n";cin>>D;cout<<"\nEnter City From you want to Book.\n";cin>>F;cout<<"\nEnter City From where you are Going.\n";cin>>T;cout<<"\nEnter Amount to Pay as offer of all in 300 is going on.\n";cin>>TA;if(TA<300||TA>300){TAF1.BookTravelTicket(BS,D,F,T,TA);}else cout<<"\nIncorrect Amount No any Offer of this Type\n";break;}

																																																								else if(ch==2){string RN;string M;double TA;cout<<"\nEnter Resturant Name\n";cin>>RN;cout<<"\nEnter Menu \n";cin>>M;cout<<"\nEnter Amount to Pay as offer of all in 300 is going on.\n";cin>>TA;if(TA==300){TAF1.FoodDelivery(RN,M,TA);}else cout<<"\nIncorrect Amount No any Offer of this Type\n";}																																																		else cout<<"\nInvalid Input\n";break;}

												case 10:{string str1,str2;double str3;string str4,str5;AccountDetails AD1;AD1.Op_Bal;ifstream in("DataInPro.txt");in>>str1>>str2>>str3>>str4>>str5;system("cls");cout<<"\n\n\t\t\tAccount Details:\n\n\n\nMobile Number is:     "<<str1<<"\n\nBalance is:    "<<str3<<"\n\nCNIC Number is:     "<<str4<<"\n\nCNIC Validation is upto:     "<<str5<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";break;}

												default: cout<<"Incorrect Output";

			}	}

	void PasswordTaker()

	{

	char cha[4];

	int a=0;	string PIN;

	while(cha[a-1]!='\r')

	{

		cha[a]=getch();

		if(cha[a-1]!='\r')

		{

		cout<<"*";

		}a++;cin>>PIN;

	}

	}	

	void StartingPage()

	{

	cout<<"\n\n";

	Icon();

	cout<<"\n\n\n\n\n"<<setw(50)<<"LOADING..\n	  \t\t";

	system("Color 71");

	char x=73;//32;

	

	for(int i=0;i<31;i++)

	{

			cout<<x;

			if(i>=0&&i<11)

			Sleep(300);

			if(i>10&&i<24)

			Sleep(150);

			if(i>23&&i<31)

			Sleep(400);

	}

	cout<<"\n\n\n\n\n\n\n\n\n\n";cout.width(72);cout<<right<<"Made By:"<<endl;cout.width(72);cout<<right<<"Junaid Aslam Rajput"<<endl;cout.width(72);cout<<right<<"Roll No:"<<endl;cout.width(72);cout<<right<<"20SW084";getch();

	//cout<<"\n\n\n\n\n\n\n\n\n\n";cout.width(72);cout.setf(ios::right);cout<<"Made By:"<<endl;cout.width(72);cout.setf(ios::right);cout<<"Junaid Aslam Rajput"<<endl;cout.width(72);cout.setf(ios::right);cout<<"Roll No:"<<endl;cout.width(72);cout.setf(ios::right);cout<<"20SW084";getch();

	//cout<<"\n\n\n\n\n\n\n\n\n\n\n"<<setw(69)<<"Made By:"<<endl<<setw(80)<<"Junaid Aslam Rajput"<<endl<<setw(69)<<"Roll No:"<<endl<<setw(68)<<"20SW084";getch();

	}

	void Icon()

	{

	cout<<"\n\t\t!!======="<<setw(14)<<"!!=====!!"<<setw(11)<<"!!=====!!"<<setw(4)<<"||"<<setw(8)<<"||"<<"\n";

	cout<<"\t\t||"<<setw(14)<<"||"<<setw(7)<<"||"<<setw(4)<<"||"<<setw(7)<<"||"<<setw(4)<<"||"<<setw(8)<<"||"<<"\n";

	cout<<"\t\t||"<<setw(14)<<"||"<<setw(7)<<"||"<<setw(4)<<"||"<<setw(7)<<"||"<<setw(4)<<"||"<<setw(8)<<"||"<<"\n";

	cout<<"\t\t||"<<setw(14)<<"||"<<setw(7)<<"||"<<setw(4)<<"||"<<setw(7)<<"||"<<setw(4)<<"||"<<setw(8)<<"||"<<"\n";

	cout<<"\t\t||====="<<setw(5)<<"___"<<"  "<<"||=====!!"<<setw(11)<<"||=====||"<<setw(12)<<"||======||"<<"\n";

	cout<<"\t\t||"<<setw(14)<<"||"<<setw(11)<<"||"<<setw(7)<<"||"<<setw(8)<<"||"<<"\n";

	cout<<"\t\t||"<<setw(14)<<"||"<<setw(11)<<"||"<<setw(7)<<"||"<<setw(8)<<"||"<<"\n";

	cout<<"\t\t||"<<setw(14)<<"||"<<setw(11)<<"||"<<setw(7)<<"||"<<setw(8)<<"||"<<"\n";

	cout<<"\t\t!!======="<<setw(7)<<"||"<<setw(18)<<"!!     !!"<<setw(8)<<"||"<<"\n";	

	}

	
