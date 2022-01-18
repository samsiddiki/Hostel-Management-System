#include<iostream>
#include<iomanip>
#include"classes.cpp"
using namespace std;
int main(){
	user student;
	hostelsystem H;
	Hostel hos;
	showdetails s;
	room R;
	string N,Pname,addres,city;
	int std_phone,parent_phone,range;
	char choice;
	do{
		cout<<setw(50)<<"***********************************"<<endl;
		cout<<setw(50)<<"*     HOSTEL MANAGEMENT SYSTEM     *"<<endl;
		cout<<setw(50)<<"***********************************"<<endl;
		cout<<endl;
		cout<<setw(42)<<"-----MAIN MENU-----"<<endl;
		cout<<setw(43)<<"1. Enter student data."<<endl;
		cout<<setw(59)<<"2. Show Hostels with respect to range."<<endl;
		cout<<setw(41)<<"3. Show stored data."<<endl;
		cout<<setw(28)<<"4. Exit"<<endl;
		cout<<setw(35)<<"Enter choice: ";
		cin>>choice;
		switch(choice){
			case '1':{
				cout<<"ENTER YOUR NAME: ";
				cin>>N;
				cout<<"ENTER YOUR FATHER'S NAME: ";
				cin>>Pname;
				cout<<"ENTER CITY: ";
				cin>>city;
				cout<<"ENTER HOUSE NUMBER: ";
				cin>>addres;
				cout<<"ENTER STUDENT'S PH#: ";
				cin>>std_phone;
				cout<<"ENTER FATHER/GUARDIAN'S PH#: ";
				cin>>parent_phone;
				student.setname(N);
				student.setparentname(Pname);
				student.setcity(city);
				student.setaddress(addres);
				student.set_stdphone(std_phone);
				student.set_parentphone(parent_phone);
				cout<<"Want to see MAIN MENU again Y/N: ";
				cin>>choice;
				system ("CLS");
			break;
		}
		break;
		case '2':{
			H.hostels();
			hos.hosteldetails();
			R.room23000(student);
			cout<<"Want to see MAIN MENU again Y/N: ";
			cin>>choice;
			system ("CLS");
		break;
		}
		break;
		case '3':{
			
			s.show2(student);
			cout<<"Want to see MAIN MENU again Y/N: ";
			cin>>choice;
			system ("CLS");
			break;
		}
		break;
		case 'a':{
			exit(0);
			break;
		}
	}
	}while(choice =='Y' || choice=='y');
}
