#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    char data[100];

    // open file by writting mode
    ofstream outfile;
    outfile.open("afile.dat");

    cout << "writting to the file " << endl;
    cout << "enter your name: ";
    cin.getline(data, 100);

    // write data in file written by user
    outfile << data << endl;

    cout << "enter your age : ";
    cin >> data;
    cin.ignore();

    // write data in file written by user again
    outfile << data << endl;

    // close the open file
    outfile.close();

    //  open file by reading mode
    ifstream infile;
    infile.open("afile.dat");

    cout << "reading from the file " << endl;
    infile >> data;

    cout << data << endl;

    infile >> data;
    cout << data << endl;

    infile.close();

    return 0;
}