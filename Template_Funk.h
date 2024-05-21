#include <iostream>

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