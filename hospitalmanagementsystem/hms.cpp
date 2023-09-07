#include <iostream>
#include <list>
#include <string.h>
#include <cstdlib>
using namespace std;
void display(int,int,int);
class Patient;//forward declaration of class
class Med_details
{
    public: char patient_name[30];
            char doctor_name[30];
            char timing[30];
            int fees;

public:
        void input_Det();
        void output_Det();
        void output_Exp();
};
void Med_details::input_Det()
{
    cout<<"\n-----------------------------------------\n"<<endl;
    cout<<"TO HELP US KEEP THE RECORDS PLEASE FILL THIS FORM: "<<endl;
    cout<<"\n-----------------------------------------\n"<<endl;
    cout<<"Enter your name: "<<endl;
    cin>>patient_name;
    cout<<endl;
    cout<<"Enter the doctor's name you want to consult with: "<<endl;
    cin>>doctor_name;
    cout<<endl;
    cout<<"Enter the timings for your appointment: "<<endl;
    cin>>timing;
    cout<<endl;
    cout<<"Enter the visiting fees of your doctor: "<<endl;
    cin>>fees;
}
void Med_details::output_Det()
{
    cout<<patient_name<<"\t\t"<<doctor_name<<"\t\t\t\t"<<timing<<"\t\t\t\t"<<fees<<endl;

}
void Med_details::output_Exp()
{
    int ch,reg_fee=1000,med_fee,doc_fee,ch1;
    char n[50];
    cout<<"Enter your name: ";
    cin>>n;
        cout<<"Please choose the category of the medicine you need: "<<endl;
        cout<<"1.Cardiovascular Medicine"<<endl;
        cout<<"2.Gastrology Medicine"<<endl;
        cout<<"3.Dermatological Medicine"<<endl;
        cout<<"4 Psychiatric Medicine"<<endl;
        cin>>ch1;
        switch(ch1)
        {
            case 1: med_fee=2500;
            doc_fee=1500;
            cout<<"Patient's name: \t"<<n;
            display(reg_fee,med_fee,doc_fee);
                    break;

            case 2: med_fee=1500;
            doc_fee=1000;
            cout<<"Patient's name: \t"<<n;
            display(reg_fee,med_fee,doc_fee);
                    break;

            case 3: med_fee=1200;
            doc_fee=700;
            cout<<"Patient's name: \t"<<n;
            display(reg_fee,med_fee,doc_fee);
                    break;


            case 4: med_fee=1100;
            doc_fee=800;
            cout<<"Patient's name: \t"<<n;
            display(reg_fee,med_fee,doc_fee);
                    break;

            default: cout<<"Invalid choice!";

        }
    }
class Patient:public Med_details
{
	public:
    char name[50];
    char sex;
    int age;
    float weight;
    float height;
    char email[30];
    unsigned long long int contact;
    char vaccinated;
  public:

// default constructor
    Patient()
    {

        strcpy(name,"N/A");
        sex = ' ';
        age = 0;
        weight=0.0;
        height=0.0;
        strcpy(email,"N/A");
        contact=0;
        vaccinated= ' ';
    }

// Parameterized constructor
    Patient(char *pName, char pSex,int pAge,float pWeight,float pHeight,char *pEmail,unsigned long long int pContact,char pVaccinated)

    {
        strcpy(name,pName);
        sex=pSex;
        age=pAge;
        weight=pWeight;
        height=pHeight;
        strcpy(email,pEmail);
        contact=pContact;
        vaccinated=pVaccinated;
    }
    void getDetails();
    void showDetails();


};

