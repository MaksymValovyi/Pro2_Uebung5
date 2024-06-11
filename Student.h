#include <iostream>
#include <string>
#include <ostream>

using namespace std;

class Student
{
private:
    string nachname;
    string vorname;
    char gruppe;
    string sort_scheme;

public:
    

    Student(string name, string surname, char group)
    : nachname(name), vorname(surname), gruppe(group)
    {

    };

    Student(){};

    void setNachname(string name)
    {
        nachname = name;
    }

    void setVorname(string surname)
    {
        vorname = surname;
    }

    void setGroup(char group)
    {
        gruppe = group;
    }

    void setSortScheme(string scheme)
    {
        sort_scheme = scheme;
    }

    string getNachname() const
    {
        return nachname;
    }

    string getVorname() const
    {
        return vorname;
    }

    string getSortScheme() const
    {
        return sort_scheme;
    }
    
    char getGroup() const
    {
        return gruppe;
    }
    
    //TO DO:
    bool operator>(const Student& s);  //for sorting algorithm

};

//GLOBAL FUNCTIONS
ostream& operator <<(ostream & os, const Student & s)
    {
        os << s.getNachname() << " " << s.getVorname() << " " << s.getGroup() << endl;
        return os;
    }

