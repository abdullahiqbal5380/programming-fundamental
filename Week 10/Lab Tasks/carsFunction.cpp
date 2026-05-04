#include<iostream>
using namespace std;

void printToyotaBlue(int cars[][5],int rowSize){
    cout << "Toyota Blue Cars:"<<cars[0][0]<<endl;
}

//Assuming COL 1 is Red
int countRedCars(int cars[][5],int rowSize){
    int total =0;
    for (int i=0;i<rowSize;i++){
        total = total+cars[i][1];
    }
        return total;
}
//Assuming Row 2 is Nissan
int countNissanCars(int cars[][5]){
    int total=0;
    for (int i=0;i<5;i++){
        total=total+cars[2][i];
    }
        return total;
}
//Converter function for a color
int converter(int cars[][5],int rowSize,int colorIndex){
    int total=0;
    for(int i=0;i<rowSize;i++){
        total=total+cars[i][colorIndex];
    }
        return total;
}
//Print Transposec Matrix
void printTransposed(int cars[][5],int rowSize){
    for (int j=0;j<5;j++){
        for (int i=0;i<rowSize;i++){
            cout << cars[i][j]<< " ";
        }
        cout <<endl;
    }
}