void Patient::getDetails()
{
    cout<<"\n-----------------------------------------\n"<<endl;
    cout<<"Enter the Personal details of the Patient"<<endl;
    cout<<"\n-----------------------------------------\n"<<endl;
    cout<<endl;
    cout<<"Enter the Name of the Patient:"<<endl;
		cin>>name;
		cout<<endl;
		cout<<"Enter the Gender of the Patient:"<<endl;
		cin>>sex;
		cout<<endl;
		cout<<"Enter the Age of the Patient:"<<endl;
		cin>>age;
		cout<<endl;
		cout<<"Enter the Height of the Patient:"<<endl;
		cin>>height;
		cout<<endl;
		cout<<"Enter the Weight of the Patient:"<<endl;
		cin>>weight;
		cout<<endl;
		cout<<"Enter the Email of the Patient:"<<endl;
		cin>>email;
		cout<<endl;
		cout<<"Enter the Contact Number of the Patient: "<<endl;
		cin>>contact;
		cout<<endl;
		cout<<"Enter whether the Patient is Vaccinated(Covid 19): "<<endl;
		cin>>vaccinated;
		cout<<endl;
}
void Patient::showDetails()
{
    cout<<name<<"\t"<<sex<<"\t"<<age<<"\t"<<weight<<"\t"<<height<<"\t"<<email<<"\t\t"<<contact<<"\t"<<vaccinated<<"\t"<<endl;
}
int main()
{

    list<Patient> lst;
	list<Patient>::iterator it;
	list<Med_details> mst;
    list<Med_details>::iterator its;
    Med_details m1;
    Med_details temp1;
	Patient p1;
	Patient temp;
	int choice,flag;
    while (1)
    {
        cout<<"\n-------------------------------------------\n"<<endl;
        cout<<"        Healthcare Management System           "<<endl;
        cout<<"\n-------------------------------------------\n"<<endl;
        cout<<"1.New Patient's details."<<endl;
        cout<<"2.Booking an appointment."<<endl;
        cout<<"3.Delete Patient's records."<<endl;
    	cout<<"4.View all Expenses."<<endl;
    	cout<<"5.View all Patient's records."<<endl;
    	cout<<"6.Leave the Hospital."<<endl;
        cout<<"\nEnter your Choice: ";
        cin>>choice;
        switch(choice)
        {

        case 1:
            p1.getDetails();
            lst.push_back(p1);
            break;
        case 2:
        int ch1;
               cout<<"\n-----------------------------------------\n"<<endl;
                 cout<<"    Welcome to the Appointment Center"<<endl;
                 cout<<"\n-----------------------------------------\n"<<endl;
                 cout<<endl;
            cout<<"Select the symptoms you may be suffering from: "<<endl;
            cout<<endl;
            cout<<"1.Chest Pain, Chest discomfort, Shortness of breath, Pain in the neck, Jaw, Throat, Upper Abdomen or Back."<<endl;
            cout<<endl;
            cout<<"2.Abdominal pain and discomfort, Constipation and Diarrhea, Nausea, Vomiting."<<endl;
            cout<<endl;
            cout<<"3.Skin, Hair, Nails, and Adjacent Mucous Membranes Disorders. "<<endl;
            cout<<endl;
            cout<<"4.Emotional and Mental Illness (Physical, Emotional, Behavioural)."<<endl;
            cout<<endl;
            cout<<"\nEnter your choice: ";
            cin>>ch1;


            switch(ch1)
            {
                case 1: int ch2;
                cout<<"YOU ARE GUIDED TO OUR CARDIOLOGY DEPARTMENT"<<endl;
                cout<<endl;
                cout<<"Below is the list of the our available doctors with their timings. Kindly select one according to your need."<<endl;
                cout<<endl;
                cout<<"SERIAL NO"<<"\t"<<"\t"<<"NAME"<<"\t"<<"\t"<<"\t"<<"APPOINTMENT TIME"<<endl;
                cout<<"1."<<"\t"<<"\t"<<"Dr. KINJAL BARANWAL "<<"\t"<<"\t"<<"10AM-1:30PM"<<endl;
                cout<<"2."<<"\t"<<"\t"<<"Dr. ADITYA SINGH "<<"\t"<<"\t"<<"11AM-12:30PM"<<endl;
                cout<<endl;
                cout<<"Enter the Doctor you wish to consult: "<<endl;
                cin>>ch2;


                switch(ch2)
                {
                    case 1:
                        cout<<"YOUR APPOINTMENT WITH DR KINJAL BARANWAL IS FIXED AT TIME 10AM-1:30PM..."<<endl;
                        cout<<endl;
                    cout<<"YOUR APPOINTMENT FEE IS RS 1500"<<endl;
                    cout<<endl;
                    cout<<"THANK YOU!"<<endl;
                    break;

                    case 2: cout<<"YOUR APPOINTMENT WITH DR ADITYA SINGH IS FIXED AT TIME 11AM-12:30PM..."<<endl;
                    cout<<endl;
                    cout<<"YOUR APPOINTMENT FEE IS RS 1500"<<endl;
                    cout<<endl;
                    cout<<"THANK YOU!"<<endl;
                    break;
                    default:cout<<"Invalid choice";
                }
                break;




                case 2: int ch3;
                 cout<<"YOU ARE GUIDED TO OUR GASTROLOGY DEPARTMENT"<<endl;
                 cout<<endl;
                cout<<"Below is the list of the our available doctors with their timings. Kindly select one according to your need."<<endl;
                cout<<endl;
                cout<<"SERIAL NO"<<"\t"<<"\t"<<"NAME"<<"\t"<<"\t"<<"\t"<<"APPOINTMENT TIME"<<endl;
                cout<<"1."<<"\t"<<"\t"<<"Dr NEHAL JAISWAL"<<"\t"<<"\t"<<"02:00PM-03:30PM"<<endl;
                cout<<"2."<<"\t"<<"\t"<<"Dr AJAY GUPTA"<<"\t"<<"\t"<<"04:00PM-05:30PM"<<endl;
                cout<<endl;
                cout<<"Enter the doctor you wish to consult: "<<endl;
                cin>>ch3;
                switch(ch3)
                {
                    case 1: cout<<"YOUR APPOINTMENT WITH DR NEHAL JAISWAL IS FIXED AT TIME 02:00PM-03:30PM..."<<endl;
                    cout<<endl;
                    cout<<"YOUR APPOINTMENT FEE IS RS 1000"<<endl;
                    cout<<endl;
                    cout<<"THANK YOU!!"<<endl;
                    break;

                    case 2: cout<<"YOUR APPOINTMENT WITH DR AJAY GUPTA IS FIXED AT TIME 04:00PM-05:30PM..."<<endl;
                    cout<<endl;
                    cout<<"YOUR APPOINTMENT FEE IS RS 1000"<<endl;
                    cout<<endl;
                    cout<<"THANK YOU!!"<<endl;
                }
                break;


                case 3: int ch5;
                 cout<<"YOU ARE GUIDED TO OUR DERMATOLOGY DEPARTMENT"<<endl;
                 cout<<endl;
                cout<<"Below is the list of the our available doctors with their timings. Kindly select one according to your need."<<endl;
                cout<<endl;
                cout<<"SERIAL NO"<<"\t"<<"\t"<<"NAME"<<"\t"<<"\t"<<"\t"<<"APPOINTMENT TIME"<<endl;
                cout<<"1."<<"\t"<<"\t"<<"Dr DIPIKA MAHESHWARI"<<"\t"<<"\t"<<"06:00PM-07:30PM"<<endl;
                cout<<"2."<<"\t"<<"\t"<<"Dr MAMTA KHANNA"<<"\t"<<"\t"<<"\t"<<"10:00AM-12:00PM"<<endl;
                cout<<endl;
                cout<<"Enter the Doctor you wish to consult: "<<endl;
                cin>>ch5;
                switch(ch5)
                {
                    case 1: cout<<"YOUR APPOINTMENT WITH DR DIPIKA MAHESHWARI IS FIXED AT TIME 06:00PM-07:30PM..."<<endl;
                    cout<<endl;
                    cout<<"YOUR APPOINTMENT FEE IS RS 700"<<endl;
                    cout<<endl;
                    cout<<"THANK YOU!"<<endl;
                    break;

                    case 2: cout<<"YOUR APPOINTMENT WITH DR MAMTA KHANNA IS FIXED AT TIME 10:00AM-12:00PM..."<<endl;
                    cout<<endl;
                    cout<<"YOUR APPOINTMENT FEE IS RS 700"<<endl;
                    cout<<endl;
                    cout<<"THANK YOU!!"<<endl;
                }
                break;




                 case 4: int ch6;
                 cout<<"YOU ARE GUIDED TO OUR PSYCHIATRY DEPARTMENT"<<endl;
                 cout<<endl;
                cout<<"Below is the list of the our available doctors with their timings. Kindly select one according to your need."<<endl;
                cout<<endl;
                cout<<"SERIAL NO"<<"\t"<<"\t"<<"NAME"<<"\t"<<"\t"<<"\t"<<"APPOINTMENT TIME"<<endl;
                cout<<"1."<<"\t"<<"\t"<<"Dr PRABHAKAR"<<"\t"<<"\t"<<"11AM-12:30PM"<<endl;
                cout<<"2."<<"\t"<<"\t"<<"Dr DIKSHA RAWAT"<<"\t"<<"\t"<<"01:00PM-02:30PM"<<endl;
                cout<<endl;
                cout<<"Enter the doctor you wish to consult: "<<endl;
                cin>>ch6;
                switch(ch6)
                {
                    case 1: cout<<"YOUR APPOINTMENT WITH DR PRABHAKAR IS FIXED AT TIME 11AM-12:30PM..."<<endl;
                    cout<<endl;
                    cout<<"YOUR APPOINTMENT FEE IS RS 800"<<endl;
                    cout<<endl;
                    cout<<"THANK YOU!"<<endl;
                    break;

                    case 2: cout<<"YOUR APPOINTMENT WITH DR DIKSHA RAWAT IS FIXED AT TIME 01:00PM-02:30PM..."<<endl;
                    cout<<endl;
                    cout<<"YOUR APPOINTMENT FEE IS RS 800"<<endl;
                    cout<<endl;
                    cout<<"THANK YOU!!"<<endl;
                }
                break;



            }
           m1.input_Det();
            mst.push_back(m1);
            break;

//deleting records
            case 3:int c;
                cout<<"Press 1 to delete Patient's Personal Record:"<<endl<<"Press 2 to delete Patient's Medical Records: "<<endl;
            cin>>c;
            if(c==1)
            {
                cout<<endl;
                cout<<"The personal details of the patient before deleting are: "<<endl;
                cout<<endl;
                cout<<"Name"<<"\t"<<"\t"<<"Sex"<<"\t"<<"\t"<<"Age"<<"\t"<<"\t"<<"Weight"<<"\t"<<"\t"<<"Height"<<"\t"<<"\t"<<"Email"<<"\t"<<"\t\t"<<"Contact no"<<"\t"<<"\t"<<"Vaccinated"<<"\t"<<endl;
                for(it = lst.begin(); it != lst.end(); ++it)
                    it->showDetails();

                cout <<"\t"<< endl;
                temp = lst.front();
                lst.pop_front();

                cout<<"The personal details of the patient after deleting are: "<<endl;
                cout<<endl;
                cout<<"Name"<<"\t"<<"\t"<<"Sex"<<"\t"<<"\t"<<"Age"<<"\t"<<"\t"<<"Weight"<<"\t"<<"\t"<<"Height"<<"\t"<<"\t"<<"Email"<<"\t\t"<<"\t"<<"Contact no"<<"\t"<<"\t"<<"Vaccinated"<<"\t"<<endl;
                for(it = lst.begin(); it != lst.end(); ++it)
                    it->showDetails();

                cout <<"\t"<< endl;

            }
            else //deleting medical record
            {
                cout<<endl;
                cout<<"The medical details of the patients before deleting are: "<<endl;
                cout<<endl;
                cout<<"Patient's Name"<<"\t"<<"\t"<<"Consulting Doctor"<<"\t"<<"\t"<<"Visiting Department"<<"\t"<<"\t\t"<<"Appointment Timings"<<"\t"<<"\t\t"<<"Doctor's' Fee"<<endl;
                for(its = mst.begin(); its != mst.end(); ++its)
                    its->output_Det();

                cout <<"\t"<< endl;
                temp1 = mst.front();
                mst.pop_front();
                cout<<endl;
                cout<<"The medical details of the patients after deleting are: "<<endl;
                cout<<endl;
                cout<<"Patient's Name"<<"\t"<<"\t"<<"Consulting Doctor"<<"\t"<<"\t"<<"Visiting Department"<<"\t"<<"\t\t"<<"Appointment Timings"<<"\t"<<"\t\t"<<"Doctor's' Fee"<<endl;
                for(its = mst.begin(); its != mst.end(); ++its)
                    its->output_Det();

                cout <<"\t"<< endl;
            }
            cout<<"THANK YOU!"<<endl;
            break;


        case 4: temp1.output_Exp();
            break;


//veiw details
        case 5:int c1;
            cout<<endl;
            cout<<"Press 1 to view all Patient's Personal Record:"<<endl<<"Press 2 to view all Patient's Medical Records: "<<endl;
            cin>>c1;
            if(c1==1)
            {
                cout<<endl;
                cout<<"The personal details of the patient are: "<<endl;
                cout<<endl;
                cout<<"Name"<<"\t"<<"Sex"<<"\t"<<"Age"<<"\t"<<"Weight"<<"\t"<<"Height"<<"\t"<<"Email"<<"\t\t\t"<<"Contact Number"<<"\t"<<"Vaccinated"<<"\t"<<endl;
    for(it = lst.begin(); it != lst.end(); ++it)
        it->showDetails();

    cout <<"\t"<< endl;
                        cout<<"THANK YOU!"<<endl;
            }



            else
            {
                cout<<endl;
                cout<<"The medical details of the patient are: "<<endl;
                cout<<endl;
                cout<<"Patient's Name"<<"\t"<<"Consulting Doctor"<<"\t\t"<<"Appointment Timings"<<"\t\t"<<"Doctor's Fee"<<endl;
            for(its = mst.begin(); its != mst.end(); ++its)
        its->output_Det();

    cout <<"\t"<< endl;

                    cout<<"THANK YOU!"<<endl;

            }

            break;
    case 6: cout<<"Thank You For Visiting!";
            exit(0);

        default:
            cout<<"Invalid Choice!"<<endl;
        }
    }
    return 0;
}
void display(int rf,int mf,int df)
    {
                    cout<<endl;
                    cout<<"Your total bill summary is as follows:"<<endl;
                    cout<<"Registration Fee: \t\t"<<rf<<endl;
                    cout<<"Visiting Doctor Fee: \t\t"<<df<<endl;
                    cout<<"Medicinal Fee: \t\t\t"<<mf<<endl;
                    cout<<"Total: \t\t\t\t"<<rf+df+mf<<endl;
                    cout<<"THANK YOU!";
    }
