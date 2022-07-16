#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<fstream>
#include<conio.h>

using namespace std;
float rent=0;
int car=0;
char first_name[50]; 
char last_name[50];
char contact[12];
int days;

class car
{
	public:
		
		
		int n;
		char ch;
	
		static int figo,ritz,brio,fortuner,scorpio,innova,indigo,ethios,verna;
		
		void cust_details()
		{
			if(rent==0)
			{	 cout<<"\t\n";
				 cout<<"\tPlease provide cumstomer details\n\n";
				 cout<<"\tEnter first name : ";
				 cin>>first_name;
				 cout<<"\n";
				 cout<<"\tEnter last name : ";
				 cin>>last_name;
				 cout<<"\n";
				 cout<<"\tEnter contact no. : ";
				 cin>>contact;
				 cout<<"\t\n";
				 cout<<"\n";
			}
		}
				
};
int car::figo=1;
int car::ritz=2;
int car::brio=3;
int car::fortuner=3;
int car::scorpio=2;
int car::innova=4;
int car::indigo=2;
int car::ethios=1;
int car::verna=3;

class hatchback:public car
{
	public:
		void get_data()
		{
			std::cout<<left<<std::setw(60)<<"\t"<<"\n";
			
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"FORD FIGO";
			std::cout<<left<<std::setw(20)<<"RITZ";
			std::cout<<left<<std::setw(20)<<"BRIO";
			cout<<"\n\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"MODEL NO";
			std::cout<<left<<std::setw(20)<<"3AZY9";
			std::cout<<left<<std::setw(20)<<"TY56F";
			std::cout<<left<<std::setw(20)<<"MN90S";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"MILEAGE";
			std::cout<<left<<std::setw(20)<<"12";
			std::cout<<left<<std::setw(20)<<"11";
			std::cout<<left<<std::setw(20)<<"14";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"COLOR";
			std::cout<<left<<std::setw(20)<<"Black";
			std::cout<<left<<std::setw(20)<<"Grey";
			std::cout<<left<<std::setw(20)<<"White";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"COST";
			std::cout<<left<<std::setw(20)<<"900/day";
			std::cout<<left<<std::setw(20)<<"1100/day";
			std::cout<<left<<std::setw(20)<<"1200/day";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"\t\n";
			
		}
		void display()
		{
			std::cout<<std::setw(60)<<"\t--------------------------HATCHBACK CARS--------------------------\n\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"___________________________\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"___________________________\n\n\n";
			
			for(int i=1;i<=figo;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|FORD FIGO\n\n";
			}
			for(int i=1;i<=ritz;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|RITZ\n\n";
			}
			for(int i=1;i<=brio;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|BRIO\n\n";
			}
			std::cout<<left<<std::setw(20)<<"";
			cout<<"___________________________\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"___________________________\n";
			
			cout<<"\n";
		}		
		void buy_car()
		{
			
			cout<<"\tDo you want to rent a Hatchback car? If yes press 'Y' or press 'N' : ";
			cin>>ch;
			if(ch=='N'||ch=='n')
			{
				return;
			}
			else
			{
				cout<<"\n";
				cust_details();
				cout<<"\tEnter \n\t1.Ford Figo\n\t2 Ritz \n\t3 Brio \n\t";
				cin>>n;
				cout<<"\tEnter the number of days : ";
				cin>>days;
				cout<<"\n";
				switch(n)
				{
					case 1: if(figo==0)
						{
							cout<<"\t No cars are available, Pick another car\n";
						}
						else
						{	int car=1;
							cout<<"\t Total amount = "<<1000*days<<endl<<endl;
							rent+=1000*days;
							figo--;
						}	
						break;
					case 2: if(ritz==0)
						{
							cout<<"\t No cars are available, Pick another car\n";
						}
						else
						{	int car=2;
							cout<<"\tTotal amount = "<<1500*days<<endl<<endl;
							rent+=1500*days;
							ritz--;
						}	
						break;	
					case 3: if(brio==0)
						{
							cout<<"\t No cars are available, Pick another car\n";
						}
						else
						{	int car=3;
							cout<<"\tTotal amount = "<<1800*days<<endl<<endl;
							rent+=1800*days;
							brio--;
						}	
						break;	
					default: cout<<"\tEnter a valid input \n";
						 break;
				}
			}
		}
		
};
				
