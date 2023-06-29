#include <iostream>
#include <windows.h>
#include <vector>
using namespace std;


char mostrarMenuPrincipal (void);
char mostrarAnalizarAlgoritmos (void);
char mostrarVisualizarResultados (void);

int main(int argc, char *argv[]) {
	vector<bool> AN(7,0);
	system("color 1F");
	//system("mode con: cols=100 lines=30");
	char opcionPrincipal;
	char opcionSecundaria;
	char opcionTerciaria;
	opcionPrincipal = mostrarMenuPrincipal();
	
	while(opcionPrincipal!='s'){			
		switch(opcionPrincipal){
			case'a':
				opcionSecundaria = mostrarAnalizarAlgoritmos();
				while(opcionSecundaria!='s'){
				switch(opcionSecundaria){
				case'a':
				if(AN[0] == 1 ){
					cout<<"Algoritmo ya analizado"<<endl;
					system ("pause");
				}else{
				cout<<"\n SALIDA CASO DE PRUEBA (5,8) "<<endl;
			    cout<<"-----------------------------"<<endl;
			    cout<<"El máximo es: 8."<<endl<<endl;
				AN[0] = 1;system ("pause");
				}
				break;
					case'b':
						if(AN[1] == 1 ){
							cout<<"Algoritmo ya analizado"<<endl;
							system ("pause");
						}else{
						cout<<"Analisis Algoritmo2"<<endl;
						AN[1] = 1;system ("pause");
						}
						break;
						case'c':
							if(AN[2] == 1 ){
								cout<<"Algoritmo ya analizado"<<endl;
								system ("pause");
							}else{
							cout<<"Analisis Algoritmo3"<<endl;
							AN[2] = 1;system ("pause");
							}
							break;
							case'd':
								if(AN[3] == 1 ){
									cout<<"Algoritmo ya analizado"<<endl;
									system ("pause");
								}else{
								cout<<"Analisis Algoritmo4"<<endl;
								AN[3] = 1;system ("pause");
								}
								break;
								case'e':
									if(AN[4] == 1 ){
										cout<<"Algoritmo ya analizado"<<endl;
										system ("pause");
									}else{
									cout<<"Analisis Algoritmo5"<<endl;
									AN[4] = 1;system ("pause");
									}
									break;
									case'f':
										if(AN[5] == 1 ){
											cout<<"Algoritmo ya analizado"<<endl;
											system ("pause");
										}else{
										cout<<"Analisis Algoritmo6"<<endl;
										AN[5] = 1;system ("pause");
										}
										break;
										case'g':
											if(AN[6] == 1 ){
												cout<<"Algoritmo ya analizado"<<endl;
												system ("pause");
											}else{
											cout<<"Analisis Algoritmo7"<<endl;
											AN[6] = 1;system ("pause");
											}
											break;					
				}
				opcionSecundaria = mostrarAnalizarAlgoritmos();
				}
				break;
			case'b':
				opcionTerciaria = mostrarVisualizarResultados();
				while(opcionTerciaria!='s'){
					switch(opcionTerciaria){
						case'a':
							if ( AN[0] == 0 ){
								cout<<"Algoritmo no analizado"<<endl;
								system ("pause");
							}else{
								cout<<"Visualizacion del algoritmo"<<endl;
								system ("pause");
							}
							break;
							case'b':
								if ( AN[1] == 0 ){
									cout<<"Algoritmo no analizado"<<endl;
									system ("pause");
								}else{
									cout<<"Visualizacion del algoritmo"<<endl;
									system ("pause");
								}
								break;
								case'c':
									if ( AN[2] == 0 ){
										cout<<"Algoritmo no analizado"<<endl;
										system ("pause");
									}else{
										cout<<"Visualizacion del algoritmo"<<endl;
										system ("pause");
									}
									break;
									case'd':
										if ( AN[3] == 0 ){
											cout<<"Algoritmo no analizado"<<endl;
											system ("pause");
										}else{
											cout<<"Visualizacion del algoritmo"<<endl;
											system ("pause");
										}
										break;
										case'e':
											if ( AN[4] == 0 ){
												cout<<"Algoritmo no analizado"<<endl;
												system ("pause");
											}else{
												cout<<"Visualizacion del algoritmo"<<endl;
												system ("pause");
											}
											break;
											case'f':
												if ( AN[5] == 0 ){
													cout<<"Algoritmo no analizado"<<endl;
													system ("pause");
												}else{
													cout<<"Visualizacion del algoritmo"<<endl;
													system ("pause");
												}
												break;
												case'g':
													if ( AN[6] == 0 ){
														cout<<"Algoritmo no analizado"<<endl;
														system ("pause");
													}else{
														cout<<"Visualizacion del algoritmo"<<endl;
														system ("pause");
													}
													break;					
					}
					opcionTerciaria = mostrarVisualizarResultados();
				}
				break;
		}
		
		opcionPrincipal = mostrarMenuPrincipal();
		
	}
	cout<<endl;
	cout<<"Programa Finalizado..."<<endl;
	
	return 0;
}

