#include <iostream>
using namespace std;

void insertionSort(int tab[], int n) {

    for(int i = 1; i < n; i++) {

        int key = tab[i];
        int j = i - 1;

        while(j >= 0 && tab[j] > key) {
            tab[j + 1] = tab[j];
            j--;
        }

        tab[j + 1] = key;
    }
}

int main() {

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int tab[n];

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> tab[i];
    }

    insertionSort(tab,n);

    for(int i=0;i<n;i++)
        cout<<tab[i]<<" ";

    return 0;
}