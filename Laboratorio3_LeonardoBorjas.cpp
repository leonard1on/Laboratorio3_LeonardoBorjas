#include <iostream>
char** crearmatriz(int);
void imprimirmatriz(char**, int, int, int);
char** llenarmatriz1(char**, int);
char** llenarmatriz2(char**, int);
using namespace std;
int main(){
	int size=8;
	char** matriz1=crearmatriz(size);
	char** matriz2=crearmatriz(size);

	matriz1=llenarmatriz1(matriz1,size);	
	imprimirmatriz(matriz1, size,0,0);
	cout<<endl;
	matriz2=llenarmatriz2(matriz2,size);	
	imprimirmatriz(matriz2, size,0,0);
	return 0;
}

char** llenarmatriz1(char** matriz1, int size){
	for(int x=0;x<size;x++){
		for(int y=0;y<size;y++){	
			matriz1[x][y]='~';
		}
	}
	matriz1[1][1]='*';
	matriz1[1][2]='*';
	matriz1[1][3]='*';
	matriz1[2][7]='*';
	matriz1[3][7]='*';
	matriz1[4][7]='*';
	matriz1[3][4]='*';
	matriz1[4][4]='*';
	matriz1[5][4]='*';
	matriz1[7][1]='*';
	matriz1[7][2]='*';
	matriz1[7][3]='*';

	return matriz1;
}

char** llenarmatriz2(char** matriz2, int size){
	for(int x=0;x<size;x++){
		for(int y=0;y<size;y++){	
			matriz2[x][y]='~';
		}
	}
	matriz2[0][1]='*';
	matriz2[0][2]='*';
	matriz2[0][3]='*';
	matriz2[3][5]='*';
	matriz2[3][6]='*';
	matriz2[3][7]='*';
	matriz2[4][4]='*';
	matriz2[5][4]='*';
	matriz2[6][4]='*';
	matriz2[5][1]='*';
	matriz2[6][1]='*';
	matriz2[7][1]='*';

	return matriz2;
}


char** crearmatriz(int size){
	char** matriz=new char*[size];
	for(int i=0;i<size;i++){
		matriz[i]=new char [size];
	}
	return matriz;
}

void imprimirmatriz(char** matriz, int size, int x, int y){
	if(x==size-1 && y==size){
		cout<<endl;
		return;
	}else if(y==size){
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