char mostrarMenuPrincipal (void){
	char opcion;
	system ("cls");
	cout << "=========================" << endl;
	cout << "      Menu Principal    " << endl;
	cout << "=========================" << endl;
	cout << "a.- Analizar Algoritmos"<< endl;
	cout << "b.- Visualizar Resultados"<< endl;
	cout << "s.- Cerrar la aplicacion" << endl << endl;
	cout<<"Ingrese una opcion valida(a,b,s)..."<<endl;
	cin >> opcion;	
	while( (opcion!='a') && (opcion!='b') && (opcion!='s') ){
		cin>>opcion;
	}
	return opcion;
}

char mostrarAnalizarAlgoritmos (void){
	char opcion;
	system ("cls");
	cout << "=============================================================" << endl;
	cout << "                  Analizar Algoritmos C++                    " << endl;
	cout << "=============================================================" << endl;
	cout << "a.-Algoritmo #1 SECUENCIAL (Solucion a problema de sumatoria)" << endl;
	cout << "b.-Algoritmo #2 IF/ELSE (Solucion a seleccion completa)" << endl;
	cout << "c.-Algoritmo #3 SWITCH (Solucion a seleccion multiple)" << endl;
	cout << "d.-Algoritmo #4 FOR (Solucion a problema de sumatoria)" << endl;
	cout << "e.-Algoritmo #5 FOR (Solucion a problema repetitivo-anidado)" << endl;
	cout << "f.-Algoritmo #6 DO-WHILE (Solucion problema zodiaco)" << endl;
	cout << "g.-Algoritmo #7 WHILE (Solucion problema decimal-binario-octal)" << endl;
	cout << "s.- Volver al Menu Anterior" << endl;
	cin >> opcion;
	system ("cls");
	return opcion;
}

char mostrarVisualizarResultados (void){
	char opcion;
	system ("cls");
	cout << "=============================================================" << endl;
	cout << "           Visualizar Resultados Algoritmos C++              " << endl;
	cout << "=============================================================" << endl;
	cout << "a.-Algoritmo #1 SECUENCIAL (Solucion a problema de sumatoria)" << endl;
	cout << "b.-Algoritmo #2 IF/ELSE (Solucion a seleccion completa)" << endl;
	cout << "c.-Algoritmo #3 SWITCH (Solucion a seleccion multiple)" << endl;
	cout << "d.-Algoritmo #4 FOR (Solucion a problema de sumatoria)" << endl;
	cout << "e.-Algoritmo #5 FOR (Solucion a problema repetitivo-anidado)" << endl;
	cout << "f.-Algoritmo #6 DO-WHILE (Solucion problema zodiaco)" << endl;
	cout << "g.-Algoritmo #7 WHILE (Solucion problema decimal-binario-octal)" << endl;
	cout << "s.- Volver al Menu Anterior" << endl;
	cin >> opcion;
	system ("cls");
	return opcion;
	
}
