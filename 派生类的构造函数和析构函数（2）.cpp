#include<bits/stdc++.h>
using namespace std;
class GrandFather{
	string name;
public:
	GrandFather(string name):name(name){
		cout<<"GrandFather Constructed,Name:"<<name<<endl;
	}
	~GrandFather(){
		cout<<"GrandFather Destructed,Name:"<<name<<endl;
	}
};

class Father:public GrandFather{
	string name;
public:
	Father(string name1,string name2):name(name1),GrandFather(name2){
		cout<<"Father Constructed,Name:"<<name<<endl;
	}
	~Father(){
		cout<<"Father Destructed,Name:"<<name<<endl;
	}
};

class Mother{
	string name;
public:
	Mother(string name):name(name){
		cout<<"Mother Constructed,Name:"<<name<<endl;
	}
	~Mother(){
		cout<<"Mother Destructed,Name:"<<name<<endl;
	}
};

int main(){
	string name1,name2,name3,name4; 
	cin>>name1>>name2>>name3>>name4;
	Son son(name1,name2,name3,name4);
	return 0;
}