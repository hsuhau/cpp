#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char data[100];

    ofstream outfile;
    outfile.open("afile.dat");

    cout << "afile.datWriting to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);

    outfile << data << endl;
    cout << "Enter you age: ";
    cin >> data;
    cin.ignore();

    outfile << data << endl;
    outfile.close();
    ifstream infile;
    infile.open("afile.dat");

    cout << "Reading form the file" << endl;
    infile >> data;

    cout << data << endl;

    infile >> data;
    cout << data << endl;

    infile.close();

    return 0;
}