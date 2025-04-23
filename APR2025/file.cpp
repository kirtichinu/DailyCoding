#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream onFile;
    onFile.open("C:\\Users\\User\\Desktop\\studu.txt");
    onFile<<"hello jii!!";
    cout<<"file created, data updated";
    onFile.close();
    

    //read
    ifstream inFile;
    string str;
    inFile.open("C:\\Users\\User\\Desktop\\studu.txt");
    while(getline(inFile,str))
    {
        cout<<"read!";
        cout<<str;
    }
    inFile.close();
}