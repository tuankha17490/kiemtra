#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	int n,a,b,c;
	float d;
	string s;
	cout<<"NHAP VAO TEN SINH VIEN:"<<endl;
	getline (cin, s);
	fflush(stdin);
	cout<<"DIEM MON TOAN:";
	cin>>a;
	cout<<"DIEM MON LY:";
	cin>>b;
	cout<<"DIEM MON HOA:";
	cin>>c;
	d=(a+b+c)/3;
	cout<<"DIEM TRUNG BINH CUA 3 MON LA:  "<<d<<endl;
	if (d>=8) cout<<"XEP LOAI XUAT SAC"<<endl;
	if(d>=7&&d<8) cout <<"XEP LOAI GIOI";
	if(d>=6&&d<7) cout<<"XEP LOAI KHA";
	if(d>=5&&d<6) cout<< "XEP LOAI TRUNG BINH";
	if(d<5) cout<<"XEP LOAI YEU"<<endl;
	cout<<"TEN SINH VIEN:\t"<<s <<endl;
	cout<<"DIEM TRUNG BINH:\t"<<d<<endl<<"XEP LOAI: ";
	if (d>=8) cout<<"XEP LOAI XUAT SAC";
	if(d>=7&&d<8) cout <<"XEP LOAI GIOI";
	if(d>=6&&d<7) cout<<"XEP LOAI KHA";
	if(d>=5&&d<6) cout<< "XEP LOAI TRUNG BINH";
	if(d<5) cout<<"XEP LOAI YEU"<<endl;
	return 0;
}
