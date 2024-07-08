#include<iostream>
using namespace std;
int main(){
	
	int x,y;
	char operasi;
	bool hasilsebelumnya=0;
	bool clear=false;
	
		
	while(true){
	
	  if(clear){
		system ("cls") ;
		clear=false;
	}
	
	cout<<"pilih operasi ";
	
	cout<<"masukkan jumlah bilangan yang akan(+-*/)\n";
	cout<<"a=";
	cin>>x;
	cout<<"b=";
	cin>>y;
	cout<<"operasiyang digunakan(+,-,*,/):\n";
	cin>>operasi;
	
	switch(operasi){
	case '+':
            cout <<"hasil:"<< x + y<<endl;
            break;
        case '-':
            cout <<"hasil:"<< x - y<<endl;
            break;
        case '*':
            cout <<"hasil:"<< x * y<<endl;
            break;
        case '/':
            if (y != 0) {
                cout <<"hasil:"<< static_cast<double>(x) /y <<endl;
            } else {
                cout << "Tidak bisa melakukan pembagian oleh nol.";
            }
            break;
        default:
            cout << "Operasi tidak valid.";
    }

if(clear){
	
	cout<<hasilsebelumnya<<endl;
}

}
	return 0;
}
