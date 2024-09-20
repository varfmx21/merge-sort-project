#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &leftArray, vector<int> &rightArray, vector<int> &array) {

    int leftSize = leftArray.size();
    int rightSize = rightArray.size();

    // Indices
    int idx = 0;
    int idxLeft = 0;
    int idxRight = 0;

    while(idxLeft < leftSize && idxRight < rightSize) {
        if(leftArray[idxLeft] < rightArray[idxRight]) {
            array[idx] = leftArray[idxLeft];
            idx++;
            idxLeft++;
        } else {
            array[idx] = rightArray[idxRight];
            idx++;
            idxRight++;
        }
    }

    while(idxLeft < leftSize) {
        array[idx] = leftArray[idxLeft];
        idx++;
        idxLeft++;
    }

    while(idxRight < rightSize) {
        array[idx] = rightArray[idxRight];
        idx++;
        idxRight++;
    }
    
}

void mergeSort(vector<int> &arr) {

    int n = arr.size();
    if (n <= 1) return; // Caso Base
    int center = n / 2;

    // Crear arreglos izquierdo y derecho con el size
    // basado en el arreglo
    vector<int> leftArray(center);
    vector<int> rightArray(n - center);

    for(int i = 0; i < n; i++) {
        if(i < center) {
            leftArray[i] = arr[i];
        } else {
            rightArray[i - center] = arr[i];
        }
    }

    // Divide
    mergeSort(leftArray);
    mergeSort(rightArray);

    // Conqueer
    merge(leftArray, rightArray, arr);
}

void imprimir(vector<int> arr) {
    cout << '[';
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i != arr.size() - 1) {
            cout << ',';
        }
    }
    cout<<']'<<endl;
}

int main() {

    vector<int> arr = {12,3,7,9,14,6,11,2};

    cout<<"Array is not in order: "<<'\n';
    imprimir(arr);

    mergeSort(arr);
    cout<<'\n';
    cout<<"Array is now in order: "<<'\n';
    imprimir(arr);

    return 0;
}