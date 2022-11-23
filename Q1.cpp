#include<iostream>
#include<string.h>
#include<fstream>
#include<stdlib.h>
using namespace std;

class Concept1{  //classes and objects
	public:
    	void display(){
		cout<<"A class is a user-defined blueprint that defines the variables and methods common to all objects\n\n";
	    }
};
class Concept2{    //static data members and static member functions
	public:
    void demo()
{ 
    static int count = 0;
    cout << count << " ";

    count++;
}
};
class Concept3{ //access specifiers
	private:
		void prv(){
		cout<<"Private area, cannot be accessed by members from outside";
	     }
	     
	protected:
		void ptd(){
		cout<<" Can be accessed only if inherited";
	}
	
	public:
		void display(){
	      
	      cout<<"Members declared public can be accesseed anywhere in the program\n";
	      
	  }
};
class Concept4{ //friend function
	private:
		void display(){
			cout<<"1.A friend function is a special function in C++ which in-spite of not being member function of a class has privilege to access private and protected data of a class.\n";
			
		}
		
		friend void fnd_function(Concept4);
};
void fnd_function(Concept4 obj){
	obj.display();
	cout<<"\nFriend function is used for accessing private data of a class\n";
}
class Concept5{ //friend class
	private:
		void display(){
			cout<<"A friend class can access private and protected members of other class in which it is declared as friend.\n";
			cout<<"We can declare a class friend of another class in this way:-\n\n";
			cout<<"class A{\n private:\n some data\n friend class B\n}\n\n";
		}
		
		friend class friend_of_data5;
};
class friend_of_data5{
  public:	
	void display(Concept5&obj){
		obj.display();
		cout<<"The above data is private data accessed by another class by making both classes friends\n";
	}
};
inline int cube(int s){
      return s*s*s;
    }
void overloaded_fnc(int x){ //function overloading
	cout<<"1.Function overloading is a feature of object-oriented programming where two or more functions can have the same name but different parameters.\n";
	
}
void overloaded_fnc(int x, int y){
	cout<<"Function overloading ";
	
}
void overloaded_fnc(char x){
	cout<<"Using function overloading we can design a family of functions with one function name where each function would perform different function\n";
}
class Concept6{ //constructor
	public:
		Concept6(){
			cout<<"1.Constructor in C++ is a special method that is invoked automatically at the time of object creation.\n";
			
		}
};

class Concept7{  //types of constructors
	public:
		int *num;
		Concept7(){
			cout<<"There are majorly 4 types of constructors:-\n";
			cout<<"1.Default constructor\n2.Parameterized Constructor\n3.Copy Constructor\n4.Dynamic Constttructor\n\n";
			}	
					
		Concept7(int x, int y){
			cout<<"Parameterized Constructors:-\n";
			
		}
		
		Concept7(Concept7&obj){
			cout<<"Copy Constructors:-\n";
			
		}
		
		Concept7(int x){
			num= new int;
			*num=x;
			}
	};
	class Concept8{ //Destructors
        public:
	Concept8(){}
	~Concept8(){
		cout<<"Destructor destroys the class objects created by the constructor.\n";
		}
};	
class Concept9{ //Inheritence
	public:
		void display(){
			cout<<"Capability of a class to derive properties another class is called Inheritance.\n";
			}
};
class  inherited_from_data9: public Concept9{
	public:
		void display(){  
			Concept9::display();
			cout<<"The syntax of using inheritence is given as: \n\n";
			cout<<"class  derived_class_name : access-specifier base_class_name\n\n";
			}
};

class Concept10{ //Types Of Inheritence
	public:
		void display1(){
			cout<<"There are five types of inheritence:-\n";
			cout<<"1.Single inheritance\n2.Multiple inheritance\n3.Multilevel inheritance\n4.Hierarchical inheritance\n5.Hybrid inheritance\n\n";
		}
};

class single_inheritence: public Concept10{
	public:
		void display2(){
			display1();
			cout<<"In single inheritance, a class is allowed to inherit from only one class. i.e. one subclass is inherited by one base class only.\n";
		}
};

class multiple_dummy{
	public:
		void no_work(){}
};

class multiple_inheritence:public multiple_dummy, public single_inheritence{
	public:
		void display3(){
			display2();
			cout<<"Multiple Inheritance is a feature of C++ where a class can inherit from more than one class. i.e one subclass is inherited from more than one base class.\n";
		}
};

class multilevel_inheritence:public multiple_inheritence{
	public:
		void display4(){
			display3();
			cout<<"In multilevel inheritance, a derived class is created from another derived class\n";
		}
};

class dummy1{
	public:
		void useless1(){}
};

class dummy2: public virtual dummy1{
	public:
		void useless2(){}
};

