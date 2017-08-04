#include <iostream>
#include <stdlib.h>
#include <time.h>
char** crearmatriz(int);
void imprimirmatriz(char**, int, int, int);
char** llenarmatriz1(char**, int);
char** llenarmatriz2(char**, int);

using namespace std;

int main(){
	int size=8;
	int salir=0;
	int coordx=0;
	int coordy=0;
	int shot1=0;
	int shot2=0;
	int barco11=3;
	int barco12=3;
	int barco13=3;
	int barco14=3;
	int barco21=3;
	int barco22=3;
	int barco23=3;
	int barco24=3;
	char** matriz1=crearmatriz(size);
	char** matriz2=crearmatriz(size);
	srand(time(NULL));
	matriz1=llenarmatriz1(matriz1, size);
	matriz2=llenarmatriz2(matriz2, size);	
	do{
		if(salir==0){
			
			imprimirmatriz(matriz1, size,0,0);
			cout<<endl;
			cout<<"Turno del Jugador 1:" <<endl
				<<"Ingrese la coordenada x:";
			cin>>coordx;
			cout<<endl <<"Ingrese la coordenada y:";
			cin>>coordy;
			cout<<endl;
			if(matriz2[coordx][coordy]=='*'){
				cout<<"Le haz dado a un barco"<<endl;
				matriz2[coordx][coordy]='X';
					
				int prueba= rand() % 7 + 1;
				if(prueba==1)
					cout<<"El oponente bebe un Cheap_Tequila";
				if(prueba==2)
					cout<<"El oponente bebe un Jell-O";
				if(prueba==3)
					cout<<"El oponente bebe un Kamikaze";
				if(prueba==4)
					cout<<"El oponente bebe un MindEraser";
				if(prueba==5)
					cout<<"El oponente bebe un Bombs";
				if(prueba==6)
					cout<<"El oponente bebe un Fireballs";
				if(prueba==7)
					cout<<"El oponente bebe un Whiskey";
				cout<<endl;
				shot2+=1;
				
				if(coordx==0 && coordy==1)
					barco21-=1;
				if(coordx==0 && coordy==2)
					barco21-=1;
				if(coordx==0 && coordy==3)
					barco21-=1;		

				if(coordx==3 && coordy==5)
					barco22-=1;
				if(coordx==3 && coordy==6)
					barco22-=1;
				if(coordx==3 && coordy==7)
					barco22-=1;

				if(coordx==4 && coordy==4)
					barco23-=1;
				if(coordx==5 && coordy==4)
					barco23-=1;
				if(coordx==6 && coordy==4)
					barco23-=1;

				if(coordx==5 && coordy==1)
					barco24-=1;
				if(coordx==6 && coordy==1)
					barco24-=1;
				if(coordx==7 && coordy==1)
					barco24-=1;

				
				if(barco21==0)
					cout<<"Haz hundido el barco 1 del oponente!"<<endl;
				if(barco22==0)
					cout<<"Haz hundido el barco 2 del oponente!"<<endl;
				if(barco23==0)
					cout<<"Haz hundido el barco 3 del oponente!"<<endl;
				if(barco24==0)
					cout<<"Haz hundido el barco 4 del oponente!"<<endl;

			}else{	
			cout<<"Haz fallado el tiro" <<endl;
			}
			salir=1;
		}
		
		if(salir==1)
			
			imprimirmatriz(matriz2, size,0,0);
			cout<<endl;
			cout<<"Turno del Jugador 2:" <<endl
				<<"Ingrese la coordenada x:";
			cin>>coordx;
			cout<<endl <<"Ingrese la coordenada y:";
			cin>>coordy;
			cout<<endl;
			if(matriz1[coordx][coordy]=='*'){
				cout<<"Le haz dado a un barco"<<endl;
				matriz1[coordx][coordy]='X';
	
				int prueba= rand() % 7 + 1;
				if(prueba==1)
					cout<<"El oponente bebe un Cheap_Tequila";
				if(prueba==2)
					cout<<"El oponente bebe un Jell-O";
				if(prueba==3)
					cout<<"El oponente bebe un Kamikaze";
				if(prueba==4)
					cout<<"El oponente bebe un MindEraser";
				if(prueba==5)
					cout<<"El oponente bebe un Bombs";
				if(prueba==6)
					cout<<"El oponente bebe un Fireballs";
				if(prueba==7)
					cout<<"El oponente bebe un Whiskey";
				cout<<endl;
				shot1+=1;
				
				if(coordx==1 && coordy==1)
					barco11-=1;
				if(coordx==1 && coordy==2)
					barco11-=1;
				if(coordx==1 && coordy==3)
					barco11-=1;		

				if(coordx==2 && coordy==7)
					barco12-=1;
				if(coordx==3 && coordy==7)
					barco12-=1;
				if(coordx==4 && coordy==7)
					barco12-=1;

				if(coordx==3 && coordy==4)
					barco13-=1;
				if(coordx==4 && coordy==4)
					barco13-=1;
				if(coordx==5 && coordy==4)
					barco13-=1;

				if(coordx==7 && coordy==1)
					barco14-=1;
				if(coordx==7 && coordy==2)
					barco14-=1;
				if(coordx==7 && coordy==3)
					barco14-=1;

				
				if(barco11==0)
					cout<<"Haz hundido el barco 1 del oponente!"<<endl;
				if(barco12==0)
					cout<<"Haz hundido el barco 2 del oponente!"<<endl;
				if(barco13==0)
					cout<<"Haz hundido el barco 3 del oponente!"<<endl;
				if(barco14==0)
					cout<<"Haz hundido el barco 4 del oponente!"<<endl;
			}else{	
			cout<<"Haz fallado el tiro" <<endl;
			}

			salir=0;
	}while(shot1!=5 || shot2!=5);


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
