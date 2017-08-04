#include <iostream>
char** crearmatriz(int);
void imprimirmatriz(char**, int, int, int);
char** llenarmatriz1(char**, int);
using namespace std;
int main(){
	int size=8;
	char** matriz1=crearmatriz(size);
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			matriz1[i][j]='0';
		}
	}
	imprimirmatriz(matriz1, size,0,0);
	return 0;
}

char** llenarmatriz1(char** matriz1, size){
	for(int x=0;x<size;x++){
		for(int y=0;y<size;y++){	
			matriz1[x][y]='~';
		}
	}
	matriz1[1][1]='*';
	matriz1[1][2]='*';
	matriz1[1][3]='*';
	matriz1[3][4]='*';
	matriz1[3][5]='*';

	return matriz1;
}

char** crearmatriz(int size){
	char** matriz=new char*[size];
	for(int i=0;i<size;i++){
		matriz[i]=new char [size];
	}
	return matriz;
}

void imprimirmatriz(char** matriz, int size, int x, int y){
	if(x==size-1 && y==size-1){
		cout<<endl;
		return;
	}else if(y==size-1){
		cout<<endl;
		y=0;
		x++;
		imprimirmatriz(matriz, size, x, y);
	}else if(y<size){
		cout<<" "<<matriz[x][y];
		y++;
		imprimirmatriz(matriz, size, x, y);
	}
	return;
}
