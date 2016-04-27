#include <iostream>
#include <fstream>
using namespace std;
int main(){
ofstream outputfile;
outputfile.open("blah.txt");
outputfile << "I'm\n";
outputfile <<"RIck\n";
outputfile <<"james\n";
outputfile << "bitch\n";
outputfile.close();
cout << "Done.";
return 0;



}
