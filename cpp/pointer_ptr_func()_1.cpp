#include <iostream>
using namespace std;

double getAverage(int *arr, int size);

int main()
{
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;

    // "balance" points the first element of the array balance
    avg = getAverage( balance, 5);

    cout << "the value of average is " << avg <<endl;

    return 0;
}

double getAverage ( int *arr, int size )
{
    double sum, avg;
    for (int i = 0;i < size; i++)
    {
        sum += arr[i];
    }
    avg = sum / size;
    return avg;
}
