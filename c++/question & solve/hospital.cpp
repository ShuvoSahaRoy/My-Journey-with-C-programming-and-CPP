#include<iostream>
using namespace std;

class Doctor {
  public:
    string Dname;
    string Daddress;
    string Ddepartment;

    Doctor(string doc_name= "Unknown",string doc_address= "Unknown",string dept= "Unknown")
    {
        Dname= doc_name;
        Daddress= doc_address;
        Ddepartment= dept;

    }
};

class Patients
{
    public:
    string Pid;
    string Pname;
    string Pdisease;
    string Paddress;

    Patients(string id= "Unknown", string name= "Unknown", string disease= "Unknown", string address= "Unknown")
    {
        Pid= id;
        Pname=name;
        Pdisease= disease;
        Paddress = address;
    }
};

class docPatients: public Doctor, public Patients
{
public:
    void disp(Doctor dobj, Patients pobj)
    {
        cout<<"Doctor name:"<<dobj.Dname<<endl;
        cout<<"Patient id:"<<pobj.Pid<<endl;
        cout<<"Patient name:"<<pobj.Pname<<endl;
        cout<<"Patient disease:"<<pobj.Pdisease<<endl;
        cout<<"Patient address:"<<pobj.Paddress<<endl;
    }
};


int main()
{
    Doctor obj4doc("Rahim", "Noakhali, Prime hospital", "Neurologist");
    Patients obj4patient("ps001","Ranvir:P", "Brain Tumor", "Dhaka");
    docPatients obj;
    obj.disp(obj4doc,obj4patient);
    return 0;
}
