#include <iostream>
#include <iomanip>

using namespace std;

void printArray(int[] , int);
void sortAccending(int[], int);
void sortDecending(int[], int);

int main() {
    int array[5] = {4,2,5,6,1};
    int array2[5] = {4,2,5,6,1};
    printArray(array, 5);
    printArray(array2, 5);

    cout << endl;

    sortAccending(array, 5);
    sortDecending(array2, 5);

    printArray(array, 5);
    printArray(array2, 5);
}

void printArray(int array[], int size){
    for(int i = 0; i < size; i++){
        cout << setw(4) << array[i];
    }
    cout << endl;
}

void sortAccending(int array[], int size){
    for(int i = 0; i < size; i++){
        int smallest = i;
        for(int j = i + 1; j < size; j++){
            if(array[j] < array[smallest]){
                smallest = j;
            }
        }
        int temp = array[i];
        array[i] = array[smallest];
        array[smallest] = temp;
    }
}

void sortDecending(int array[], int size){
    for(int i = 0; i < size; i++){
        int smallest = i;
        for(int j = i + 1; j < size; j++){
            if(array[j] > array[smallest]){
                smallest = j;
            }
        }
        int temp = array[i];
        array[i] = array[smallest];
        array[smallest] = temp;
    }
}