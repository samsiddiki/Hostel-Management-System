#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
class user{
	string name;
	string address;
	string city;
	string parent_name;
	int std_phoneNum;
	int parent_phone;
	public:
		user(){
		}
		string getname(){
			return name;
		}
		string setname(string n){
			name=n;
			return name;
		}
		string getaddress(){
			return address;
		}
		void setaddress(string a){
			address=a;
		}
		string getcity(){
			return city;
		}
		void setcity(string c){
			city=c;
		}
		string getparentname(){
			return parent_name;
		}
		void setparentname(string P_name){
			parent_name=P_name;
		}
		int get_stdPhone(){
			return std_phoneNum;
		}
		void set_stdphone(int std_P){
			std_phoneNum=std_P;
		}
		int get_parentphone(){
			return parent_phone;
		}
		void set_parentphone(int parent_P){
			parent_phone=parent_P;
		}
};
int range;
char ch;
double six_monthfee,percent;
class showdetails{
	public:
		void show(user u,int sixmonth){
			ofstream of;
			cout<<"Your Data is stored in file STUDENT.TXT"<<endl;
			of.open("STUDENT.TXT",ios::app);
			of<<"Name:                 "<<u.getname()<<endl;
			of<<"Father's Name:        "<<u.getparentname()<<endl;
			of<<"Address:              "<<u.getaddress()<<endl;
			of<<"Student Ph#           "<<u.get_stdPhone()<<endl;
			of<<"Father/Guardian's Ph# "<<u.get_parentphone()<<endl;
			of<<"City:                 "<<u.getcity()<<endl;
			of<<"PAID FOR 6 MONTHS. PKR."<<six_monthfee-percent<<endl;
			of<<endl;
		}
		void show1(user u){
			ofstream off;
			cout<<"Your Data is stored in file STUDENT.TXT"<<endl;
			off.open("STUDENT.TXT" ,ios::app);
			off<<"Name:                 "<<u.getname()<<endl;
			off<<"Father's Name:        "<<u.getparentname()<<endl;
			off<<"Address:              "<<u.getaddress()<<endl;
			off<<"Student Ph#           "<<u.get_stdPhone()<<endl;
			off<<"Father/Guardian's Ph# "<<u.get_parentphone()<<endl;
			off<<"City:                 "<<u.getcity()<<endl;
			off<<endl;
		}
		void show2(user u){
			ifstream iff;
			iff.open("STUDENT.TXT");
			string text;
			while(getline(iff,text)){
				cout<<text<<endl;
			}
		}
};
class hostelsystem{
	char choice;
	public:
		user u;
		char getchooise(){
			return choice;
		}
		void setchoice(char c){
			choice=c;
		}
		void hostels(){
			cout<<"Enter your range: PKR";
			cin>>range;
			setchoice(range);
			if(range>=15000){
			cout<<"1. Youth hostel"<<endl;
			cout<<"2. Azam boyes hostel"<<endl;
			cout<<"3. Kehkashan hostel"<<endl;
	}
	else
	if(range<15000 && range>=10000)
	{
		cout<<"1. Shami hostel"<<endl;
		cout<<"2. Shalimar hostel"<<endl;
		cout<<"3. Prime hostel"<<endl;
	} 
	else if(range<10000){
		cout<<"1. Zee society"<<endl;
		cout<<"2. Live with style"<<endl;
		cout<<"3. Khan boyes"<<endl;
	}
}
};
class menu{
	public:
		void display(){
			cout<<"We have CHICKEN on Monday."<<endl;
			cout<<"We have MUTTON on Tuesday."<<endl;
			cout<<"We have BEEF on Wednesday."<<endl;
			cout<<"We have PIZZA on Thursday."<<endl;
			cout<<"We have VEGETRIAN RICE on Friday."<<endl;
			cout<<"We have BBQ on Saturday."<<endl;
			cout<<"We have BIRYANI on Sunday."<<endl;
		}
		void display1(){
			cout<<"We have CHICKEN on Monday."<<endl;
			cout<<"We have VEGETABLE on Tuesday."<<endl;
			cout<<"We have BIRYANI on Wednesday."<<endl;
			cout<<"We have KEEMA on Thursday."<<endl;
			cout<<"We have RICE on Friday."<<endl;
			cout<<"We have NEEHARI on Saturday."<<endl;
			cout<<"We have BURGER on Sunday."<<endl;
		}
		void display2(){
			cout<<"We have VEGETABLE on Monday."<<endl;
			cout<<"We have RICE on Tuesday."<<endl;
			cout<<"We have KEEMA on Wednesday."<<endl;
			cout<<"We have BURGER on Thursday."<<endl;
			cout<<"We have KARHAI on Friday."<<endl;
			cout<<"We have KABAB on Saturday."<<endl;
			cout<<"We have FRUITS on Sunday."<<endl;
		}
};
class room:public showdetails{
	public:
		void room23000(user u){
			if (range>=15000){
				cout<<"Which room you want?: ";
				cin>>ch;
				if(ch<'1' || ch>'4'){
				cout<<"invalid entry!!"<<endl;
				cout<<"Enter 1,2,3 or 4: ";
				cin>>ch;
				}
				switch(ch){
					case '1':
						{
							cout<<"-----Room of ONE person is Allocated to-----"<<endl;
							cout<<"Your monthly payment for ONE person room is 23000 rs."<<endl;
							cout<<"You will have 20% discount if you submit 6 months fee at a time."<<endl;
							six_monthfee=23000*6;
							cout<<"Your 6 month fee will be PKR"<<six_monthfee;
							percent=(20.0/100)*six_monthfee;
							cout<<" And after discount, Your fee is PKR"<<six_monthfee-percent<<endl;
							cout<<"Want to pay 6 months fee?? (Y/N)";
							cin>>ch;
							if(ch=='Y' || ch=='y'){
								show(u,six_monthfee);
							}
							else
							{
								show1(u);
							}
							break;
						}
						break;
					case '2':
						{
							cout<<"-----Room of TWO person is Allocated to-----"<<endl;
							cout<<"Your monthly payment for ONE person room is 20000 rs."<<endl;
							cout<<"You will have 20% discount if you submit 6 months fee at a time."<<endl;
							six_monthfee=20000*6;
							cout<<"Your 6 month fee will be PKR"<<six_monthfee;
							percent=(20.0/100)*six_monthfee;
							cout<<" And after discount, Your fee is PKR"<<six_monthfee-percent<<endl;
							cout<<"Want to pay 6 months fee?? (Y/N) ";
							cin>>ch;
							if(ch=='Y' || ch=='y'){
								show(u,six_monthfee);
							}
							else
							{
								show1(u);
							}
			break;
						}
						break;
					case '3':
						{
							cout<<"-----Room of THREE person is Allocated to-----"<<endl;
							cout<<"Your monthly payment for ONE person room is 18000 rs."<<endl;
							cout<<"You will have 20% discount if you submit 6 months fee at a time."<<endl;
							six_monthfee=18000*6;
							cout<<"Your 6 month fee will be PKR"<<six_monthfee;
							percent=(20.0/100)*six_monthfee;
							cout<<" And after discount, Your fee is PKR"<<six_monthfee-percent<<endl;
							cout<<"Want to pay 6 months fee?? (Y/N)";
							cin>>ch;
							if(ch=='Y' || ch=='y'){
								show(u,six_monthfee);
							}
							else
							{
								show1(u);
							}
			break;
						}
						break;
					case '4':
						{
							cout<<"-----Room of FOUR person is Allocated to-----"<<endl;
							cout<<"Your monthly payment for ONE person room is 15000 rs."<<endl;
							cout<<"You will have 20% discount if you submit 6 months fee at a time."<<endl;
							six_monthfee=15000*6;
							cout<<"Your 6 month fee will be PKR"<<six_monthfee;
							percent=(20.0/100)*six_monthfee;
							cout<<" And after discount, Your fee is PKR"<<six_monthfee-percent<<endl;
							cout<<"Want to pay 6 months fee?? (Y/N) ";
							cin>>ch;
							if(ch=='Y' || ch=='y'){
								show(u,six_monthfee);
							}
							else
							{
								show1(u);
							}
			break;
						}
						break;
				}
			}
			if (range<15000 && range >=10000){
				cout<<"Which room you want?: ";
				cin>>ch;
				if(ch<'1' || ch>'4'){
				cout<<"invalid entry!!"<<endl;
				cout<<"Enter 1,2,3 or 4: ";
				cin>>ch;
				}
				switch(ch){
					case '1':
						{
							cout<<"-----Room of ONE person is Allocated to-----"<<endl;
							cout<<"Your monthly payment for ONE person room is 15000 rs."<<endl;
							cout<<"You will have 20% discount if you submit 6 months fee at a time."<<endl;
							six_monthfee=15000*6;
							cout<<"Your 6 month fee will be PKR"<<six_monthfee;
							percent=(20.0/100)*six_monthfee;
							cout<<" And after discount, Your fee is PKR"<<six_monthfee-percent<<endl;
							cout<<"Want to pay 6 months fee?? (Y/N) ";
							cin>>ch;
							if(ch=='Y' || ch=='y'){
								show(u,six_monthfee);
							}
							else
							{
								show1(u);
							}
							break;
						}
						break;
					case '2':
						{
							cout<<"-----Room of TWO person is Allocated to-----"<<endl;
							cout<<"Your monthly payment for ONE person room is 12000 rs."<<endl;
							cout<<"You will have 20% discount if you submit 6 months fee at a time."<<endl;
							six_monthfee=12000*6;
							cout<<"Your 6 month fee will be PKR"<<six_monthfee;
							percent=(20.0/100)*six_monthfee;
							cout<<" And after discount, Your fee is PKR"<<six_monthfee-percent<<endl;
							cout<<"Want to pay 6 months fee?? (Y/N) ";
							cin>>ch;
							if(ch=='Y' || ch=='y'){
								show(u,six_monthfee);
							}
							else
							{
								show1(u);
							}
							break;
						}
						break;
					case '3':
						{
							cout<<"-----Room of THREE person is Allocated to-----"<<endl;
							cout<<"Your monthly payment for ONE person room is 10900 rs."<<endl;
							cout<<"You will have 20% discount if you submit 6 months fee at a time."<<endl;
							six_monthfee=10900*6;
							cout<<"Your 6 month fee will be PKR"<<six_monthfee;
							percent=(20.0/100)*six_monthfee;
							cout<<" And after discount, Your fee is PKR"<<six_monthfee-percent<<endl;
							cout<<"Want to pay 6 months fee?? (Y/N) ";
							cin>>ch;
							if(ch=='Y' || ch=='y'){
								show(u,six_monthfee);
							}
							else
							{
								show1(u);
							}
			break;
						}
						break;
					case '4':
						{
							cout<<"-----Room of FOUR person is Allocated to-----"<<endl;
							cout<<"Your monthly payment for ONE person room is 10000 rs."<<endl;
							cout<<"You will have 20% discount if you submit 6 months fee at a time."<<endl;
							six_monthfee=10000*6;
							cout<<"Your 6 month fee will be PKR"<<six_monthfee;
							percent=(20.0/100)*six_monthfee;
							cout<<" And after discount, Your fee is PKR"<<six_monthfee-percent<<endl;
							cout<<"Want to pay 6 months fee?? (Y/N) ";
							cin>>ch;
							if(ch=='Y' || ch=='y'){
								show(u,six_monthfee);
							}
							else
							{
								show1(u);
							}
			break;
						}
						break;
				}
			}
			if (range<10000){
				cout<<"Which room do you want? ";
				cin>>ch;
				if(ch<'1' || ch>'4'){
				cout<<"invalid entry!!"<<endl;
				cout<<"Enter 1,2,3 or 4: ";
				cin>>ch;
				}
				switch(ch){
					case '1':
						{
							cout<<"-----Room of ONE person is Allocated to-----"<<endl;
							cout<<"Your monthly payment for ONE person room is 10000 rs."<<endl;
							cout<<"You will have 10% discount if you submit 6 months fee at a time."<<endl;
							six_monthfee=10000*6;
							cout<<"Your 6 month fee will be PKR"<<six_monthfee;
							percent=(10.0/100)*six_monthfee;
							cout<<" And after discount, Your fee is PKR"<<six_monthfee-percent<<endl;
							cout<<"Want to pay 6 months fee?? (Y/N) ";
							cin>>ch;
							if(ch=='Y' || ch=='y'){
								show(u,six_monthfee);
							}
							else
							{
								show1(u);
							}
							break;
						}
						break;
					case '2':
						{
							cout<<"-----Room of TWO person is Allocated to-----"<<endl;
							cout<<"Your monthly payment for ONE person room is 8000 rs."<<endl;
							cout<<"You will have 10% discount if you submit 6 months fee at a time."<<endl;
							six_monthfee=8000*6;
							cout<<"Your 6 month fee will be PKR"<<six_monthfee;
							percent=(10.0/100)*six_monthfee;
							cout<<" And after discount, Your fee is PKR"<<six_monthfee-percent<<endl;
							cout<<"Want to pay 6 months fee?? (Y/N) ";
							cin>>ch;
							if(ch=='Y' || ch=='y'){
								show(u,six_monthfee);
							}
							else
							{
								show1(u);
							}
			break;
						}
						break;
					case '3':
						{
							cout<<"-----Room of THREE person is Allocated to-----"<<endl;
							cout<<"Your monthly payment for ONE person room is 6000 rs."<<endl;
							cout<<"You will have 6% discount if you submit 6 months fee at a time."<<endl;
							six_monthfee=6000*6;
							cout<<"Your 6 month fee will be PKR"<<six_monthfee;
							percent=(6.0/100)*six_monthfee;
							cout<<" And after discount, Your fee is PKR"<<six_monthfee-percent<<endl;
							cout<<"Want to pay 6 months fee?? (Y/N) ";
							cin>>ch;
							if(ch=='Y' || ch=='y'){
								show(u,six_monthfee);
							}
							else
							{
								show1(u);
							}
			break;
						}
						break;
					case '4':
						{
							cout<<"-----Room of FOUR person is Allocated to-----"<<endl;
							cout<<"Your monthly payment for ONE person room is 4000 rs."<<endl;
							cout<<"You will have 3% discount if you submit 6 months fee at a time."<<endl;
							six_monthfee=4000*6;
							cout<<"Your 6 month fee will be PKR"<<six_monthfee;
							percent=(3.0/100)*six_monthfee;
							cout<<" And after discount, Your fee is PKR"<<six_monthfee-percent<<endl;
							cout<<"Want to pay 6 months fee?? (Y/N) ";
							cin>>ch;
							if(ch=='Y' || ch=='y'){
								show(u,six_monthfee);
							}
							else
							{
								show1(u);
							}
							
			break;
						}
						break;
				}
			}
		}
};
class policy{
	public:
		void POLICY(){
			cout<<endl;
				cout<<"**************************POLICY**************************"<<endl;
				cout<<"-> Students should need to came to hostel before 10 AM."<<endl;
				cout<<"-> Student will be fined if they reach hostel after 10 AM."<<endl;
				cout<<"-> No relaxcation for using abusive language."<<endl;
				cout<<"-> Students will be provided with every neccassary needs."<<endl;
				cout<<"-> Students should need to pay fee on time."<<endl;
				cout<<"**********************************************************"<<endl;
				cout<<endl;
		}
};
class Hostel:public policy{
	public:
	void hosteldetails(){
		char ch,chh;
		int temp=range;
		menu M;
		if(temp>=15000){
			cout<<"Which Hostel you want to live?: ";
			cin>>ch;
			if(ch<'1' || ch>'3'){
				cout<<"invalid entry!!"<<endl;
				cout<<"Enter 1,2, or,3: ";
				cin>>ch;
			}
		switch(ch){
			case '1':
			{
				POLICY();
				cout<<setw(15)<<"----MENU----"<<endl;
				M.display();
				cout<<endl;
					cout<<"----ROOMS RENT PER MONTH----"<<endl;
				cout<<"1. One person room    (PKR23000 per month)"<<endl;
				cout<<"2. Two person room    (PKR20000 per month)"<<endl;
				cout<<"3. Three person room  (PKR18000 per month)"<<endl;
				cout<<"4. Four person room   (PKR15000 per month)"<<endl;
				break;
			}//case 1
			case '2':
				{
					POLICY();
					cout<<"----MENU----"<<endl;
					M.display();
					cout<<endl;
					cout<<"----ROOMS RENT PER MONTH----"<<endl;
				cout<<"1. One person room      (PKR23000 per month)"<<endl;
				cout<<"2. Two person room      (PKR20000 per month)"<<endl;
				cout<<"3. Three person room    (PKR18000 per month)"<<endl;
				cout<<"4. Four person room     (PKR15000 per month)"<<endl;
					break;
				}
			case '3':
				{
					POLICY();
					cout<<"----MENU----"<<endl;
					M.display();
					cout<<endl;
					cout<<"----ROOMS RENT PER MONTH----"<<endl;
				cout<<"1. One person room    (PKR23000 per month)"<<endl;
				cout<<"2. Two person room    (PKR20000 per month)"<<endl;
				cout<<"3. Three person room  (PKR18000 per month)"<<endl;
				cout<<"4. Four person room   (PKR15000 per month)"<<endl;
					break;
				}
		}//switch
	}else
	if(temp<15000 && temp>10000){
		cout<<"Which Hostel you want to live? ";
		cin>>ch;
		if(ch<'1' || ch>'3'){
				cout<<"invalid entry!!"<<endl;
				cout<<"Enter 1,2, or,3: ";
				cin>>ch;
			}
		switch(ch){
			case '1':
			{
				POLICY();
				cout<<"----MENU----"<<endl;
					M.display1();
					cout<<endl;
					cout<<"----ROOMS RENT PER MONTH----"<<endl;
				cout<<"1. One person room      (PKR15000 per month)"<<endl;
				cout<<"2. Two person room      (PKR12000 per month)"<<endl;
				cout<<"3. Three person room    (PKR10900 per month)"<<endl;
				cout<<"4. Four person room     (PKR10000 per month)"<<endl;
				break;
			}//case 1
			case '2':
				{
					POLICY();
					cout<<"----MENU----"<<endl;
					M.display1();
					cout<<endl;
					cout<<"----ROOMS RENT PER MONTH----"<<endl;
				cout<<"1. One person room      (PKR15000 per month)"<<endl;
				cout<<"2. Two person room      (PKR12000 per month)"<<endl;
				cout<<"3. Three person room    (PKR10900 per month)"<<endl;
				cout<<"4. Four person room     (PKR10000 per month)"<<endl;
					break;
				}
			case '3':
				{
					POLICY();
					cout<<"----MENU----"<<endl;
					M.display1();
					cout<<endl;
					cout<<"----ROOMS RENT PER MONTH----"<<endl;
				cout<<"1. One person room      (PKR15000 per month)"<<endl;
				cout<<"2. Two person room      (PKR12000 per month)"<<endl;
				cout<<"3. Three person room    (PKR10900 per month)"<<endl;
				cout<<"4. Four person room     (PKR10000 per month)"<<endl;
					break;
				}
		}//switch
	}
	if(temp<=10000){
		cout<<"Which Hostel you want to live? ";
		cin>>ch;
		if(ch<'1' || ch>'3'){
				cout<<"invalid entry!!"<<endl;
				cout<<"Enter 1,2, or,3: ";
				cin>>ch;
			}
		switch(ch){
			case '1':
			{
				POLICY();
				cout<<"----MENU----"<<endl;
					M.display2();
					cout<<endl;
					cout<<"----ROOMS RENT PER MONTH----"<<endl;
				cout<<"1. One person room       (PKR10000 per month)"<<endl;
				cout<<"2. Two person room       (PKR8000 per month)"<<endl;
				cout<<"3. Three person room     (PKR6000 per month)"<<endl;
				cout<<"4. Four person room      (PKR4000 per month)"<<endl;
				break;
			}//case 1
			case '2':
				{
					POLICY();
					cout<<"----MENU----"<<endl;
					M.display2();
					cout<<endl;
					cout<<"----ROOMS RENT PER MONTH----"<<endl;
				cout<<"1. One person room     (PKR10000 per month)"<<endl;
				cout<<"2. Two person room     (PKR8000 per month)"<<endl;
				cout<<"3. Three person room   (PKR6000 per month)"<<endl;
				cout<<"4. Four person room    (PKR4000 per month)"<<endl;
					break;
				}
			case '3':
				{
					POLICY();
					cout<<"----MENU----"<<endl;
					M.display2();
					cout<<endl;
					cout<<"----ROOMS RENT PER MONTH----"<<endl;
				cout<<"1. One person room      (PKR10000 per month)"<<endl;
				cout<<"2. Two person room      (PKR8000 per month)"<<endl;
				cout<<"3. Three person room    (PKR6000 per month)"<<endl;
				cout<<"4. Four person room     (PKR4000 per month)"<<endl;
					break;
				}
		}//switch
	}
}
};
