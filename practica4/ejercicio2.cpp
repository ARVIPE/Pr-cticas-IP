#include<iostream>
using namespace std;
bool esprimo(int v){
bool res;
int cont=1;

for(int i=1; v!=i; i++){
	if(v%i==0){
		cont++;
	}
	if(cont==2){
		res=false;
	}else{res=true;}

}


return res;
}
int main(){
int n;
cout<<"Introduzca un valor"<<endl;
cin>>n;
bool ep=esprimo(n);
if(ep==true){
cout<<"El valor no es primo"<<endl;
}
else{
cout<<"El valor es primo"<<endl;
}
	cin.ignore(); 
	cin.get();

}