#include<iostream>
using namespace std;
void table(int a){
	for(int i=1;i<=10;i++){
		cout<<a<<"*"<<i<<"="<<a*i<<endl;
		cout<<endl;
	}
}

/*
#include<iostream>
using namespace std;
void table(int a);
int main(){
int num;
cout<<"Enter which table do you want";
cin>>num;
	table(2);
	table(4);
	table(num);
	cout<<"data"
	return 0;
}
*/
/*
static loading one the commands are :
g++ -c table.cpp
ar rcs libtable.a table.o
g++ main.cpp libtable.a -o tab
./tab
Dynamic loading one the commands are :
g++ -fPIC -c table.cpp
g++ -shared -o libtable.so table.o
g++ main.cpp -L. -ltable -o tableapp
./tableapp

*/