class SUV:public car
{
	public:
		void get_data()
		{
			std::cout<<left<<std::setw(20)<<"\t-------------------------------------------------------------------------------------";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"FORTUNER";
			std::cout<<left<<std::setw(20)<<"INNOVA";
			std::cout<<left<<std::setw(20)<<"SCORPIO";
			cout<<"\n\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"MODEL NO";
			std::cout<<left<<std::setw(20)<<"QE4C6";
			std::cout<<left<<std::setw(20)<<"OK89Y";
			std::cout<<left<<std::setw(20)<<"AW56C";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"MILEAGE";
			std::cout<<left<<std::setw(20)<<"17";
			std::cout<<left<<std::setw(20)<<"15";
			std::cout<<left<<std::setw(20)<<"13";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"COLOR";
			std::cout<<left<<std::setw(20)<<"Whitw";
			std::cout<<left<<std::setw(20)<<"Blue";
			std::cout<<left<<std::setw(20)<<"Black";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"COST";
			std::cout<<left<<std::setw(20)<<"800/day";
			std::cout<<left<<std::setw(20)<<"1500/day";
			std::cout<<left<<std::setw(20)<<"1400/day";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"\t-------------------------------------------------------------------------------------\n";
		}
		void display()
		{
			std::cout<<std::setw(60)<<"\t--------------------------------DETAILS OF SUV CARS-------------------------\n\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"___________________________\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"___________________________\n\n\n";
			
			for(int i=1;i<=fortuner;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|FORTUNER\n\n";
			}
			for(int i=1;i<=innova;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|INNOVA\n\n";
			}
			for(int i=1;i<=scorpio;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|SCORPIO\n\n";
			}
			std::cout<<left<<std::setw(20)<<"";
			cout<<"___________________________\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"___________________________\n";
			
			cout<<"\n";
		}		
		void buy_car()
		{
			cout<<"\t SUV car? If yes press 'Y' or press 'N' : ";
			cin>>ch;
			if(ch=='N'||ch=='n')
			{
				return;
			}
			else
			{
				cout<<"\n";
				cust_details();
				 cout<<"\t -------------------------------------------------------------------------------------\n";
				cout<<"\tEnter \n\t1.To rent Fortuner\n\t2.To rent Innova \n\t3.To rent Scorpio \n\t";
				cin>>n;
				cout<<"\tEnter the number of days : ";
				cin>>days;
				cout<<"\n";
				switch(n)
				{
					case 1: if(fortuner==0)
						{
							cout<<"\t No cars available , Pick another car\n";
						}
						else
						{	int car=7;
							cout<<"\tTotal amount = "<<4800*days<<endl<<endl;;
							rent+=4800*days;
							fortuner--;
							 cout<<"\t-------------------------------------------------------------------------------------\n";
						}	
						break;
					case 2: if(innova==0)
						{
							cout<<"\t No cars are available, Pick another car\n";
						}
						else
						{	int car=8;
							cout<<"\tTotal amount = "<<4500*days<<endl<<endl;
							rent+=4500*days;
							innova--;
							 cout<<"\t-------------------------------------------------------------------------------------\n";
						}	
						break;	
					case 3: if(scorpio==0)
						{
							cout<<"\t No cars are available, Pick another car\n";
						}
						else
						{	int car=9;
							cout<<"\tTotal amount = "<<4000*days<<endl<<endl;
							rent+=4000*days;
							scorpio--;
							 cout<<"\t-------------------------------------------------------------------------------------\n";
						}	
						break;	
					default: cout<<"\tEnter a valid input\n";
						 cout<<"\t-------------------------------------------------------------------------------------\n";
						break;
				}
			}
		}
};
class Sedan:public car
{
	public:
		void get_data()
		{
			std::cout<<left<<std::setw(20)<<"\t------------------------------------------------------------------------------------";
			cout<<"\n";
			
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"INDIGO";
			std::cout<<left<<std::setw(20)<<"ETHIOS";
			std::cout<<left<<std::setw(20)<<"VERNA";
			cout<<"\n\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"MODEL NO";
			std::cout<<left<<std::setw(20)<<"DS56A";
			std::cout<<left<<std::setw(20)<<"HJ67Q";
			std::cout<<left<<std::setw(20)<<"67GF3";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"MILEAGE";
			std::cout<<left<<std::setw(20)<<"15";
			std::cout<<left<<std::setw(20)<<"12";
			std::cout<<left<<std::setw(20)<<"11";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"COLOR";
			std::cout<<left<<std::setw(20)<<"White";
			std::cout<<left<<std::setw(20)<<"Silver";
			std::cout<<left<<std::setw(20)<<"Black";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"";
			std::cout<<left<<std::setw(20)<<"COST";
			std::cout<<left<<std::setw(20)<<"2200/day";
			std::cout<<left<<std::setw(20)<<"1500/day";
			std::cout<<left<<std::setw(20)<<"2800/day";
			cout<<"\n";
			std::cout<<left<<std::setw(20)<<"\t-------------------------------------------------------------------------------------\n";
		}
		void display()
		{
			std::cout<<std::setw(60)<<"\t-------------------------------- SEDAN CARS------------------------------\n\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"___________________________\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"___________________________\n\n\n";
			
			for(int i=1;i<=indigo;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|INDIGO\n\n";
			}
			for(int i=1;i<=ethios;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|ETHIOS\n\n";
			}
			for(int i=1;i<=verna;i++)
			{
				std::cout<<left<<std::setw(20)<<"";
				cout<<"|VERNA\n\n";
			}
			std::cout<<left<<std::setw(20)<<"";
			cout<<"___________________________\n";
			std::cout<<left<<std::setw(20)<<"";
			cout<<"___________________________\n";
			
			cout<<"\n";
		}
		void buy_car()
		{
			
			cout<<"\tDo you wanna rent a Sedan car? If yes press 'Y' or press 'N' : ";
			cin>>ch;
			if(ch=='N'||ch=='n')
			{
				return;
			}
			else
			{
				cout<<"\n";
				cust_details();
				 cout<<"\t-------------------------------------------------------------------------------------\n";
				cout<<"\tEnter \n\t1.To rent Indigo\n\t2.To rent Ethios \n\t3.To rent Verna \n\t";
				cin>>n;
				cout<<"\tEnter the number of days : ";
				cin>>days;
				cout<<"\n";
				switch(n)
				{
					case 1: if(indigo==0)
						{
							cout<<"/t No cars are available, Pick another car\n";
						}
						else
						{	int car=4;
							cout<<"\tTotal amount = "<<3000*days<<endl<<endl;
							rent+=3000*days;
							indigo--;
							 cout<<"\t-------------------------------------------------------------------------------------\n";
						}	
						break;
					case 2: if(ethios==0)
						{
							cout<<"\t No cars are available, Pick another car\n";
						}
						else
						{	int car=5;
							cout<<"\tTotal amount = "<<3500*days<<endl<<endl;
							rent+=3500*days;
							ethios--;
							 cout<<"\t-------------------------------------------------------------------------------------\n";
						}	
						break;	
					case 3: if(verna==0)
						{
							cout<<"\tSorry no cars available in this category, Pick another car \n";
						}
						else
						{	int  car=6;
							cout<<"\tTotal amount = "<<3800*days<<endl<<endl;
							rent+=3800*days;
							verna--;
							 cout<<"\t-------------------------------------------------------------------------------------\n";
						}	
						break;	
					default: cout<<"\t Enter a valid input \n";
					 	cout<<"\t-------------------------------------------------------------------------------------\n";
						break;
				}
			}
		}
};

