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
	cout<<"2.In Function Overloading 'function' name should be the same and the arguments should be different.\n";
}

void overloaded_fnc(int x, int y){
	cout<<"3.Function overloading can be considered as an example of a polymorphism feature in C++.\n";
	cout<<"4.Overloaded functions look like this:-\n\n";
	cout<<"  add(int a, int b)\n  add(float a, float b)\n  add(int a , int b, int c, int d)\n\n";
}

void overloaded_fnc(char x){
	cout<<"Using function overloading we can design a family of functions with one function name where each function would perform different function\n";
}

class Concept6{ //constructor
	public:
		Concept6(){
			cout<<"1.Constructor in C++ is a special method that is invoked automatically at the time of object creation.\n";
			cout<<"2.It is used to initialize the data members of new objects generally.\n3.The constructor in C++ has the same name as the class or structure.\n";
			cout<<"4.It constructs the values i.e. provides data for the object which is why it is known as constructors.\n";
			cout<<"5.Constructor does not have a return value, hence they do not have a return type.\n";
			cout<<"6.Constructors can be defined inside or outside the class declaration\n";
			cout<<"7.The prototype of Constructors is as follows:\n\n";
			cout<<"Inside the class:-\n\nclass-name (list-of-parameters)\n {//constructor definition\n}\n\n";
			cout<<"Outside the class:-\n\nclass-name :: class-name (list-of-parameters)\n {//constructor definition\n}\n";
		}
};

class Concept7{  //types of constructors
	public:
		int *num;
		Concept7(){
			cout<<"There are majorly 4 types of constructors:-\n";
			cout<<"1.Default constructor\n2.Parameterized Constructor\n3.Copy Constructor\n4.Dynamic Constttructor\n\n";
			cout<<"Default Constructor:-\n";
			cout<<"1.Default constructor is the constructor which doesn’t take any argument. It has no parameters.\n";
			cout<<"2.It is also called a zero-argument constructor.\n";
			cout<<"3.If we define objects and classes without defining any constructor for a class, in such a case compiler automatically generates a constructor of it's own with no paramters\n";
			cout<<"4.This type of automatically  created constructor is known as dummy constructor and it doesn't perform any initialization\n";
			cout<<"5.If you define a default constructor explicitly, the compiler no longer generates a dummy constructor for you\n";
			cout<<"6.We can define a default constructor like this:-\n\n";
			cout<<"class_name(no parameters){\n //some data\n}\n\n";
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
			cout<<"The syntax of using inheritence is given below:-\n\n";
			cout<<"class  derived_class_name : access-specifier base_class_name\n\n";
			cout<<"Note- Any number of classes can be inherited from one class.";
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
	cout<<"Scope resolution operaor looks like this :: and has a variety of uses:-\n\n";
	cout<<"1.To access a global variable when there is a local variable with same name.\n";
	cout<<"2.To define a function outside a class.\n";
	cout<<"3.To access a class’s static variables.\n";
	cout<<"4.In case of multiple Inheritance: If same variable name exists in two ancestor classes, we can use scope resolution operator to distinguish.\n";
	cout<<"5.For namespace If a class having the same name exists inside two namespace we can use the namespace name with the scope resolution operator to refer that class without any conflicts\n";
	cout<<"6.Refer to a class inside another class: If a class exists inside another class we can use the nesting class to refer the nested class using the scope resolution operator\n";
}

void polymorphism(){   //polymorphism and it's types
	cout<<"1.The term 'Polymorphism' is the combination of 'poly' + 'morphs' which means many forms. It is a greek word.\n";
	cout<<"2.Polymorphism in C++ means the same entity(function, operator or object) behaves differently in different scanerios.\n";
	cout<<"3.There are two types of polymorphism:-\n\n";
	cout<<"a)Compile Time:-\ni)In compile time polymorphism, functions are called at the time of compilation.\n";
	cout<<"ii)This is also known as early binding or static binding.\niii)Examples-Function Overloading, Operator Overloading.\n\n";
	cout<<"b)Run Time:-\ni)In a run time polymorphism, functions are called at the time of program execution.\n";
	cout<<"ii)This is also known as late binding or dynamic binding.\niii)Examples-Function Overriding, Virtual Function.\n";
}

class operator_overloading_dummy_class{
	public:
		void no_work(){}
};

void operator+(operator_overloading_dummy_class&obj1,operator_overloading_dummy_class&obj2){ //operator overloading
     cout<<"1.C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading.\n";
     cout<<"2.For example, we can overload an operator '+' in a class like String so that we can concatenate two strings by just using '+'.\n";
     cout<<"3.By using operator overloading, we do not change the orignal meaning of the operator, we just prvoide an additional special meaning\n";
     cout<<"4.Syntax Of Operator Overloading:-\n\n";
     cout<<"returnType operator_symbol (arguments) {\n some data or function\n}\n\n";
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
			cout<<"1.Virtual function is a member function which is declared within a base class and is re-defined (overridden) by a derived class.\n";
			cout<<"2.When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function.\n";
			cout<<"3.Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for function call.\n";
			cout<<"4.They are mainly used to achieve Runtime polymorphism\n";
			cout<<"5.Functions are declared with a virtual keyword in base class.\n";
			cout<<"6.This is how you implement a virtual function:-\n\n";
			cout<<"virtual return_type function_name(parameters)\n\n";
			cout<<"Rules for Virtual Functions:-\n\n";
			cout<<"1.Virtual functions cannot be static.\n";
			cout<<"2.A virtual function can be a friend function of another class.\n";
			cout<<"3.Virtual functions should be accessed using pointer or reference of base class type to achieve runtime polymorphism.\n";
			cout<<"4.The prototype of virtual functions should be the same in the base as well as derived class.\n";
			cout<<"5.They are always defined in the base class and overridden in a derived class. It is not mandatory for the derived class to override.\n";
			cout<<"6.A class may have virtual destructor but it cannot have a virtual constructor.\n";
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
			cout<<"1.A pure virtual function is a virtual function in C++ for which we need not to write any function definition and only we have to declare it\n";
			cout<<"2.It is declared by assigning 0 in the declaration.\n3.Syntax of declaring a pure virtual function is as following:-\n\n";
			cout<<"virtual return_type function_name(paramters)=0\n\n";
			cout<<"4.Pure virtual functions are used if a function doesn't have any use in the base class but the function must be implemented by all its derived classes\n\n";
			cout<<"Abstract Classes:-\n\n";
			cout<<"1.An abstract class is a class in C++ which have at least one pure virtual function.\n";
			cout<<"2.Abstract class can have normal functions and variables along with a pure virtual function.\n";
			cout<<"3.Abstract class cannot be instantiated, but pointers and references of Abstract class type can be created.\n";
			cout<<"4.If an Abstract Class has derived class, they must implement all pure virtual functions, or else they will become Abstract too.\n";
			cout<<"5.Abstract classes are mainly used for Upcasting, so that its derived classes can use its interface.\n";
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
			cout<<"1.Deleting a derived class object using a pointer of base class type that has a non-virtual destructor results in undefined behavior.\n";
			cout<<"2.To correct this situation, the base class should be defined with a virtual destructor.\n";
			cout<<"3.Making base class destructor virtual guarantees that the object of derived class is destructed properly, i.e., both base class and derived class destructors are called.\n";
			cout<<"A virtual destructor can be defined as following:-\n\n";
			cout<<"virtual ~ class_name(parameters)\n\n";
		}
};

