////#include<iostream>
////using namespace std;
////int main()
////{
////	int a,b,sum;
////	cout <<"Enter the values";
////	cin>>a>>b;
////	sum=a+b;
////	cout<<"The sum="<<sum<<endl;
////	cout<<"The sum of"<<a<<"+"<<b<<"="<<sum;
////	return 0;
////}
////#include<iostream>
////using namespace std;
////int main()
////{
////	float b,h,aot;
////	cout<<"enter base";
////	cin>>b;
////	cout<<"enter height";
////	cin>>h;
////	aot=0.5*b*h;
////	cout<<"are of triangle="<<aot<<endl;
////	cout<<"\nArea of triangle with base="<<b<<
////	"and height="<<h<<"="<<aot;
////	return 0;
////}
////#include<iostream>
////using namespace std;
////int main ()
////{ int rev,t,a,n;
////cout<<"Enter your first no";
////cin>>n;
////t=n;
////cout<<n;
////while(n!=0){
////	a=n%10;
////	rev=rev*10+a;
////	n=n/10;
////}
////cout<<"Reverse of a number is="<<rev<<endl;
////if(t==rev)
////cout<<"Its  palindrome";
////else
////cout<<t<<"its not palindrome";
////return 0;
////
////
////	
////	
////}
////#include<iostream>
////using namespace std;
////class demo
////{
////	public:
////	int a,b;
////	void ip()
////	{
////		a=9;
////		b=7;
////		
////	}
////	void show ()
////	{
////		cout<<a<<" "<<b<<endl;
////		
////	}}d;
////	int main()
////	{
////		d.ip();
////		d.show();
////		d.a=89;
////		d.b=67;
////		d.show();
////	}
//#include<iostream>
//using namespace std;
//#include<cstring>
//class student{
//	char name[30];
//	int roll;
//	float cgpa;
//	public:
//		void get(char s[],int r,float c){
//			strcpy(name,s);
//			roll=r;
//			cgpa=c;
//		}
//	void show(){
//		cout<<" the name of the student="<<name<<endl;
//		cout<<" the roll no="<<roll<<endl;
//		cout<<" the cgpa="<<cgpa<<endl;
//		
//	}
//		
//};
//int main(){
//	student y;
//		y.get("Ankit kumar roy",68,6.38);
//		y.show();
//}
// 
//#include<iostream>
//#include<cstring>
//using namespace std;
//class student{
//	char name[20];
//	int Employe_Id;
//	char laptop[20];
//	public:
//		void get(){
//			cout<<"Enter  Employe_Name: ";
//			cin>>name;
//			cout<<"Enter Employe_ID: ";
//			cin>>Employe_Id;
//			cout<<"Enter Employe_Laptop Name: ";
//			cin>>laptop;
//		}
//		void show(){
//			cout<<"Employe_Name: "<<name<<endl;
//			cout<<"Employe_ID "<<Employe_Id<<endl;
//			cout<<"Employe_Laptop Name: "<<laptop<<endl;
//		}
//}s1;
//int main(){
//	s1.get();
//	s1.show();	
//}
//#include<iostream>
//using namespace std;
//class student
//{
//	char name[16];
//	int roll_no;
//	public:
//		void getdata(){
//			cout<<"name of student";
//			cin>>name;
//			cout<<"Enter your roll no";
//			cin>>roll_no;
//			
//		}
//		void display(){
//			cout<<"The name of the student=";
//			cout<<name<<endl;
//			cout<<"The roll no is=";
//			cout<<roll_no<<endl;
//		}};
//		int main()
//		{
//			student s[10];
//			int n,i;
//			cout<<"Enter the no of student whose data you want to show=";
//			cin>>n;
//			for(i=0;i<n;i++){
//				s[i].getdata();
//				s[i].display();
//			}
//		
//	}
#include<iostream>
#include<string>
//using namespace std;
//class student{
//	string name;
//	string stream;
//	static int regno;
//	public:
//		void get(){
//			cout<<"Enter your name="<<endl;
//			cin>>name;
//			cout<<"Enter your stream"<<endl;
//			cin>>stream;
//			regno++;
//			}
//			void display()
//			{
//			cout<<" name="<<name<<endl;
//			cout<<"stream="<<stream<<endl;
//			cout<<"reg_no="<<regno<<endl;}	
//};
//int student::regno=121000;
//int main(){
//	int i,n;
//	cout<<"Enter the no of student=";
//	student s,s1,s2;
//	s.get();
//	s.display();
//	s1.get();
//	s1.display();
//	s2.get();
//	s2.display();
//}
using namespace std;
//int main(){
//	int a=100;
//	int b=200;
//	cout<<"Before swap, value of a="<<a<<endl;
//	cout<<"Before swap,value of b="<<b<<endl;
//	swap(a,b);
//	cout<<"After swap,value of a="<<a<<endl;
//	cout<<"After swap,value of b="<<b<<endl;
//	return 0;}
//	void swap(int x,int y){
//		int temp;
//			temp=x;
//			x=y;
//			y=temp;
//			cout<<"After swap,value of x(a)="<<x<<endl;
//			cout<<"After swap,value of y(b)="<<y<<endl;
//	}
void fun(int a,int b,int c);
int main(){
	fun(2,3);
	return 0;
}
void fun(int a, int b,int c){
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"c="<<c<<endl;
}
