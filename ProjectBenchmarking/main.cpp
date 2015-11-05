/* 
 * File:   main.cpp
 * Author: Samo,Cabbi
 *
 * Created on 4. listopadu 2015, 20:24
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
void fillArray(int numFrom,int numTo, int numRow,int numCol,int **matrix);
void printArray(int numRow,int numCol,int **matrix);

int main(int argc, char** argv) {

    int numRow = 10;
    int numCol = 10;
    int numFrom = 0;
    int numTo = 20;
    
    int **matrix = new int*[numRow];
    for(int i=0;i<numRow;i++)
    {
        matrix[i] = new int [numCol];
    }
   
    fillArray(numFrom,numTo,numRow,numCol,matrix);
    printArray(numRow,numCol,matrix);
    
    return 0;
}

void fillArray(int numFrom,int numTo,int numRow,int numCol,int **matrix)
{
    //naplnenie pola
    for(int i=0;i<numRow;i++)
    {
        for(int j=0;j<numCol;j++)
        {
            if(i == j)
                matrix[i][j] = 0;
            else
                matrix[i][j] = numFrom + rand()%(numTo - numFrom + 1);             
        }
    }
}

void printArray(int numRow,int numCol,int **matrix)
{
    //vypisanie pola
    for(int i=0;i<numRow;i++)
    {
        for(int j=0;j<numCol;j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}


