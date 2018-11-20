#include<iostream>

using namespace std;

//declaring class

class Rectangle{
	
	//acess

	public:
	
	//properties

	
	double b;
	double l;
	//pe declaed 

	double getPer(void);  
	//area  function declared 
	double getAr(void)
	{
		return l*b;
		}
	};

//perimeter functin defined 
double Rectangle::getPer(void)
	{
	return 2*(l+b);
	}

// funtion tocompare rectangles
int max(int a, int b){
	if(a>b){ 
		cout <<"Rectangle1 ";
		}
	else{
		cout<<"Rectangle2 ";
		}
	return 0;	
	}
int main(){
	// declaing variables
	int x , y , q , p ;
	Rectangle Rectangle1;
	Rectangle Rectangle2;
	// inputs
	cout<< "enter dimensions of Rectangle1"<<endl;
	cin>>Rectangle1.l;
	cout<<endl;
	cin>>Rectangle1.b;
	
	cout<<endl;
	
	cout<< "enter dimensions of Rectangle2"<<endl;
	cin>>Rectangle2.b;
	cout<<endl;
	cin>>Rectangle2.l;

	cout<<endl;

	x=Rectangle1.getAr();
	y=Rectangle2.getAr();
	q=Rectangle1.getPer();
	p=Rectangle2.getPer();
	
	//comparing two rectangles
	if(x!=y){
		cout<<max(x,y)<<"has larger area of the two";

		}
	else{
		cout<<"Both have equal areas"<<endl;
		}
	if(p!=q){
		cout<<max(q,p)<<"has maximum perimeter"<<endl;
		}
	else{
		cout<<"Both have equal boundry length"<<endl;
		}
	return 0;
	} 


