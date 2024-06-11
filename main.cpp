#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <fstream>
#include <sstream>
#include <exception>
#include <stdexcept>


#include "Template_Funk.h"
#include "Student.cpp"

using namespace std;

void print_test(){
    string nv[] = {"Malte" , "Sveja", "Kjeld", "mAlte", "MAlte", "Bob", "Tim", "Yan", "Ana", "Diana"};
    int iv[]= {1, 154, 532, 53, 12, 6, 8, -25, 0};

    vector<string> name_Vektor(nv, nv+10);
    vector<int> zahlen_Vektor(iv, iv+9);

    print_vectorv(name_Vektor);
    print_vectorv(zahlen_Vektor);

    print_container(name_Vektor);
    print_container(zahlen_Vektor);

    selection_sortv(name_Vektor);
    selection_sortv(zahlen_Vektor);

    print_container(name_Vektor);
    print_container(zahlen_Vektor);

    list<string> name_list(nv, nv+10);

    //print_vektorv(name_list);
    print_container(name_list);

}

void sort_test(){
    string nv[] = {"Malte" , "Sveja", "Kjeld", "mAlte", "MAlte", "Bob", "Tim", "Yan", "Ana", "Diana"};
    int iv[]= {1, 154, 532, 53, 12, 6, 8, -25, 0};

    vector<string> name_Vektor(nv, nv+10);
    vector<int> zahlen_Vektor(iv, iv+9);

    print_container(name_Vektor);
    print_container(zahlen_Vektor);

    selection_sortv(name_Vektor);
    selection_sortv(zahlen_Vektor);

    print_container(name_Vektor);
    print_container(zahlen_Vektor);
}

void readStudents(string fname, vector<Student> &v) {
    fstream f; //Einlesen mittels fstream 
    string line;
    f.open(fname, ios::in); 
    if (!f.is_open()) {
        throw invalid_argument("File not found!");
    }
    while (getline(f, line)) {
        istringstream iss(line);
        string t_vorname, t_nachname; 
        char t_group;
        iss >> t_nachname >> t_vorname >> t_group; 

        Student temp_student; 

        temp_student.setVorname(t_vorname); 
        temp_student.setNachname(t_nachname); 
        temp_student.setGroup(t_group); 
        v.push_back(temp_student);
    } 
}
void aufgabe_5_2(){
    //IMPORTANT !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

    //IT'S THE MOST UNREADEBLE CODE I'VE EVER WRITTEN

    //I KNOW HOW TO FIX IT, BUT I'M TOO LAZY

    vector<Student> students;
    readStudents("Studenten_kurz.txt", students);

    shuffle_template(students);

    cout << "SHUFFLED NOT SORTED" << endl << endl;

    print_container(students);

    setSortScheme(students);
    cout << "--------------------INSERT SORT(" <<students[1].getSortScheme()<< ")------------------------------" << endl;
    InsertSort(students);
    print_container(students);

    setOppositeSortScheme(students);
    cout << endl << "JETZT NACH ANDERE SCHEME SORTIERT(" <<students[1].getSortScheme()<< ")" << endl << endl;
    InsertSort(students);
    print_container(students);
    setOppositeSortScheme(students);
    cout << "====================SHUFFLE==============================" << endl;


    shuffle_template(students);

    print_container(students);

    cout << "BUBBLE SORT" << endl;
    cout << "---------------------BUBBLE SORT("<<students[1].getSortScheme()<<")-------------------------------" << endl;

    BubbleSort(students);
    print_container(students);
    setOppositeSortScheme(students);
    cout << endl << "JETZT NACH ANDERE SCHEME SORTIERT(" <<students[1].getSortScheme()<< ")" << endl << endl;
    BubbleSort(students);
    print_container(students);


    cout << endl << endl << "Veraenderung der Reihenfolge" << endl;
    cout << "TEIL 2" << endl << endl;
    cout << "=====================SHUFFLE==================================" << endl;
    shuffle_template(students);
    print_container(students);

    cout << "--------------------INSERT SORT(" <<students[1].getSortScheme()<< ")------------------------------" << endl;
    InsertSort(students);
    print_container(students);

    setOppositeSortScheme(students);
    cout << endl << "JETZT NACH ANDERE SCHEME SORTIERT(" <<students[1].getSortScheme()<< ")" << endl << endl;
    InsertSort(students);
    print_container(students);
    setOppositeSortScheme(students);

    cout << "====================SHUFFLE==============================" << endl;
    shuffle_template(students);

    print_container(students);

    cout << "BUBBLE SORT" << endl;
    cout << "---------------------BUBBLE SORT("<<students[1].getSortScheme()<<")-------------------------------" << endl;

    BubbleSort(students);
    print_container(students);
    setOppositeSortScheme(students);
    cout << endl << "JETZT NACH ANDERE SCHEME SORTIERT(" <<students[1].getSortScheme()<< ")" << endl << endl;
    BubbleSort(students);
    print_container(students);

}

int main(int argc, char const *argv[])
{
    //print_test();

    //sort_test();

    aufgabe_5_2();
    
    return 0;
}
