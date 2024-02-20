/***************************************************************
CSCI 240         Program 4     Spring 2024

Programmer: Shaivil Patel (z1989635)

Section: 1

Date Due: 2/23/2024

Purpose: A program that generate 3 sets of random numbers 
***************************************************************/
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

const int SIZE_FIRST_SET = 45;  
const int MAX_VALUES_SECOND_SET = 75;
const int MAX_VALUES_THIRD_SET = 50;
const double SET_THREE_MIN_RANDOM_VALUE = 0.0f;
const double SET_THREE_MAX_RANDOM_VALUE = 300.0f;
const int VALUES_PER_LINE = 7;

void coutFormatedInt(int in, bool needsAsterisk){
    std::cout << setw(13) << right << in << (needsAsterisk ? "*" : " ");
}

void coutFormatedDouble(double in, bool needsAsterisk){
    std::cout << setw(13) << right << fixed << setprecision(1) << in << (needsAsterisk ? "*" : " ");
}

void set1(){
    std::cout << "Set 1 has exactly " << SIZE_FIRST_SET << " values" << endl;
    int oddCount = 0;
    
    for(int i = 0; i < SIZE_FIRST_SET; i++){
        //Check if its the first entry in the line create a new line
        if(i > 0 && i % VALUES_PER_LINE == 0) {
            std::cout << "\n";
        }
        //Generate random number
        int randomNum = rand();

        bool isOdd = randomNum % 2 == 1;
        // Check if num is odd
        if(isOdd){
            oddCount++;
        }
        // Call format output function to print our value
        coutFormatedInt(randomNum, isOdd);
    }

    std::cout << "\n\n";
    std::cout << "There are " << oddCount << " odd numbers in Set 1" << "\n\n\n";
}

void set2(){
    int values = rand() % MAX_VALUES_SECOND_SET + 1;
    std::cout << "Set 2 has exactly " << values << " values" << endl;

    //Init Iterator and even count variables
    int i = 0;
    int evenCount = 0;

    while(i < values){
        //Check if its the first entry in the line create a new line
        if(i > 0 && i % VALUES_PER_LINE == 0) {
            std::cout << "\n";
        }
        //Generate a random number
        int num = rand();

        //Check if value is even
        bool isEven = num % 2 == 0;

        if(isEven){
            evenCount++;
        }
        // Call format output function to print our value
        coutFormatedInt(num, isEven);
        i++;
    }

    std::cout << "\n\n";
    std::cout << "There are " << evenCount << " even numbers in Set 2" << "\n\n\n";
}

void set3(){
    int values = rand() % MAX_VALUES_THIRD_SET + 1;
    std::cout << "Set 3 has exactly " << values << " values" << endl;

    int i = 0;
    int over200Count = 0;

    do {
        //Check if its the first entry in the line create a new line
        if(i > 0 && i % VALUES_PER_LINE == 0) {
            std::cout << "\n";
        }

        //Generate a random number
        double num = rand() / (RAND_MAX / (SET_THREE_MAX_RANDOM_VALUE - SET_THREE_MIN_RANDOM_VALUE)) + SET_THREE_MIN_RANDOM_VALUE;

        //Check if value is over 200.0
        bool isOver200 = num > 200.0f;

        if(isOver200){
            over200Count++;
        }

        coutFormatedDouble(num, isOver200);
        i++;
    } while (i < values);

    std::cout << "\n\n";
    std::cout << "There are " << over200Count << " numbers greater than 200.0 in Set 3" << "\n";

}

int main(){
    //Initialize the random seed
    srand(33);

    //Forloop
    set1();

    //While loop
    set2();

    //Do while
    set3();
}
