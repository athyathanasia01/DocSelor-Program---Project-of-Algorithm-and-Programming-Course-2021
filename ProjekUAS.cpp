#include <iostream>
#include <conio.h>
using namespace std;

void line(){
	cout << "\n================================================================================\n";
}

void DoctorChoose(){
	cout << " Choose your own doctor! " << endl;
	cout << " |1. dr. Evaningsih |  2. dr. Wiranto  |  3. dr. Wahyudi  |   4. dr. Joanna  | " << endl;
	cout << " |General Practician|General Practician|General Practician|General Practician| " << endl;
	cout << " |    Rp250.000,-   |    Rp250.000,-   |     Rp250.000,-  |    Rp250.000,-   | " << endl;
}

void dayVisit(){
	cout << " 1. Monday \n";
	cout << " 2. Tuesday \n";
	cout << " 3. Wednesday \n";
	cout << " 4. Thursday \n";
	cout << " 5. Friday \n";
	cout << " 6. Saturday \n";
	cout << endl;
}

struct patient{
	string first_name, second_name, family_name, address;
	int date, month, year;
};

int date_patient(int date){
	int DD;
	
	if (date==3){
		DD=0;
	} else if(date<3){
		DD=3-date;
	} else{
		DD=(30-date)+3;
	}
	
	return DD;
}

int month_patient(int date, int month){
	int MM;
	
	if (month==1){
		if ((date<3)||(date==3)){
			MM=0;
		} else if (date>3){
			MM=11;
		}
	} else if (month>1){
		MM=12-(month-1);
	}
	
	return MM;
}

int year_patient(int date, int month, int year){
	int YYYY;
	
	if (month==1){
		if ((date<3)||(date==3)){
			YYYY=2022-year;
		} else if (date>3){
			YYYY=(2022-year)-1;
		}
	} else if (month>1){
		YYYY=(2022-year)-1;
	}
	
	return YYYY;
}

void Bank(){
	cout << " 101. Bank A \n";
	cout << " 223. Bank B \n";
	cout << " 346. Bank C \n";
	cout << " 402. Bank D \n";
	cout << " 580. Bank E \n";
	cout <<endl;
}

