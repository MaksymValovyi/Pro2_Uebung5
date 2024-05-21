#include <iostream>
#include <string>
#include <vector>
#include <list>

#include "Template_Funk.h"

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

int main(int argc, char const *argv[])
{
    //print_test();

    sort_test();
    
    return 0;
}
