#include<iostream>
using namespace std;
class shape{
	protected:
	int x,y;
	public:
	void get_data()
          {
           cout<<"------------------------";
		cout<<"Enter the value 1:";
		cin>>x;
		cout<<"Enter the value 2:";
		cin>>y;
	}
	virtual void display_area()=0;    //VIRTUAL FUNCTION
};
class triangle: public shape
{
	public:
	void display_area(){
		cout<<"Area of triangle:"<<0.5*x*y;
	}
};
class rect: public shape{
	public:
	void display_area(){
		cout<<"Area Of Rectangle:"<<x*y;
	}
};
int main(){
	shape *ptr;
	triangle t;
	ptr=&t;
	ptr->get_data();
	ptr->display_area();
	cout<<endl;
	rect r;
	ptr=&r;
	ptr->get_data();
	ptr->display_area();
	return 0;
}








