#include "Student.h"


bool Student::operator>(const Student &s)
{
    if(sort_scheme == "nachname")
    {
        return nachname > s.getNachname();
    }
    else if(sort_scheme == "gruppe")
    {
        return gruppe > s.getGroup();
    }
    return false;
};