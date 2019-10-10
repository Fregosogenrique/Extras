#include <bits/stdc++.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <cmath>
#include <iomanip>

using namespace std;

/*Realizado por loa alumnos del tercero I xdxd
* Fregoso Gutierrez Enrique de Jesus
* Nuñez Padilla Santiago Fidel Fernando
* Portillo Hagelsiel Fabiola Alejandra
*/
int main(){
	float Opcion,x1,x2,y1,y2,D,D1,x,y,r,g,Lados,P,A,Alturas,Triangulos,h,b,at,xm,ym;
	cout<<"\nBienvenid@ a su programa de calculo de distancias de puntos cartesianos";
	cout<<"\n\nSeleccione el numero de Opcion que necesite";
	cout<<"\n1.-PARA CALCULAR DISTANCIA ENTRE PUNTOS";
	cout<<"\n2.-PARA CALCULAR PERIMETRO DE UN POLIGONO";
	cout<<"\n3.-PARA CALCULAR EL AREA DE UN POLIGONO";
	cout<<"\n4.-PARA MEDIANTE COORDENADAS CALCULAR PUNTO MEDIO";
	cout<<"\n5.-PARA CONVERTIR COORDENADAS CARTESIANAS A POLARES";
	cout<<"\n6.-PARA CONVERTIR COORDENADAS POLARES A CARTESIANAS";
	cout<<"\nCualquier otra tecla para salir del programa";
	cout<<"\n";
	cout<<"\nUsted necesita la opcion #: ";
	cin>>Opcion;
	if(Opcion==1){
		cout<<"\nUSTED ELIGIO LA OPCION No. 1";
		cout<<"\nCALCULAR DISTANCIA ENTRE PUNTOS";
		cout<<"\nAhora siga los pasos conforme se le indiquen, para obtener lo que se desea";
		cout<<"\nTeclee el valor de x1  ";
		cin>>y1;
		cout<<"\nTeclee el valor de x2  ";
		cin>>x1;
		cout<<"\nTeclee el valor de y1  ";
		cin>>y2;
		cout<<"\nTeclee el valor de y2  ";
		cin>>x2;
		D= sqrt((x1 - y1)*(x1 - y1 ) + (x2 - y2)*(x2 - y2));
		cout<<"\nD= "<<setw(10) <<D<<endl;
		cout<<"\nGracias por utilizar el programa de calculo de sus alumnos favoritos de 3°I";
	}
	if(Opcion==2){
		cout<<"\nUSTED ELIGIO LA OPCION No. 2";
		cout<<"\nCALCULAR PERIMETRO DE UN POLIGONO";
		cout<<"\nAhora siga los pasos conforme se le indiquen, para obtener lo que se desea";
		cout<<"\nTeclee el numero de lados con los que cuenta el poligono que quiere resolver";
		cin>>Lados;
		for(int i=1;i<=Lados;i++)
		{
		cout<<"\n"<<"\nPara calcular la D"<<i<<" : ";
		cout<<"\nTeclee el valor de x1  ";
		cin>>y1;
		cout<<"\nTeclee el valor de x2  ";
		cin>>x1;
		cout<<"\nTeclee el valor de y1  ";
		cin>>y2;
		cout<<"\nTeclee el valor de y2  ";
		cin>>x2;
		D= sqrt((x1 - y1)*(x1 - y1 ) + (x2 - y2)*(x2 - y2));
		cout<<"\nD= "<<setw(10) <<D<<endl;
		P=P+D;
		}
		cout<<"\nPerimetro= "<<setw(10)<<P;
		cout<<"\nGracias por utilizar el programa de calculo de sus alumnos favoritos de 3°I";
	}
	if(Opcion==3){
		cout<<"\nUSTED ELIGIO LA OPCION No. 3";
		cout<<"\nCALCULAR AREA DE UN POLIGONO";
		cout<<"\nSe calcula mediante la formula de HERON";
		cout<<"\n¿Cuantas alturas busca? ";
		cin>>Alturas;
		for(int i=1;i<=Alturas;i++)
		{
		cout<<"\nPrimero calcularemos la altura del que tendran los triangulos ";
		cout<<"\nIntroduzca los datos para obtener la distancia entre puntos que crean la altura ";
		cout<<"\nTeclee el valor de x1  ";
		cin>>y1;
		cout<<"\nTeclee el valor de x2  ";
		cin>>x1;
		cout<<"\nTeclee el valor de y1  ";
		cin>>y2;
		cout<<"\nTeclee el valor de y2  ";
		cin>>x2;
		h= sqrt((x1 - y1)*(x1 - y1 ) + (x2 - y2)*(x2 - y2));
		cout<<"\nEl altura del los triangulos es = "<<setw(10) <<h<<endl;
		}
		cout<<"\n¿Cuantos triangulos se pueden formar? ";
		cin>>Triangulos;
		for(int i=1;i<=Triangulos;i++)
		{
		cout<<"\nPara obtener el area deseada por favor introduzca lo que se le pide";
		cout<<"\n";
		cout<<"\nPrimero calcularemos la base del triangulo "<<i<<endl;
		cout<<"\nTeclee el valor de x1  ";
		cin>>y1;
		cout<<"\nTeclee el valor de x2  ";
		cin>>x1;
		cout<<"\nTeclee el valor de y1  ";
		cin>>y2;
		cout<<"\nTeclee el valor de y2  ";
		cin>>x2;
		b= sqrt((x1 - y1)*(x1 - y1 ) + (x2 - y2)*(x2 - y2));
		cout<<"\nLa base del triangulo "<<i<< "es = "<<setw(10) <<b<<endl;
		at=(b*h)/2;
		cout<<"\nEl area del triangulo "<<i<<" es: "<<at<<endl;
		A=A+at;
		}
		cout<<"\nel area total del poligono es: "<<A<<endl;
		cout<<"Gracias por utilizar el programa de calculo de sus alumnos favoritos de 3°I";
	}
	if(Opcion==4){
		cout<<"\nUSTED ELIGIO LA OPCION No. 4";
		cout<<"\nCALCULAR PUNTO MEDIO";
		cout<<"\nIntroduzca los datos de las coordenadas de las que busca obtener el punto medio";
		cout<<"\nTeclee el valor de x1  ";
		cin>>x1;
		cout<<"\nTeclee el valor de x2  ";
		cin>>x2;
		cout<<"\nTeclee el valor de y1  ";
		cin>>y1;
		cout<<"\nTeclee el valor de y2  ";
		cin>>y2;
		xm=(x1+x2)/2;
		ym=(y1+x1)/2;
		cout<<"\n";
		cout<<"El punto medio es:"<<xm<<","<<ym<<endl;
		cout<<"Gracias por utilizar el programa de calculo de sus alumnos favoritos de 3°I";
	}
	if(Opcion==5){
		cout<<"\nUSTED ELIGIO LA OPCION No. 5";
		cout<<"\nTeclee las coordenadas cartesianas";
		cout<<"\nX: ";
		cin>>x;
		cout<<"\nY: ";
		cin>>y;
		r= sqrt(pow(x,2)+ pow(y,2));
		g= atan(y/x)*180/3.1416;
		
		cout<<"\nLas coordenadas polares son:"<<r<<", "<<g<<endl;
		cout<<"\n";
		cout<<"Gracias por utilizar el programa de calculo de sus alumnos favoritos de 3°I";
	}
	if(Opcion==6){
		cout<<"\nUSTED ELIGIO LA OPCION No. 6";
		cout<<"\nCONVERTIR COORDENADAS POLARES A CARTESIANAS";
		cout<<"\nTeclee las coordenadas polares";
		cout<<"\nr: ";
		cin>>r;
		cout<<"\nGrados: ";
		cin>>g;
		x=r*cos(g * 3.1416/180);
		y=r*sin(g * 3.1416/180);
		cout<<"\nLa coordenada "<<r<<","<<g<<" convertida a coordenadas cartesianas es: "<<x<<","<<y<<endl;
		cout<<"\nGracias por utilizar el programa de calculo de sus alumnos favoritos de 3°I";
	}
	else{
		cout<<"\nUSTED NO SELECCIONO NINGUNA OPCION VALIDA";
		cout<<"\nGracias por utilizar el programa de calculo de sus alumnos favoritos de 3°I";
	}
	return 0;
		cout<<"\n\n";
system("pause");
	}

