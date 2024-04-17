#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   int a,felevi,szamlalo=0;
   double s=0.0;
    ifstream myfile("input.txt");
    ofstream output("output.txt");
    while(myfile >> a){
        s=s+a;
        szamlalo++;
    }
    felevi=a;
    s=s-felevi;
    s=s/(szamlalo-1);
    s=s*3.0;
    s=s+felevi;
    s=s/4.0;
    myfile.close();
    output<<s<<endl;
    cout<<s;
    output.close();

    return 0;
}
