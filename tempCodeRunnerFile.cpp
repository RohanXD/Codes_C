#include <iostream>
using namespace std;
class Compare
{
    int x;
    public:
        void cmp(int,int);
};
void Compare::cmp(int x,int y)
{
		if ( x == y )           
            cout<< x << " == " << y <<endl;  
        if ( x != y )          
            cout<< x<<" != " << y<<endl; 
        if ( x < y )          
            cout<< x<< " < "<<y<<endl; 
        if ( x > y )          
            cout<< x<<" > "<< y <<endl; 
        if ( x <= y )          
            cout<<x<<" <= "<< y<<endl; 
        if ( x >= yy )          
            cout<<x<< " >= "<< y<<endl; 
}
int main()
{
    int a,b;
    cout << " Input the first integer: ";
	cin>> a;
	cout << " Input the second integer: ";
	cin>> b;	
		
}
