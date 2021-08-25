#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

int main()
{
    int rosterArray[25]; 

    string inFileName = "numList.txt";
    ifstream inFile;
    inFile.open(inFileName.c_str());

    if (inFile.is_open())
    {
        cout << "Initial array" << endl;

        for (int i = 0; i < 25; i++)
        {
            inFile >> rosterArray[i];
            cout << rosterArray[i] << endl;
        }

        inFile.close(); // CLose input file
    }

    cout << endl << endl;
    /************************************

      Create sorted new array here
      Call the Bubble Sort function
      Inputs: The array you made & the array size

      Print new sorted array

    ************************************/
    cout << "Sorted Array" << endl;

    bubbleSort(rosterArray, 25);

    for (int i = 0; i < 25; i++)
    {
        cout << rosterArray[i] << endl;
    }
    return 0;
}