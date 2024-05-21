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

public:
    bool operator<(const Student& s);   //for sorting algorithm

    Student(string name, string surname, char group)
    : nachname(name), vorname(surname), gruppe(group)
    {

    };

    void setNachname(string name)
    {
        nachname = name;
    }

    void setVorname(string surname)
    {
        vorname = surname;
    }

    void setGruppe(char group)
    {
        gruppe = group;
    }

    string getNachname() const
    {
        return nachname;
    }

    string getVorname() const
    {
        return vorname;
    }

    char getGruppe() const
    {
        return gruppe;
    }


};

//GLOBAL FUNCTIONS
ostream& operator <<(ostream & os, const Student & s)
    {
        os << s.getNachname() << " " << s.getVorname() << " " << s.getGruppe() << endl;
        return os;
    }

void readStudents(string fname, vector<Student> &v);
void shufflev(vector<Student> &v);