class excep_hand{ //exception handling
	public:
		void handle_exception(int x){
			if(x==0){
				cout<<"What are Exceptions?\n\n";
				cout<<"1.Exceptions are runtime anomalies or abnormal conditions that a program encounters during its execution.\n\n";
				cout<<"2.There are two types of exceptions:\na)Synchronous\nb)Asynchronous\n\n";
				cout<<"What is Exception Handling?\n\n";
				cout<<"1.When executing C++ code, different errors can occur: coding errors made by the programmer, errors due to wrong input, or other unforeseeable things.\n";
				cout<<"2.When an error occurs, C++ will normally stop and generate an error message. The technical term for this is: C++ will throw an exception (error).\n";
				cout<<"3.By using excption handling we can detect these exceptions and errors and throw them out as a message instead of getting a compilation error or execution error in our program.\n";
				cout<<"4.Exception handling in C++ consists of three keywords: try, throw and catch\n";
				cout<<"5.The try statement allows you to define a block of code to be tested for errors while it is being executed.\n";
				cout<<"6.The throw keyword throws an exception when a problem is detected, which lets us create a custom error.\n";
				cout<<"7.The catch statement allows you to define a block of code to be executed, if an error occurs in the try block.\n";
				cout<<"Few more things about exception handling in C++:\n\n";
				cout<<"1.There is a special catch block called the 'catch all' block, written as catch(…), that can be used to catch all types of exceptions.\n";
				cout<<"2.If a statement is written after throw, that statement will be ignored by the compiler.\n";
				throw x;
				cout<<"This statement is written after throw, that's why it will be ignored by compiler and won't be executed";
			}
		}
};

template <class T> 

T template_info(T x){
	cout<<"1.A template is a simple yet very powerful tool in C++.\n";
	cout<<"2.The simple idea is to pass data type as a parameter so that we don’t need to write the same code for different data types.\n";
	cout<<"3.Templates does this by defining generic classes and generic functions and thus provides support for generic programming.\n";
	cout<<"4.Templates are expanded at compiler time. This is like macros.\n";
	cout<<"5.There are two major types of templates:-\na)Function Templates\nb)Class Templates\n";
	cout<<"6.We can overload the generic function means that the overloaded template functions can differ in the parameter list.\n";
	cout<<"7.You can define a function template as following:-\n\n";
	cout<<"template <typename T> return_type function_name (T paramter1, T parameter2 and so on)\n\n";
	cout<<"8.You can define a class template as following:-\n\n";
	cout<<"template <class T>\n class class_name{\n};\n\n";
	return x;
}


void file_handling(){    //file handling
	cout<<"1.Files are used to store data in a storage device permanently.\n";
	string choice;
	cout<<"We can even read this complete program using file handling\n";
	cout<<"If you want to read this program then type 'read' otherwise type anything else to continue learning other OOP concepts:\n";
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