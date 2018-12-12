#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cout <<"NHAP VAO N:";
	cin>>n;
	int s=1;
	for (int i=1;i<=n;i++){
		s*=i;
	}
	cout<<"GIAI THUA CUA SO DO LA:"<<s;
	return 0;
}
