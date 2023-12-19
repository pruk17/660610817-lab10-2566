#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
    string textLine;
    if(dest.is_open())
    {
        dest << "-------------------- BOOM ---------------------\n";
        while(getline(source, textLine))
        {
            dest << textLine << endl;
        }
        dest << "-------------------- HA!! ---------------------\n";    
    }

    source.close();
    dest.close();
	return 0;
}