class hierarchical_inheritance : public virtual dummy1{              
	public:                   
	   void display5(){                          
	   	    cout<<"In this type of inheritance, more than one subclass is inherited from a single base class. i.e. more than one derived class is created from a single base class.\n";
	   }                                              				                    						                         
};                                         
                                          

class hybrid_inheritence: public hierarchical_inheritance{
	public:
		void display6(){
			display5();
			cout<<"Hybrid Inheritance is implemented by combining more than one type of inheritance.\n"; //In this case multiple and multilevel are combined
 	}
};

void scope_resol_op(){ 
	int x = 10; // Local x
  cout << "Value of global x is " << ::x;
  cout << "\nValue of local x is " << x; 
	
}

void polymorphism(){   //polymorphism and it's types
	
	cout<<"Polymorphism in C++ means the same entity(function, operator or object) behaves differently in different scanerios.\n";
	
}

class operator_overloading_dummy_class{
	public:
		void no_work(){}
};

void operator+(operator_overloading_dummy_class&obj1,operator_overloading_dummy_class&obj2){ //operator overloading
     
     cout<<"By using operator overloading, we do not change the orignal meaning of the operator, we just prvoide an additional special meaning\n";
     
     
}

class base{  //virtual function
	public:
		virtual void display(){
			cout<<"This is a virtual function";
		}
};

class derived : public base{
	public:
		void display(){
			cout<<"Virtual function is a member function which is declared within a base class and is re-defined (overridden) by a derived class.\n";
			
		}
};

class Second_base{ //pure virtual function and abstract class
	public:
		virtual void display()=0;
};

class Second_derived : public Second_base{
	public:
		void display(){
			cout<<"Pure Virtual functions:-\n\n";
			
		}
};

class third_base{     //virtual constructors and destructors
	public:
		third_base(){
			cout<<"In C++, the constructor cannot be virtual, because when a constructor of a class is executed there is no virtual table in the memory, means no virtual pointer defined yet.\nSo, the constructor should always be non-virtual.\n";
			cout<<"But a virtual destructor is possible.\n\n";
		}
		
		virtual ~ third_base(){}
};

class third_derived: public third_base{
	public:
		third_derived(){}
		~third_derived(){
			cout<<"Deleting a derived class object using a pointer of base class type that has a non-virtual destructor results in undefined behavior.\n";
			cout<<"To correct this situation, the base class should be defined with a virtual destructor.\n";
			cout<<"Making base class destructor virtual guarantees that the object of derived class is destructed properly, i.e., both base class and derived class destructors are called.\n";
			cout<<"virtual ~ class_name(parameters)\n\n";
		}
};

class excep_hand{ //exception handling
	public:
		void handle_exception(int x){
			if(x==0){
				
				cout<<"1.Exceptions are runtime anomalies or abnormal conditions that a program encounters during its execution.\n\n";
				throw x;
				cout<<"This statement is written after throw, that's why it will be ignored by compiler and won't be executed";
			}
		}
};

template <class T> 

T template_info(T x){
	
	cout<<"2.The simple idea is to pass data type as a parameter so that we don’t need to write the same code for different data types.\n";
	return x;
}


void file_handling(){    //file handling
	cout<<"1.Files are used to store data in a storage device permanently.\n";
	string choice;
	cin>>choice;
	
	if(choice=="read"){
		const char *fileName="OOP- Teach All Concepts.cpp";
        char ch;
        ifstream file;
	
	file.open(fileName,ios::in);
	
	if(!file)
	{
		cout<<"Error in opening file!!!"<<endl;
	}

	while (!file.eof()) 
	{
		file >> noskipws >> ch;	
		cout << ch;
	}
	
	file.close();
	}
}

