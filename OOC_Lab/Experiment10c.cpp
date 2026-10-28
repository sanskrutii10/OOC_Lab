#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream fout("myfile.txt");
fout.close();

ifstream fin("myfile.txt");
if(!fin)
{
cout<<"file not found!";
return 1;
}
cout<<"File opend successfully."<<endl;
fin.close();
return 0;
}
