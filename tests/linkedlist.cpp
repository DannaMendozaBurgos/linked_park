#include <iostream>
#include <stdlib.h> 
#include "tools.h"

using namespace std;
int main(){
	bool a=true;
	cli interface;
	linkedlisttools lltools;
	interface.banner();
	interface.options();
	string in;
	files file;
	linklist ll=file.read2ll("data.txt");
	while(a){
		cin>>in;
		system ("clear");
		interface.banner();
		interface.options();
		if(in=="1" || in=="add"){
		}
		else if(in=="2" || in=="delete"){
		}
		else if(in=="3" || in=="view"){
				//file.readf("data.txt");
				//linklist ll=file.read2ll("data.txt");
				//ll=*ll.next;
				//cout<<ll.username<<"\t"<<ll.password<<endl;
				lltools.printll(ll);
				//interface.dataprint(ll);
				//cout<<"\nfile was read"<<endl;
		}
		else if(in=="q" || in=="exit"){
				a=false;
				cout<<"Bye bye baby"<<endl;
				break;
		}
		
	}
}