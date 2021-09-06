//name Amaar Hasssnain Raza //

//Roll number 20sw015//

//Project c++ calculate electricity Bills through the appliances //

//Submitted to Sir Naeem Ahmed Mahotho///

#include<iostream>

#include<iomanip>

#include<cmath>

#include<windows.h>

using namespace std;

class elctricity_bills{

	private:

		int no_bulbs,no_fans,no_defrigiretor,no_AC,no_iron,no_tv,no_computer_monitor,no_electric_motor,no_mobile_charger,no_washingMachine,no_laptop,

		no_electric_gizer,no_microwave_oven,no_computer_cpu,no_video_game;

		float watts_bulbs,watts_fans,watts_defrigiretor,watts_AC,watts_iron,watts_tv,watts_computer_monitor,

		watts_electric_motor,watts_mobile_charger,watts_washingMachine,watts_laptop,watts_electric_gizer,watts_microwave_oven,watts_computer_cpu,watts_video_game;

		//////////////Enter the apliances use in one day////////////////////////////

		int hor_bulbs,hor_fans,hor_defrigiretor,hor_AC,hor_iron,hor__tv,hor_computer_monitor,

		hor_electric_motor,hor_mobile_charger,hor_washingMachine,hor_laptop,hor_electric_gizer,hor_microwave_oven,hor_computer_cpu,hor_video_game;

	    //////////The energy consumed per day////////////////

		float total_consumedinday=(hor_bulbs*(no_bulbs*watts_bulbs))+(hor_fans*(no_fans*watts_fans))+(hor_defrigiretor*(no_defrigiretor*watts_defrigiretor))+

		(hor_AC*(no_AC*watts_AC))+(hor_iron*(no_iron*watts_iron))+(hor__tv*(no_tv*watts_tv))+(hor_computer_monitor*(no_computer_monitor*watts_computer_monitor))+(hor_laptop*(no_laptop*watts_laptop))

		+(hor_electric_motor*(no_electric_motor*watts_electric_motor))+(hor_mobile_charger*(no_mobile_charger*watts_mobile_charger))+(hor_washingMachine*(no_washingMachine*watts_washingMachine))+

		(hor_electric_gizer*(no_electric_gizer*watts_electric_gizer))+(hor_microwave_oven*(no_microwave_oven*watts_microwave_oven))+(hor_computer_cpu*(no_computer_cpu*watts_computer_cpu))+

