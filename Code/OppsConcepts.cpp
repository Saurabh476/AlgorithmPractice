#include<iostream>
using namespace std;

struct motors{
	int val;
	string name;
};

class cars{
	// member names
	// private by default
	// this operator is implied 
	// we might need this operator when same class has
	// 2 variables with same name, 1 is class member, other is class method
	// variable
	// so when we use this->variable, we mean class member variable,
	// Other wise compiler considers it based on nested loops
	int val;
	// private constructur
	cars(int x){
		val = x;
		cout<<"Private Constructor called"<<endl;
		cout<<"value of private member is "<<val<<endl;
	}
public:

	// constructor
	cars(){

	}
	cars(string s){
		cout<<"Constructor created"<<endl;
		cout<<"It is a member function which automatically executes when an object is created"<<endl;
		cout<<"Constructor name is same as class name so that compiler can distinguish the constructor"<<endl;
		cout<<"It has NO Return type"<<endl;
		cout<<"It can be created in Private, Public or Protected mode"<<endl;
	}
	~cars(){
		cout<<"Destructor called when object is out of scope or explicitly deleted"<<endl;
	}

	void getInstance(int x){
		 cars m(x);
	}


	string name;
	void getVal(int x){
		val = x;
	}
	void printData(){
		cout<<val<<" "<<name<<endl;
	}
};

void stdUsage(){
	int max = 2, min = 3;
	// std:: - to differentiate between user-defined and predefined names
	// max also defined in function
	// std::max is max function defined in std library
	// std:: forces compiler to use the function defination in headerfiles
	cout<<std::max(max, min);
	cout<<"InsideC";
}

void structAndClasses(){
	// struct initialization with variable m
	struct motors m;
	m.val = 20000;
	m.name = "20cc";
	cout<<m.val<<" "<<m.name<<endl;

	cars bmw;
	bmw.getVal(1000000);
	bmw.name = "BMW Q30";
	// bmw.val = 20000; // error: declared private/protected here 
	bmw.printData();

}

void constructorsDestructors(){
	cars m1("hello");
}

// void privateConstructor(){
// 	cars::getInstance(1000);
// }

class complex{
	int r;
	int i;
public:
	complex(){

	}
	complex (int x, int y){
		r = x;
		i = y;
	}
	complex operator+(complex c){
		return complex(r + c.r, i + c.i);
	}
	~complex(){
		cout<<r<<" "<<i<<endl;
	}
	void display(){
		cout<<r<<" "<<i<<endl;
	}
};


class addition{
	int x;
	int y;
public:
	addition(int a, int b){
		x = a;
		y = b;
	}

	void add(){
		cout<<x + y<<endl;
	}
	void add(int p){
		cout<<p + y<<endl;
	}
	int add(float p){
		return p+x;
	}
};

void operatorOverloading(){ // compile time polymorphism
	complex c1(2,3), c2(4,5);
	complex c3 = c1 + c2;
	c3.display();
}

void methodOverloading(){ // Compile time polymorphism
	addition p(2,3);
	p.add();
	p.add(10);
	cout<<p.add(120.2f);
}

void compileTimePolymorphism(){

	operatorOverloading();

	methodOverloading();

}

void virtualFunction(){

}

class privateConstructor{
	static privateConstructor *instance; // A pointer that points to the
	// object of the same class
	int data;

	// also called as singlton class
	privateConstructor(){
		data = 1000;
		cout<<"Private constructor called"<<endl;
	}

public:
	static privateConstructor *getInstance(){
		if(!instance){
			instance = new privateConstructor();
		}
		return instance;
	}
	static void getdata(){// only static members can be called 
		// without initializing objects
		cout<<"Get Data"<<endl;
	}
};

privateConstructor *privateConstructor::instance = 0;

void runTimePolymorphism(){

	/*
		Virtual function is member function of base class and is 
		expected to be redefine derived classes. It is declared using 
		virtual keyword	c++ determines which function to invoke during 
		runtime based on the type of object pointed by base class pointer.

		when we refer to derived class object/function using the pointer/
		reference of base class then virtual function is called.
		baseclass *ptr = &derivedClassObject;
		ptr->methodofBaseClass();
		// but since it is declared virtual so same method in derived
		class overides the method at base class

		The function from the derived class is invoked for objects of the 
		derived class, even if it is called using a pointer or 
		reference to the base class. 


		When calling a function using pointers or references, the following rules apply:

    		1. A call to a virtual function is resolved according to the underlying type of object for which it is called.

		    2. A call to a nonvirtual function is resolved according to the type of the pointer or reference.

		https://docs.microsoft.com/en-us/cpp/cpp/virtual-functions?view=msvc-170
	*/
	// virtualFunction();
}

void privateConstructorCalling(){
	// privateConstructor *p = p->getInstance();

	// privateConstructor *p = privateConstructor::getInstance();
	privateConstructor::getdata();}

int main(){
	
	// stdUsage();

	// structAndClasses();
	
	// constructorsDestructors();

	// privateConstructor();

	// compileTimePolymorphism();

	// runTimePolymorphism();

	// friendClassFriendFunction();
	
	privateConstructorCalling();
	

}