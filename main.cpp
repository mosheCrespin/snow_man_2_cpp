#include "snowman.hpp"
using namespace std;
using namespace ariel;
int main() {
    cout<<"\nWelcome to the Snow-Man creator\n"<<endl;
    cout<<"Guide:\n1.enter a valid number, a valid number is an 8-digit number which each of his digits are in the range of 1-4\n2.if you entered a valid number, your Snow-Man will displayed on this screen\n  O.W if the number is not a valid number then an Error msg will be displayed"<<endl;
    cout<<"\n*****************************************"<<endl<<endl;
    int input=0;
    do{
        cout<<"[+] Please enter a valid number, for exit enter -1"<<endl;
        cin>>input;
    try {
        if(input==-1) continue;
		cout << snowman(input) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
        cout<<"[-] There was a problem with your input-> ";
	 	cout << "caught exception: " << ex.what() << endl;  
	   }
    }
    while(input!=-1);
    cout<<"Have a great day:-)"<<endl;
}