		(hor_video_game*(no_video_game*watts_video_game))};

		int days;

		

        

		public:

    

		void getproduct(){

	    cout<<"Enter number of bulbs in your house\t";

	    cin>>no_bulbs;

	    cout<<endl;

	    cout<<"Enter  number of fans in your house\t";

	    cin>>no_fans;

	    cout<<endl;

	    cout<<"Enter  number of defrigiretor in your house\t";

	    cin>>no_defrigiretor;

	    cout<<endl;

	    cout<<"Enter number of AC in your house\t";

	    cin>>no_AC;

	    cout<<endl;

	    cout<<"Enter  number of iron in your house\t";

	    cin>>no_iron;

	    cout<<endl;

	    cout<<"Enter number of TV in your house\t";

	    cin>>no_tv;

	    cout<<endl;

	    cout<<"Enter number of computer  Monitor in your house\t";

	    cin>>no_computer_monitor;

	    cout<<endl;

	    cout<<"Enter number of electrinc motor in your house\t";

	    cin>>no_electric_motor;

	    cout<<endl;	

	    cout<<"Enter number of Mobile Charger in your house\t";

	    cin>>no_mobile_charger;

	    cout<<endl;

	    cout<<"Enter number of washing Machine in your house\t";

	    cin>>no_washingMachine;

	    cout<<endl;

	    cout<<"Enter the number of laptop in your house \t";

	    cin>>no_laptop;

	    cout<<endl;

	    cout<<"Enter the number of electric Gizer in your house\t";

	    cin>>no_electric_gizer;

	    cout<<endl;

	    cout<<"Enter the number of microwave Oven in your house\t";

	    cin>>no_microwave_oven;

	    cout<<endl;

	    cout<<"Enter the number of Computer CPU in your house\t";

	    cin>>no_computer_cpu;

	    cout<<endl;

	    cout<<"Enter the number of video game in your house\t";

	    cin>>no_video_game;

	    cout<<endl;

	   

	 

	 ///////////////////////////////////////////Enter the wattage of each device consumed//////

	    system("color 96");

	    cout<<"Enter the watts of Bulbs\t";

	    cin>>watts_bulbs;

	    cout<<endl;

	    cout<<"Enter the watts of fans\t";

	    cin>>watts_fans;

	    cout<<endl;

	    cout<<"Enter the watts of defrigiretor\t";

	    cin>>watts_defrigiretor;

	    cout<<endl;

	    cout<<"Enter the watts of AC\t";

	    cin>>watts_AC;

	    cout<<endl;

	    cout<<"Enter the watts of Iron\t";

	    cin>>watts_iron;

	    cout<<endl;

	    cout<<"Enter the watts of tv\t";

	    cin>>watts_tv;

	    cout<<endl;

	    cout<<"Enter the watts of computer Monitor\t";

	    cin>>watts_computer_monitor;

	    cout<<endl;

	    cout<<"Enter the watts of Electric Motor\t";

	    cin>>watts_electric_motor;

	    cout<<endl;

	    cout<<"Enter the watts of Mobile Charger\t";

	    cin>>watts_mobile_charger;

	    cout<<endl;

	    cout<<"Enter the watts of Washing Machine\t";

	    cin>>watts_washingMachine;

	    cout<<endl;

	    cout<<"Enter the watts of laptop\t";

	    cin>>watts_laptop;

	    cout<<endl;

	    cout<<"enter the watts of electric_gizer\t";

	    cin>>watts_electric_gizer;

	    cout<<endl;

	    cout<<"Enter the watts of Microwave Oven\t";

	    cin>>watts_microwave_oven;

	    cout<<endl;

	    cout<<"enter the watts of Computer CPU\t";

	    cin>>watts_computer_cpu;

	    cout<<endl;

	    cout<<"enter the watts of video game\t";

	    cin>>watts_video_game;

	    cout<<endl;

	    //////////////////////////////////////hours in day///////////////////////

	      system("color 2F");

		cout<<"enter the number of hours bulbs working in day\t";

		cin>>hor_bulbs;

		cout<<"Enter the number of hours fans working in day\t";

		cin>>hor_fans;

		cout<<"enter the number of hours defrigiretor working in day\t";

		cin>>hor_defrigiretor;

		cout<<"enter the number of hours AC working in day\t";

		cin>>hor_AC;

		cout<<"Enter the number of hours iron working in day\t";

        cin>>hor_iron;

		cout<<"enter the number of hours tv working in day\t";

		cin>>hor__tv;

		cout<<"enter the number of hours computer monitor working in day\t";

		cin>>hor_computer_monitor;

		cout<<"enter the number of hours electric motor working in day\t";

		cin>>hor_electric_motor;

		cout<<"enter the number of hours mobile charger working in day\t";

		cin>>hor_mobile_charger;

		cout<<"enter the number of hours washing Machine working in day\t";

		cin>>hor_washingMachine;

		cout<<"enter the number of hours laptop working in day\t";

		cin>>hor_laptop;

		cout<<"enter the number of hours electric gizer working in day\t";

		cin>>hor_electric_gizer;

		cout<<"enter the number of hours microwave_oven working in day\t";

	    cin>>hor_microwave_oven;

		cout<<"enter the number of hours computer cpu working in day\t";

		cin>>hor_computer_cpu;

		cout<<"enter the number of hours video game working in day\t";

		cin>>hor_video_game;

	   cout<<"the days in the month\t";

	   cin>>days;

		}

		void showproduct(){

	    

	    cout<<"\n"<<"\n"<<"\n";

		/////////////////////////////////////total Number of devices consumed number of watts//////////////////////////////////////////

        cout<<"total Number of devices consumed number of watts\t\n";

		cout<<"The total Number of watts of bulbs usage\t"<<no_bulbs*watts_bulbs<<endl;

		cout<<"The total Number of watts of fans usage\t"<<no_fans*watts_fans<<endl;	

		cout<<"The total Number of watts of defrizr usage\t"<<no_defrigiretor*watts_defrigiretor<<endl;

		cout<<"The total Number of watts of AC usage\t"<<no_AC*watts_AC<<endl;

		cout<<"The total Number of watts of Iron usage\t"<<no_iron*watts_iron<<endl;

		cout<<"The total Number of watts of TV usage\t"<<no_tv*watts_tv<<endl;

		cout<<"The total Number of watts of computer usage\t"<<no_computer_monitor*watts_computer_monitor<<endl;

		cout<<"The total Number of watts of Electrical Motor usage\t"<<no_electric_motor*watts_electric_motor<<endl;

		cout<<"The total Number of watts of Mobile Charger usage\t"<<no_mobile_charger*watts_mobile_charger<<endl;

		cout<<"The total Number of watts of Washing Machine usage\t"<<no_washingMachine*watts_washingMachine<<endl;

		cout<<"the total Number of watts of laptop\t"<<no_laptop*watts_laptop<<endl;

		cout<<"The total Number of watts of elctric gizer\t"<<no_electric_gizer*watts_electric_gizer<<endl;

		cout<<"The Total Number of watts of Microwave Oven\t"<<no_microwave_oven*watts_microwave_oven<<endl;

		cout<<"The total Number of watts of Computer CPU\t"<<no_computer_cpu*watts_computer_cpu<<endl;

		cout<<"The total Number of watts of video game\t"<<no_video_game*watts_video_game<<endl;

		cout<<"\n"<<"\n"<<"\n";

/*Energy consumed by one appliance in one day indidual*/

        cout<<"total energy  consumed by  appliances\t\n";

		cout<<"The total energy consumed by bulbs usage\t"<<hor_bulbs*(no_bulbs*watts_bulbs)<<endl;

		cout<<"The total energy consumed by fans usage\t"<<hor_fans*(no_fans*watts_fans)<<endl;	

		cout<<"The total energy consumed by defrizr usage\t"<<hor_defrigiretor*(no_defrigiretor*watts_defrigiretor)<<endl;

		cout<<"The total energy consumed by AC usage\t"<<hor_AC*(no_AC*watts_AC)<<endl;

		cout<<"The total energy consumed by Iron usage\t"<<hor_iron*(no_iron*watts_iron)<<endl;

		cout<<"The total energy consumed by TV usage\t"<<hor__tv*(no_tv*watts_tv)<<endl;

		cout<<"The total energy consumed by computer monitor usage\t"<<hor_computer_monitor*(no_computer_monitor*watts_computer_monitor)<<endl;

		cout<<"The total energy consumed by Electrical Motor usage\t"<<hor_electric_motor*(no_electric_motor*watts_electric_motor)<<endl;

		cout<<"The total energy consumed by Mobile Charger usage\t"<<hor_mobile_charger*(no_mobile_charger*watts_mobile_charger)<<endl;

		cout<<"The total energy consumed by Washing Machine usage\t"<<hor_washingMachine*(no_washingMachine*watts_washingMachine)<<endl;

		cout<<"the total energy consumed by laptop\t"<<hor_laptop*(no_laptop*watts_laptop)<<endl;

		cout<<"The total energy consumed by elctric gizer\t"<<hor_electric_gizer*(no_electric_gizer*watts_electric_gizer)<<endl;

		cout<<"The Total energy consumed by Microwave Oven\t"<<hor_microwave_oven*(no_microwave_oven*watts_microwave_oven)<<endl;

		cout<<"The total energy consumed by Computer CPU\t"<<hor_computer_cpu*(no_computer_cpu*watts_computer_cpu)<<endl;

		cout<<"The total  energy consumed by in day video game\t"<<hor_video_game*(no_video_game*watts_video_game)<<endl;	

		cout<<"\n"<<"\n"<<"\n";

		////////////////////////////////////////Watts consumed by all appliances in one day/////////////

		cout<<"the total energy consumed in a whole day\t\t"<<(hor_bulbs*(no_bulbs*watts_bulbs))+(hor_fans*(no_fans*watts_fans))+(hor_defrigiretor*(no_defrigiretor*watts_defrigiretor))+

		(hor_AC*(no_AC*watts_AC))+(hor_iron*(no_iron*watts_iron))+(hor__tv*(no_tv*watts_tv))+(hor_computer_monitor*(no_computer_monitor*watts_computer_monitor))+(hor_laptop*(no_laptop*watts_laptop))

		+(hor_electric_motor*(no_electric_motor*watts_electric_motor))+(hor_mobile_charger*(no_mobile_charger*watts_mobile_charger))+(hor_washingMachine*(no_washingMachine*watts_washingMachine))+

		(hor_electric_gizer*(no_electric_gizer*watts_electric_gizer))+(hor_microwave_oven*(no_microwave_oven*watts_microwave_oven))+(hor_computer_cpu*(no_computer_cpu*watts_computer_cpu))+

		(hor_video_game*(no_video_game*watts_video_game));

		////////////////////the energy cosumed in the month

		if(days==28){

		cout<<"The energy consumed in moth\t"<<total_consumedinday*days;

		cout<<endl;

		}

		}

}; 

int main(){

	 elctricity_bills h1,h2,h3,h4;

	 system("color 3B");

	 h1.getproduct();

	 cout<<"\n"<<"\n"<<"\n";

	 system("color 8B");

	 h1.showproduct();

	 return 0;

}