class fare:virtual public hatchback,virtual public Sedan,virtual public SUV
{
	public:
		int m;
		void display()
		{
			 cout<<"\t-------------------------------------------------------------------------------------\n";
			cout<<"\tPlease enter the kind of car u wamt \n";
			cout<<"\t1.Hatchback \n\t2.Sedan \n\t3.SUV\n\t";
			cin>>m;
			 cout<<"\t-------------------------------------------------------------------------------------\n";
			switch(m)
			{
				case 1: hatchback::display();
					hatchback::get_data();
					hatchback::buy_car();
					break;
				case 2: Sedan::display();
					Sedan::get_data();
					Sedan::buy_car();
					break;
				case 3: SUV::display();
					SUV::get_data();
					SUV::buy_car();
					break;
			}
		}
		
};		
int main()
{
	char ch;
	fare r;
	
	cout<<"\t-------------------------------WELCOME TO CAR RENTALS SERVICE-----------------------------\n";
	r.display();
	
		ofstream file;
	file.open("Customer_details.txt");
	file<<"\n\n\t****************************** Rentals ******************************\n";
	file<<"\t                                  RECEIPT                                    \n\n";   
	file<<"\t CUSTOMER DETAILS: \n\n";
	file<<"\t CUSTOMER NAME : "<<first_name<<"  "<<last_name<<endl<<endl;
	file<<"\t CONTACT : "<<contact<<endl<<endl;
	file<<"__________________________________________________________________________________\n\n\t";

	for(;;)
	{
	
		do
		{
			cout<<"\n";
	
			if(car==1)
			{
				file<<left<<setw(20)<<" FORD FIGO :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.1000";
				file<<left<<setw(20)<<1000*days<<"\n\t";
			}
			
			if(car==2)
			{
				file<<left<<setw(20)<<" RITZ :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.1500";
				file<<left<<setw(20)<<1500*days<<"\n\t";
			}
			
			if(car==3)
			{
				file<<left<<setw(20)<<" BRIO :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.1800";
				file<<left<<setw(20)<<1800*days<<"\n\t";
			}
			if(car==4)
			{
				file<<left<<setw(20)<<" INDIGO :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.3000";
				file<<left<<setw(20)<<3000*days<<"\n\t";
			}	
			if(car==5)
			{
				file<<left<<setw(20)<<" ETHIOS :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.3500";
				file<<left<<setw(20)<<3500*days<<"\n\t";
			}
			if(car==6)
			{
				file<<left<<setw(20)<<" VERNA :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.3800";
				file<<left<<setw(20)<<3800*days<<"\n\t";
			}
			if(car==7)
			{
				file<<left<<setw(20)<<" FORTUNER :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.4800";
				file<<left<<setw(20)<<4800*days<<"\n\t";
			}
			if(car==8)
			{
				file<<left<<setw(20)<<" INNOVA :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.4500";
				file<<left<<setw(20)<<4500*days<<"\n\t";
			}
			if(car==9)
			{
				file<<left<<setw(20)<<" SCORPIO :";
				file<<left<<setw(20)<<days;
				file<<left<<setw(20)<<"Rs.4000";
				file<<left<<setw(20)<<4000*days<<"\n\t";
			}
	
			cout<<"\tDo you want to rent another car? If yes press 'Y' or press 'N' : ";
			cin>>ch;
			if(ch=='n'||ch=='N')
				break;
				
			r.display();
		}while(ch=='y'||ch=='Y');
		file.close();
		
			string linesread;
			    ifstream infile ("Customer_details.txt");
			    if (infile.is_open())
			    {
				while ( getline (infile, linesread) )
				{
				    cout << linesread << endl;
				}
				infile.close();
			    }
			    else cout << "File cannot be read";
			
			
			cout<<"\tThank You for visiting\n";
			cout<<"\tTOTAL RENT : "<<rent<<endl;
			exit(0);	
	}
	return 0;
}


