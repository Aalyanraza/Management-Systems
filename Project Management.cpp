/*
Syed Aalyan Raza Kazmi
22I-0833
A
*/

#include <iostream>
#include <string>
using namespace std;

class Manager
{
    string name;
public:
    Manager(string naam="");
    string getManager();
};

class Project
{
    string title;
    Manager* boss;
public:
    Project( string unwaaan="", Manager* bass=nullptr);
    string getTitle();
    void setTitle(string topic);
    Manager* getManager();
    void setManager(Manager* boss);
    ~Project();
};

class Employee
{
    string name;
    Project* job;
    Manager* bigboss;
public:
    Employee( string naam="", Project* kaam=nullptr, Manager* boss=nullptr);
    void setName (string given);
    void setProject (Project* kaam);
    void allocateManager (Manager* boss );
    void print();
    ~Employee();
};

Manager:: Manager(string naam)
{
    name=naam;
}
string Manager:: getManager()
{
    return name;
}

Project:: Project( string unwaan, Manager* bass)
{
    title=unwaan;
    boss=bass;
}
string Project:: getTitle()
{
    return title;
}
void Project:: setTitle(string topic)
{
    title=topic;
}
Manager* Project:: getManager()
{
    return boss;
}
void Project:: setManager(Manager* bass)
{
    boss=bass;
}
Project:: ~Project()
{
    boss=nullptr;
}

Employee:: Employee( string naam, Project* kaam, Manager* boss)
{
    name=naam;
    job=kaam;
    bigboss=boss;
}
void Employee:: setName (string given)
{
    name=given;
}
void Employee::setProject(Project* kaam)
{
    if (!job) {
        job = new Project(*kaam);
    }
    else {
        *job = *kaam;
    }
}
void Employee::allocateManager(Manager* boss)
{
    if (!bigboss) {
        bigboss = new Manager(*boss);
    }
    else {
        *bigboss = *boss;
    }
}
void Employee:: print()
{
    cout<<"Name: "<<name<<endl;
    if (job)
    {
        cout << "Project title: " << job->getTitle() << endl;    
    }
    if (bigboss)
    {
        cout << "Manager name: " << bigboss->getManager() << endl;
    }
    cout<< endl<<endl;
}
Employee:: ~Employee()
{
    job=nullptr;
    bigboss=nullptr;   
}

int main()
{
    // create four Manager objects
    Manager m1("Syed");
    Manager m2("Aalyan");
    Manager m3("Raza");
    Manager m4("Kazmi");

    // create an array of 15 Employee objects
    Employee emp[15];

    // populate the array with random employee names and projects
    for (int i = 0; i < 15; i++)
    {
        string name = "Employee " + to_string(i+1);
        Project* projecuss = nullptr;

        // randomly assign a project to the employee
        if (i % 3 == 0)
        {
            projecuss = new Project("Project " + to_string(i/3 + 1), nullptr);
        }
        emp[i] = Employee(name, projecuss, nullptr);
    }

    // assign managers to employees
    // assign managers to employees
    emp[0].allocateManager(&m1);
    emp[1].allocateManager(&m1);
    emp[2].allocateManager(&m2);
    emp[3].allocateManager(&m3);
    emp[4].allocateManager(&m3);
    emp[5].allocateManager(&m3);
    emp[6].allocateManager(&m2);
    emp[7].allocateManager(&m3);
    emp[8].allocateManager(&m3);
    emp[9].allocateManager(&m3);
    emp[10].allocateManager(&m2);
    emp[11].allocateManager(&m3);
    emp[12].allocateManager(&m2);
    emp[13].allocateManager(&m4);
    emp[14].allocateManager(&m4);

    // print all employees
    for (int i = 0; i < 15; i++)
    {
        emp[i].print();
    }

    return 0;
}
