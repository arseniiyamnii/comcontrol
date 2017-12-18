#include "iostream"
using namespace std;

class Something
{
public:
	void set(){
		cout<<"ssoopp";
		cin>>a;
	}
	void get(){
		cout<<a;
	}
private:
	int a;
};
int main(int argc, char const *argv[]){
	Something n;
	n.set();
	n.get();
	n.set();
	return 0;
}