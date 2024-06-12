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

void insertSortPart(vector<Student> &v) {
    cout << "---------INSERT SORT(" <<v[1].getSortScheme()<< ")----------" << endl;
    InsertSort(v);
    print_container(v);
    setOppositeSortScheme(v);

    cout << endl << "JETZT NACH ANDERE SCHEME SORTIERT(" <<v[1].getSortScheme()<< ")" << endl << endl;
    InsertSort(v);
    print_container(v);
    setOppositeSortScheme(v);
}

void shufflePart(vector<Student> &v){
    cout << "===========SHUFFLE===========" << endl;
    shuffle_template(v);
    print_container(v);
}

void bubbleSortPart(vector<Student> &v){
    cout << "-----BUBBLE SORT("<<v[1].getSortScheme()<<")------" << endl;
    BubbleSort(v);
    print_container(v);
    setOppositeSortScheme(v);
    
    cout << endl << "JETZT NACH ANDERE SCHEME SORTIERT(" <<v[1].getSortScheme()<< ")" << endl << endl;
    BubbleSort(v);
    print_container(v);
}

void aufgabe_5_2(){
    vector<Student> students;
    readStudents("Studenten.txt", students);
    shuffle_template(students);
    cout << "SHUFFLED NOT SORTED" << endl << endl;
    print_container(students);

    //teil 1
    setSortScheme(students);
    insertSortPart(students);
    shufflePart(students);
    bubbleSortPart(students);

    //teil 2-
    cout << endl << endl << "Veraenderung der Reihenfolge" << endl;
    cout << "TEIL 2" << endl << endl;

    shufflePart(students);
    insertSortPart(students);
    shufflePart(students);
    bubbleSortPart(students);


}

int main(int argc, char const *argv[])
{
    //print_test();

    //sort_test();

    aufgabe_5_2();
    
    return 0;
}