int main(){
	int choice, data;
	do{
		cout<<"1.Classes and Objects\n";
		cout<<"2.Static Members and Static Functions\n";
		cout<<"3.Access Specifiers\n";
		cout<<"4.Friend functions\n";
		cout<<"5.Friend Class\n";
		cout<<"6.Inline function\n";
		cout<<"7.Function Overloading\n";
		cout<<"8.Constructors\n";
		cout<<"9.Types of Constructors\n";
		cout<<"10.Destructors\n";
		cout<<"11.Inheritence\n";
		cout<<"12.Types of Inheritence\n";
		cout<<"13.Scope resolution operator\n";
		cout<<"14.Polymorphism and it's types\n";
		cout<<"15.Operator Overloading\n";
		cout<<"16.Virtual Function\n";
		cout<<"17.Pure Virtual Function and Abstract Class\n";
		cout<<"18.Virtual Constructors and Virtual Destructors\n";
		cout<<"19.Exception Handling\n";
		cout<<"20.Templates\n";
		cout<<"21.File Handling\n";
		cout<<"22.Exit\n";
		cout<<"\n\n Make a choice: ";
		cin>>choice;
	
	switch(choice){
	
    case 1:
		cout<<endl<<endl<<endl;
	    Concept1 obj;
	    obj.display();
	    cout<<endl<<endl<<endl;
		break;
		
    case 2:
    	cout<<endl<<endl<<endl;
    	for (int i=0; i<5; i++)    
        {Concept2 obj;
        obj.demo();
        }
    	cout<<endl<<endl<<endl;
    	break;
    
    case 3:
    	cout<<endl<<endl<<endl;
    	Concept3 obj2;
    	obj2.display();
    	cout<<endl<<endl<<endl;
    	break;
    	
    case 4:
    	cout<<endl<<endl<<endl;
    	Concept4 obj3;
        fnd_function(obj3);
    	cout<<endl<<endl<<endl;
    	break;
    	
    case 5:
    	cout<<endl<<endl<<endl;
    	Concept5 obj4;
    	friend_of_data5 obj5;
    	obj5.display(obj4);
    	cout<<endl<<endl<<endl;
    	break;
    	
    case 6:
    	cout<<endl<<endl<<endl;
    	
    	cout<<"cube of given number"<<cube(3)<<endl<<endl<<endl;
    	break;
    	
    case 7:
    	{
    	cout<<endl<<endl<<endl;
    	int argument1=0, argument2=1;
        char argument3= 'n';
    	overloaded_fnc(argument1);
    	overloaded_fnc(argument1, argument2);
    	overloaded_fnc(argument3);
    	cout<<endl<<endl<<endl;
    	break;
    }
    
    case 8:
    	{
    	cout<<endl<<endl<<endl;
    	Concept6 obj6;
    	cout<<endl<<endl<<endl;
    	break;
    }
    	
    case 9:
    	{
    	 cout<<endl<<endl<<endl;
    	 int argument1=1, argument2=2, argument3=3;
		 Concept7 call_default;	
		 Concept7 call_paramterized(argument1, argument2);
		 Concept7 call_copy(call_default);
		 Concept7 call_dynamic(argument3);
		 cout<<endl<<endl<<endl;
		 break;
		}
    	
	case 10:
	    {
	    cout<<endl<<endl<<endl;
	    Concept8 destruct;
	    break;
		}
		
	case 11:
	  	{
	  	cout<<endl<<endl<<endl;
	  	inherited_from_data9 inherited_obj;
	  	inherited_obj.display();
	  	cout<<endl<<endl<<endl;
		break;	
		}
		
	case 12:
		{
		cout<<endl<<endl<<endl;
		multilevel_inheritence  inh_obj1;
		inh_obj1.display4();
		hybrid_inheritence inh_obj2;
		inh_obj2.display6();
		cout<<endl<<endl<<endl;
		break;
		}
		
	case 13:
		{
		cout<<endl<<endl<<endl;	
		scope_resol_op();
		cout<<endl<<endl<<endl;	
		break;
		}

	case 14:
	    {
	    cout<<endl<<endl<<endl;
		polymorphism();
		cout<<endl<<endl<<endl;
		break;	
		}	
	
	case 15:
    	{
    	cout<<endl<<endl<<endl;
    	operator_overloading_dummy_class object1, object2;
    	object1+object2;
    	cout<<endl<<endl<<endl;
    	break;
		}
		
	case 16:
		{
		cout<<endl<<endl<<endl;
		base *ptr;
		derived d;
		ptr=&d;
		ptr->display();
		cout<<endl<<endl<<endl;
		break;
		}
		
	case 17:
		{
		cout<<endl<<endl<<endl;
		Second_base *bp= new Second_derived();
		bp->display();
		cout<<endl<<endl<<endl;
		break;
		}
		
	case 18:
		{
		cout<<endl<<endl<<endl;
		third_derived *derv= new third_derived();
		third_base *bas= derv;
		delete bas;
		cout<<endl<<endl<<endl;
		break;
		}
		
	case 19:
	    {
		cout<<endl<<endl<<endl;
		
		try{
		excep_hand exc;
		int var=0;
		exc.handle_exception(var);
    	}
    	
    	catch(int a){
		}
		
		cout<<endl<<endl<<endl;
		break;
      }
      
    case 20:
    	{
    	cout<<endl<<endl<<endl;
    	int z=1;
    	template_info<int>(z);
    	cout<<endl<<endl<<endl;
    	break;
		}
		
    case 21:
	   {
    	cout<<endl<<endl<<endl;
    	file_handling();
    	cout<<endl<<endl<<endl;
		break;
	   }
    	
    case 22:
    	{
    	exit(0);
	    }
	
	default:
		cout<<"Wrong Choice\n\n\n";
	
    }
  }while(choice!=22);
  
  return 0;
}
