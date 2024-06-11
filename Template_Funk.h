#include <iostream>
#include <time.h>

using namespace std;

template <typename T>
void print_vectorv(vector<T>& v) {      //effizienter with &
    for (int i = 0; i < v.size(); i++) { 
        cout << v[i] << " ";
    }
    cout << endl; 
}

template <typename T>
void print_container(T& v) {
    cout << "Container : " << endl;
    for (typename T::iterator it = v.begin(); it != v.end(); ++it) {
         cout << (*it) << " ";
    }
    cout << endl; 
}

template <typename T>
void selection_sortv(vector<T>& v) {
    for (unsigned int i = 0; i<v.size() - 1; i++) { 
        unsigned int min_index = i;
        for (unsigned int j = i + 1; j<v.size(); j++) {
            if (v[j] < v[min_index]) { 
                min_index = j;
            } 
        }
    swap(v[min_index], v[i]); 
    }
}

template <typename T>
void shuffle_template(vector<T> &v) {
  int amount = v.size();
  srand((unsigned)time(NULL));
    for (int i = 0; i < amount; i++) {
        // rand_pos in the range 0 to <amount> -1 
        int rand_pos = rand() % amount;
        T temp_element = v[rand_pos];
        v[rand_pos] = v[i];
        v[i] = temp_element;
    } 
}

template <typename T>
void setSortScheme(vector<T>& v){
    string sort_scheme = "";

    cout << "Enter sort scheme: " << endl;
    cout << "Schreiben : nachname oder gruppe" << endl;
    cin >> sort_scheme;

    if (sort_scheme != "nachname" && sort_scheme != "gruppe")
    {
        throw invalid_argument("Invalid sort scheme");
    }

    for(int i = 0; i < v.size(); i++){
        v[i].setSortScheme(sort_scheme);
    }
}

template <typename T>
void setOppositeSortScheme(vector<T>& v){
    for(int i = 0; i < v.size(); i++){
        if(v[i].getSortScheme() == "nachname"){
            v[i].setSortScheme("gruppe");
        }else{
            v[i].setSortScheme("nachname");
        }
    }
}

template <typename T>
void InsertSort(vector<T>& v){
    for (int i = 1; i < v.size(); i++) {
        T temp = v[i];
        int j = i;
        while (j > 0 && v[j - 1] > temp) {
            v[j] = v[j - 1];
            j--;
        }
        v[j] = temp;
    }
}

template <typename T>
void BubbleSort(vector<T> &v){
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v.size() - i - 1; j++){
            if(v[j] > v[j+1]){
                swap(v[j], v[j+1]);
            }
        }
    }
}
