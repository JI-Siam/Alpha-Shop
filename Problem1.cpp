#include<iostream>
#include<string.h>
using namespace std;

    class Employee{
        protected:
        int id;
        string name;
        float payment;
        public:
            Employee(){}
            Employee(int i,string n,float p){
                id=i;
                name=n;
                payment=p;
            }
            void setId(int i){
                id=i;
            }
            int getId(){
                return id;
            }
             void setName(string n){
                name=n;
            }
            string getName(){
                return name;
            } void setPayment(float p){
                payment=p;
            }
            float getPayment(){
                return payment;
            }
            void showEmployeeInfo(){
            cout<<"Employee Name:"<<name<<endl;
            cout<<"Employee ID:"<<id<<endl;
            cout<<"Employee Payment Amount:"<<payment<<endl;
            }
    };
    class Worker:public Employee{
    private:
        int extraHours;
    public:
        Worker(){}
        Worker(int i,string n,float p,int e):Employee(i,n,p){
            extraHours=e;
    };
    void setExtraHours(int e){
        extraHours=e;
    }
    int getExtraHours(){
        return extraHours;
    }
    float TotalIncome(){
         double totalIncome;
        totalIncome=payment+(extraHours*200);
        return totalIncome;
    }
    void showWorkerInfo(){
        cout<<"Employee Type:Worker"<<endl;
        showEmployeeInfo();
        cout<<"<Per Extra Hour Payment 200 Taka>"<<endl;
        cout<<"Total Extra Hour Work Done : "<<extraHours<<" hr"<<endl;
        cout<<"Worker Total Income:"<<TotalIncome()<<endl;

    }
    };
    class Vendor:public Employee{
    private:
        float deductionPercentage;
    public:
        Vendor(){}
        Vendor(float d){
            deductionPercentage=d;
        }
        void setName(string n){
            name=n;
        }
        string getName(){
            return name;
        }
        void setId(int i){
            id=i;
        }
    int getId(){
            return id;
        }
        void setDeductionPercentage(float d){
            deductionPercentage=d;
        }
        float getDeductionPercentage(){
        return deductionPercentage;
        }
        float TotalIncome(){
            int totalIncome;
            totalIncome=payment-((payment*deductionPercentage)/100);
            return totalIncome;
        }
        void showVendorInfo(){

            cout<<"Employee Type:Vendor"<<endl;
            showEmployeeInfo();
            cout<<"Delay Deduction: "<<deductionPercentage<<"%"<<endl;
            cout<<"Vendor Total Income:"<<TotalIncome()<<endl;

        }

    };
    int main(){
        cout<<"_____________________________________________________________________________________"<<endl;
        cout<<"|                                 ALPHA SOAP COMPANY                                |  "<<endl;
        cout<<"|                                                                                   |\n";
        cout<<"|                                                                                   |\n";
        cout<<"|                                                                                   |\n";
        cout<<"|                                                                                   |\n";



        Employee e1;
        string Wname;

        int Wid;
        float Wpay;
        cout<<"\t\t\tEnter The Worker Name:";
        getline(cin,Wname);
        cout<<"\t\t\tEnter Worker ID:";
        cin>>Wid;
        cout<<"\t\t\tEnter Worker Payment Amount:";
        cin>>Wpay;
        cout<<"\t\t\tDo the worker have any extra working hours?"<<endl;
        char Wflag;
        cout<<"\t\t\tIf yes press 'y' else press any key:";
        cin>>Wflag;
        int extra=0;
        if(Wflag=='y'){
            cout<<"\t\t\tEnter how many extra hours:";
            cin>>extra;

        }

        cout<<"\n\n";


        Worker w1(Wid,Wname,Wpay,extra);
        w1.showWorkerInfo();

         cout<<"\n\n";
         string Vname;
        cout<<"\t\t\tEnter The Vendor Name:";
        cin.ignore();
       getline(cin,Vname);
       int Vid;
        cout<<"\t\t\tEnter Vendor ID:";
        cin>>Vid;
        double Vpay;
        cout<<"\t\t\tEnter Vendor Payment Amount:";
        cin>>Vpay;
        cout<<"\t\t\tDo the Vendor have any Delay Delivery?"<<endl;
        char Vflag;
        cout<<"\t\t\tIf yes press 'y' else press any key:";
        cin>>Vflag;
        int Vextra=0;
        if(Vflag=='y'){
            cout<<"\t\t\tEnter how many deduction Percentage:";
            cin>>Vextra;

        }
        Vendor v1;

         cout<<"\n\n";
        v1.setName(Vname);
        v1.setId(Vid);
        v1.setPayment(Vpay);
        v1.setDeductionPercentage(Vextra);
        v1.showVendorInfo();
         cout<<"\n\n";


        cout<<"_____________________________________________________________________________________"<<endl;




return 0;
}
