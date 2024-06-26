#include <iostream>
#include <iomanip>
#include <cmath>
#define ep 0.01

using namespace std;

//declare function
float f(float x){
    return pow(x,3)-(5*pow(x,2))+2*x+1;
}

//declare derivative function
float df(float x){
    return 3*pow(x,2)-(10*x)+2;
}

void calc(float a, float b){
	float m, e;
	int i = 0;
	cout << setw(12) << "i" << setw(12) << "a" << setw(12) << "b";
	cout << setw(12) << "d" << setw(12) << "f(d)" << setw(12) << "delta" << endl;
	do{
		m = a-((b-a)*f(a)/(f(b)-f(a)));
		cout << setw(12) << ++i << setw(12) << a << setw(12) << b;
		cout << setw(12) << m << setw(12) << f(m);
		if(f(a)*f(m) < 0) b = m;
		else a = m;
		e = fabs(f(m)/df(m));
		cout << setw(12) << e << endl;
	} while(e > ep);
	cout << "Phuong trinh co nghiem gan dung: " << m << " voi sai so: " << e << endl;
}

int main(){
	float a = 0, b = -1;
	calc(a,b);
}
