#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	int S=0;
	cout <<"NHAP VAO SO TU NHIEN N:\t";
	cin>>n;
	while(n!=0) 
	 { S +=n%10; 
	    n /=10;
	 }
	cout<<"TONG LA:\t"<<S;
	return 0;
}
