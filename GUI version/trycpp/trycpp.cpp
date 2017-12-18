// trycpp.cpp: главный файл проекта.

#include "stdafx.h"
#include "iostream"
using namespace System;
using namespace std;

class some{
	void nah(){cout<<"poshel nuxui";}
private:
	
public:
	int a;
	void seta(){
	cout<<"vvedi a"<<endl;
	cin >> a;
	}
	void geta(){
		cout<<a;
	}

};

int main(array<System::String ^> ^args)
{
    some n;
	n.seta();
	cout<<endl;
	n.geta();
	cout<<endl;
	int a=22;
	cout<<a;
	cout<<endl;
	n.geta();
	cout<<a;
	cout<<endl;
	cin>>a;
    return 0;
}