int main(){
	cout << "                                 Welcome to DocSelor                                " << endl;
	line ();
	cout << endl;
	start :
		cout << "                                 Order a doctor now!                                " << endl;
		cout << endl;
		
		//show doctor choice
		DoctorChoose();
		cout << endl;
		
		//index doctor
		int i;
		
		//array of doctor price
		const int DoctorPrice[4]={250000, 250000, 250000, 250000};
		
		//array of doctor name
		const string DoctorName[4]={"dr. Evaningsih Dwi Rahayu", "dr. Wiranto Heri", "dr. Wahyudi Arya Chasbullah", "dr. Joanna Kristin Olivia"};
		
		cout << " Doctor you choose (Write the number code!) = "; cin>>i;
		cout << endl;
		
		//index day choice
		int h;
		
		//index session 
		int g=2;
		string session[g];
		
		switch(i){
			case 1:
				cout << " Choose visiting time! " << endl;
				dayVisit();
				cout << " Set the day (write the number code)    : "; cin >> h;
				if(h == 2){
					cout << " You get session 1 (08:00-12:00) " << endl;
					cout << " Please filling the patient's biodata!' " << endl;
					session[0]=" 08:00-12:00 ";
				} else if(h == 3){
					cout << " You get session 1 (07:00-11:00) " << endl;
					cout << " Please filling the patient's biodata!' " << endl;
					session[0]=" 07:00-11:00 ";
				} else if(h == 5){
					cout << " You get session 1 (13:00-17:00) " << endl;
					cout << " Please filling the patient's biodata!' " << endl;
					session[0]=" 13:00-17:00 ";
				} else if(h == 6){
					cout << " You get session 1 (09:00-10:00) " << endl;
					cout << " Please filling the patient's biodata!' " << endl;
					session[0]="09:00-10:00";
				} else {
					cout<<"Doctor is off on the day you choose :("<<endl;
					cout<<"Please back to doctor's order!"<<endl;
					goto start;
				}
				break;
			case 2:
				cout << " Choose visiting time! " << endl;
				dayVisit();
				cout << " Set the day (write the number code) : "; cin>>h;
				if(h == 1){
					cout << " You get session 1 (07:00-12:00) " << endl;
					cout << " please filling the patient's biodata! " << endl;
					session[0]=" 07:00-12:00";
				} else if(h == 3){
					int a;
					cout << " Please select your doctor's schedulle session! " << endl;
					cout << " 1. session 1 (16:00-17:00) 2. session 2 (18:00-20:00) " << endl;
					cout<<"Session you choose : "; cin>>a;
					if(a == 1){
						cout << " You got session 1 (16:00-17:00) " << endl;
						cout << " Please filling the patient's biodata! " << endl;
						session[0]=" 16:00-17:00 ";
					} else if(a == 2){
						cout << " You got session 2 (18:00-20:00) " << endl;
						cout << " Please filling the patient's bioadata! " << endl;
						session[1]=" 18:00-20:00 ";
					}
				} else if(h == 4){
					cout << " You got session 1 (13:00-17:00) " << endl;
					cout << " Please filling the patient's biodata! " << endl;
					session[0]=" 13:00-17:00 ";
				} else if(h == 6){
					cout << " You got session 1 (13:00-17:00) " << endl;
					cout << " Please filling the patient's biodata! " << endl;
					session[0]="13:00-17:00 ";
				} else if(h == 7){
					cout << " You got session 1 (18:00-21:00) " << endl;
					cout << " Please filling the patient's biodata! " << endl;
					session[0]=" 18:00-21:00 ";
				} else{
					cout << " Doctor is off on the day you choose :( " << endl;
					cout << " Please back to doctor's order! " << endl;
					goto start;
				}
				break;
			case 3:
				cout << " Choose visiting time! " << endl;
				dayVisit();
				cout << " Set the day (write the number code) : "; cin>>h;
				if(h == 1){
					cout << " You get session 1 (08:00-12:00) " << endl;	
					cout << " Please filling the patient's biodata! " << endl;
					session[0]=" 08:00-12:00 ";
				}else if(h == 2){
					cout << " You get session 1 (08:00-12:00) " << endl;
					cout << " Please filling the patient's biodata! " << endl;
					session[0]=" 08:00-12:00 ";
				} else if(h == 4){
					cout << " You get session 1 (07:00-10:00) " << endl;
					cout << " Please filling the patient's biodata! " << endl;
					session[0]=" 07:00-10:00 ";
				} else if(h == 5){
					int a;
					cout << " Please select your doctor's schedulle session! " << endl;
					cout << " 1. session 1 (11:00-12:00) 2. session 2 (13:00-16:00) " << endl;
					cout << " Session you choose : "; cin>>a;
					if(a == 1){
						cout << " You get session 1 (11:00-12:00) " << endl;
						cout << " Please filling the patient's biodata! " << endl;
						session[0]=" 11:00-12:00 ";
					} else if(a == 2){
						cout << " You get session 2 (13:00-16:00) " << endl;
						cout << " Please filling the patient's biodata! " << endl;		
						session[1]=" 13:00-16:00 ";
					}
				} else if(h == 7){
					cout << " You get session 1 (08:00-09:00) " << endl;
					cout << " Please filling the patient's biodata! " << endl;
					session[0]=" 08:00-09:00 ";
				} else{
					cout << " Doctor is off on the day you choose :( " << endl;
					cout << " Please back to doctor's order! " << endl;
					goto start;
				}
				break;
			case 4: 
				cout << " Choose visiting time! " << endl;
				dayVisit();
				cout << " Set the day (write the number code) : "; cin>>h;
				if(h == 2){
					cout << " You get session 1 (07:00-12:00) " << endl;
					cout << " Please filling the patient's biodata! " << endl;
					session[0]=" 07:00-12:00 ";
				} else if(h == 3){
					int a;
					cout << " Please select your doctor's schedulle session! " << endl;
					cout << " 1. session 1 (16:00-17:00) 2. session 2 (18:00-20:00) " << endl;
					cout << " Session you choose : "; cin>>a;
					if(a == 1){
						cout << " You get session 1 (16:00-17:00) " << endl;
						cout << " Please filling the patient's biodata! " << endl;
						session[0]=" 16:00-17:00 ";
					} else if(a == 2){
						cout << " You get session 2 (18:00-20:00) " << endl;
						cout << " Please filling the patient's biodata! " << endl;
						session[1]=" 18:00-20:00 ";
					}
				} else if(h == 5){
					int a;
					cout << " Please select your doctor's schedulle session! " << endl;
					cout << " 1. session 1 (08:00-10:00) 2. session 2 (13:00-18:00) " << endl;
					cout << " Session you choose : "; cin>>a;
					if(a == 1){
						cout << " You get session 1 (08:00-10:00) " << endl;
						cout << " Please filling the patient's biodata! " << endl;
						session[0]="08:00-10:00 ";
					} else if(a == 2){
						cout << " You get session 2 (13:00-18:00) " << endl;
						cout << " Please filling the patient's biodata!" << endl;
						session[1]=" 13:00-18:00 ";
					}
				} else if(h == 6){
					cout << " You get session 1 (07:00-09:00) " << endl;
					cout << " Please filling the patient's biodata! " << endl;
					session[0]=" 07:00-09:00 ";
				} else{
					cout << " Doctor is off on the day you choose :( " << endl;
					cout << " Please back to doctor's order! " << endl;
					goto start;
				}
				break;
			default :
				cout << " Input wrong " << endl;
				goto start;
		}
		char choice;
		patient ps;
		do {
			cout << endl;
			line();
			cout << " Please filling out the patient's biodata here below! " << endl;
			line();
			cout << " First name             : "; cin >> ps.first_name;
			cout << "\n Middle name            : "; cin >> ps.second_name;
			cout << "\n Family's name          : "; cin >> ps.family_name;
			cout << "\n Date of Birth          : "; cin >> ps.date;
			cout << "\n Month of Birth         : "; cin >> ps.month;
			cout << "\n Year of Birth          : "; cin >> ps.year;
			cout << "\n Age                    : " << year_patient(ps.date, ps.month, ps.year) << " year(s) ";
			cout << month_patient(ps.date, ps.month) << " month(s) " << date_patient(ps.date) << " day(s) " << endl;
			cout << "\n Address                : "; cin >> ps.address;
			cout << endl;
			line();
			cout << "Is the biodata has input correctly? Y/N"; cin >> choice;
		} while(choice == 'N' || choice == 'n');
		payment:
		cout << " Choose your payment method! " << endl;
		cout << endl;
		int pay;
		cout << " 1. Doctor's payment' " << endl;
		cout << " 2. Medicine's payment' " << endl;
		cout << " Do the payment for (write the number code!)    : "; cin >> pay;
		cout << endl;
		int receipt;
		if(pay == 2){
			cout << "        The receipt code given by doctor after consultation has done         " << endl;
			cout << "               Receipt code is a combination of 6 digits (0-9)               " << endl;
			cout << "============================================================================="<<endl;
			cout << endl;
			cout << " Enter the receipt code : "; cin>>receipt;
			cout <<endl;
			cout << "============================================================================="<<endl;
			cout << " Please do the transaction to redeem the medicine "<<endl;
		}
		line();
		cout << " Choose the bank! " << endl;
		cout << endl;
		Bank();
		int BC;
		string bank[5] = {"Bank A", "Bank B", "Bank C", "Bank D", "Bank E"};
		int rek;
		cout << " Bank you choose (write the bank code!)   : "; cin >> BC;
		if(BC == 101){
			cout << " Make sure you input the correct bank account as in accordance with the bank you choose! " << endl;
			cout << " DocSelor will not responsible to wrong input of bank account " << endl;
			cout << " Your total bill will be inputed automatically by system " << endl;
			cout << endl;
			cout << " Enter your bank account : "; cin >> rek;
			cout << endl;
			cout << " Please wait! Transaction is in progress " << endl;
			bank[0] = " Bank A ";
		} else if(BC == 223){
			cout << " Make sure you input the correct bank account as in accordance with the bank you choose! " << endl;
			cout << " DocSelor will not responsible to wrong input of bank account " << endl;
			cout << " Your total bill will be inputed automatically by system " << endl;
			cout << endl;
			cout << " Enter your bank account : "; cin >> rek;
			cout << endl;
			cout << " Please wait! Transaction is in progress " << endl;
			bank[1] = " Bank B ";
		} else if(BC == 346){
			cout << " Make sure you input the correct bank account as in accordance with the bank you choose! " << endl;
			cout << " DocSelor will not responsible to wrong input of bank account " << endl;
			cout << " Your total bill will be inputed automatically by system " << endl;
			cout << endl;
			cout << " Enter your bank account : "; cin >> rek;
			cout << endl;
			cout << " Please wait! Transaction is in progress " << endl;
			bank[2] = " Bank C ";
		} else if(BC == 402){
			cout << " Make sure you input the correct bank account as in accordance with the bank you choose! " << endl;
			cout << " DocSelor will not responsible to wrong input of bank account " << endl;
			cout << " Your total bill will be inputed automatically by system " << endl;
			cout << endl;
			cout << " Enter your bank account : "; cin >> rek;
			cout << endl;
			cout << " Please wait! Transaction is in progress " << endl;
			bank[3] = " Bank D ";
		} else if(BC == 580){
			cout << " Make sure you input the correct bank account as in accordance with the bank you choose! " << endl;
			cout << " DocSelor will not responsible to wrong input of bank account " << endl;
			cout << " Your total bill will be inputed automatically by system " << endl;
			cout << endl;
			cout << " Enter your bank account : "; cin >> rek;
			cout << endl;
			cout << " Please wait! Transaction is in progress " << endl;
			bank[4] = " Bank E ";
		} else {
			cout << " You enter the wrong bank code! " << endl;
			char ans;
			cout << " Want to continue the payment? Y/N "; cin >> ans;
			if((ans == 'Y') || (ans == 'y'))
			goto payment;
			else if((ans == 'N') || (ans == 'n')){
				char tanggap;
				cout << " Want to redo the consultation? Y/N "; cin >> tanggap;
				if((tanggap == 'Y') || (tanggap == 'y'))
				goto start;
				else {
					return 0;
				}
			}
		}
		cout << endl;
		int j = i - 1;
		int l;
		switch(BC){
			case 101:
				l = 0;
				break;
			case 223:
				l = 1;
				break;
			case 346:
				l = 2;
				break;
			case 402:
				l = 3;
				break;
			case 580:
				l = 4;
				break;
		}
		if(pay == 1){
			cout << "================================================================================" << endl;
			cout << "                               Transaction is success                           " << endl;
			cout << "================================================================================" << endl;
			cout << endl;
			cout << " A schedule ordered for " << DoctorName[j] << endl;
			cout << endl;
			cout << " Patient's Name : " << ps.first_name << " " << ps.second_name << " " << ps.family_name << endl;
			cout << " Patient's Address : " << ps.address << endl;
			cout << " DD-MM-YYYY of Birthday : " << ps.date << "-" << ps.month << "-" << ps.year << endl;
			cout << " Patient's age : " << year_patient(ps.date, ps.month, ps.year) << " year(s) " << month_patient(ps.date, ps.month);
			cout << " month(s) " << date_patient(ps.date) << " day(s) " << endl;
			cout << endl;
			cout << "================================================================================" << endl;
			cout << endl;
			cout << " Total bill : Rp" << DoctorPrice[j] << ",- paid successfully" << endl;
			cout << " via " << bank[l] << " with bank account " << rek << endl;
			cout << "================================================================================" << endl;
			cout << "                                    BILL PAID OFF                               " << endl;
			cout << endl;
			cout << "                                Please take the queue!                          " << endl;
			cout << "================================================================================" << endl;
		} else if(pay == 2){
			cout << "================================================================================" << endl;
			cout << "                                Transaction is success                          " << endl;
			cout << "================================================================================" << endl;
			cout << endl;
			cout << " Medicine payment with receipt code : " << receipt << endl;
			cout << endl;
			cout << "                                         ***                                    " << endl;
			cout << endl;
			cout << " Patient's Name : " << ps.first_name << " " << ps.second_name << " " << ps.family_name << endl;
			cout << " Patient's Address : " << ps.address << endl;
			cout << " DD-MM-YYYY of Birthday : " << ps.date << "-" << ps.month << "-" << ps.year << endl;
			cout << " Patient's age : " << year_patient(ps.date, ps.month, ps.year) << " year(s) " << month_patient(ps. date, ps.month);
			cout << " month(s) " << date_patient(ps.date) << " day(s) " << endl;
			cout << endl;
			cout << "================================================================================" << endl;
			cout << endl;
			cout << " Total bill : <sesuai UKT> paid successfully" << endl;
			cout << " via "<<bank[l]<<" with bank account " << rek << endl;
			cout << endl;
			cout << "================================================================================" << endl;
			cout << " Receipt Note : " << endl;
			cout << " 2 SKS English " << endl;
			cout << " 2 SKS Civic Education " << endl;
			cout << " 3 SKS Algorithm and Programming " << endl;
			cout << " 3 SKS Calculus " << endl;
			cout << " 3 SKS Information of Technology " << endl;
			cout << " 3 SKS Physic " << endl;
			cout << " 3 SKS Discrete Mathematic " << endl;
			cout << endl;
			cout << " Adding Note : " << endl;
			cout << " All consumed within 1 semester (6 months) " << endl;
			cout << "================================================================================" << endl;
			cout << "                                    BILL PAID OFF                               " << endl;
			cout << endl;
			cout << " Please take the queue! " << endl;
			cout << "================================================================================"<<endl;
		}
		cout << endl;
		cout << " Queue Menu " << endl;
		cout << "================================================================================"<<endl;
		cout << endl;
		int queue;
		cout << " Take a queue for " << endl;
		cout << " 1. Doctor consultation " << endl;
		cout << " 2. Pharmacy " << endl;
		cout << " Choose your queue (write the code number) : "; cin >> queue;
		if(queue == 1){
			if(i == 1){
				cout << "====================================================" << endl;
				cout << "                 Success to get queue               " << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				cout << "           <Queue number inputed by system>         " << endl;
				cout << "              dr. Evaningsih Dwi Rahayu             " << endl;
				cout << "                    General State                   " << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				cout << "              Please wait for your queue            " << endl;
				cout << "             Thank you for using DocSelor           " << endl;
				cout << "                    Get well soon                   " << endl;
				cout << "====================================================" << endl;
			} else if(i == 2){
				cout << "====================================================" << endl;
				cout << "                 Success to get queue               " << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				cout << "            <Queue number inputed by system>        " << endl;
				cout << "                    dr. Wiranto Heri                " << endl;
				cout << "                      General State                 " << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				cout << "                Please wait for your queue          " << endl;
				cout << "               Thank you for using DocSelor         " << endl;
				cout << "                      Get well soon                 " << endl;
				cout << "====================================================" << endl;
			} else if(i == 3){
				cout << "====================================================" << endl;
				cout << "                 Success to get queue               " << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				cout << "            <Queue number inputed by system>        " << endl;
				cout << "               dr. Wahyudi Arya Chasbullah          " << endl;
				cout << "                      General State                 " << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				cout << "                Please wait for your queue          " << endl;
				cout << "               Thank you for using DocSelor         " << endl;
				cout << "                      Get well soon                 " << endl;
				cout << "====================================================" << endl;
			} else if(i == 4){
				cout << "====================================================" << endl;
				cout << "                 Success to get queue               " << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				cout << "            <Queue number inputed by system>        " << endl;
				cout << "                dr. Joanna Kristin Olivia           " << endl;
				cout << "                      General State                 " << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				cout << "               Please wait for your queue           " << endl;
				cout << "              Thank you for using DocSelor          " << endl;
				cout << "                    Get well soon                   " << endl;
				cout << "====================================================" << endl;
			}
			cout << " In waiting room to wait for the doctor " << endl;
			cout << " Press any button if your consultation time has came! " << endl;
			getch();
			cout << " Consultation is doing " << endl;
			cout << " Press any button when the consultation is done! " << endl;
			getch();
			char resp;
			cout << " Get a receipt from doctor? Want to redeem the medicine receipt? Y/N "; cin >> resp;
			if((resp=='Y'||resp=='y'))
			goto payment;
		} else if(queue == 2){
			cout << "====================================================" << endl;
			cout << "                Success to get queue                " << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << "           <Queue number inputed by system>         " << endl;
			cout << "      Chemical Physic Mathematic Biology Pharma     " << endl;
			cout << "               Don't complain too much!             " << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << "              Please wait for your queue            " << endl;
			cout << "             Thank you for using DocSelor           " << endl;
			cout << "          I know you're get burning by tasks        " << endl;
			cout << "                  But get well soon                 " << endl;
			cout << "           Your medicine will sent to you           " << endl;
			cout << "           after final test in holiday :)           " << endl;
			cout << "====================================================" << endl;
		}
		cout << endl;
		char reply;
		cout << " Want to redo the consultation? Y/N "; cin >> reply;
		if((reply=='Y')||(reply=='y'))
		goto start;
		cout << endl;
		cout << " Program Created by : Annisa Intan Nuraini (2110631170052), Divasetya Pratama Putri (2110631170009) and ";
		cout << "Diva Ahmad Maulana (2110631170143) " << endl;
		return 0;
}


