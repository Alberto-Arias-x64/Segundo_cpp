	#include <iostream>
	#include <stdio.h>
	using namespace std;
	
	int main ()
	{
									/*FILA 1 SON INTERSECCIONES*/
										// 1 = Inter. Izquierda - Derecha
										// 2 = Inter. Izquierda - Centro
										// 3 = Inter. Centro - Derecha
										// 4 = Inter. Cruz
										// 5 = Giro 180°
									/*FILA 2 SON DESICIONES*/
									  	//1= IZQ - 2 = CENT - 3 = DER
									/*FILA 3 SON MARCAS DE EXPLORACION*/
										//0 = NO HA EXPLORADO
										//1 = PRIMERA OPCION
										//2 = SEGUNDA OPCION
										//3 = TERCERA OPCION
		int MEMORIA[3][25];
		int INTER=0,DIR=0;
		int i=0, BANDERA=0;
	
	/*----BORRAR LOS ARREGLOS--------------------------------------------------------------*/
	
		for (int a=0;a<=2;a++)
		{
			for (int b=0;b<=24;b++)
			{
				MEMORIA[a][b] = 0;
			}
			int b = 0;
		}
		
	/*----CICLO DE MEMORIA--------------------------------------------------------------*/
		
		while (i<24 && i>=0)
		{
				cin>>INTER;
				/*----ALMACENAR EN MEMORIA INTERSECCIONES Y DESICIONES--------------------------------------------------------------*/
				if (INTER != 5 && BANDERA == 0) /*----DATO DIFERENTE A 5 (VOLVER) --------------------------*/
				{
					if (INTER == 1) /*-------------INTERSECCION IZQUIERDA DERECHA ---------------------*/
					{
						DIR = 1;
					}
					if (INTER == 2) /*-------------INTERSECCION IZQUIERDA CENTRO ---------------------*/
					{
						DIR = 1;
					}
					if (INTER == 3) /*-------------INTERSECCION CENTRO DERECHA ---------------------*/
					{
						DIR = 2;
					}
					if (INTER == 4) /*-------------INTERSECCION CRUZ ---------------------*/
					{
						DIR = 1;
					}
					MEMORIA[0][i]=INTER;
					MEMORIA[1][i]=DIR;
					MEMORIA[2][i]++;
					i++;
				}else /*----DETECTA GIRO DE 180° Y CORRIGE LAS DESICIONES POR INTERSECCION---------------------------------------------*/
					{
						if (BANDERA == 0 || BANDERA == 1){
							i--;
						}
						if (BANDERA == 1){
							BANDERA = 2;
						}
						if (BANDERA == 3) /*----BORRA INTERSECCION Y DESICION SI YA EXPLORO LAS 2 OPCIONES------*/
						{					     					  /*-------------Y NO ES INTERSECCION EN CRUZ---------------------------*/	
							MEMORIA[0][i]=0;
							MEMORIA[1][i]=0;
							MEMORIA[2][i]=0;
							i--;
							if (MEMORIA[2][i] == 2){
								BANDERA = 3;
							}else{
								BANDERA = 1;
							}
							if (MEMORIA[0][i] == 1)
							{
								if (MEMORIA[2][i] == 1)
								{
									MEMORIA[1][i] = 3;
									MEMORIA[2][i]++;
									i++;
								}
							}else
								{
									if (MEMORIA[0][i] == 2)
									{
										if (MEMORIA[2][i] == 1)
										{
											MEMORIA[1][i] = 2;
											MEMORIA[2][i]++;
											i++;
										}
									}else
										{
											if (MEMORIA[0][i] == 3)
											{
												if (MEMORIA[2][i] == 1)
												{
													MEMORIA[1][i] = 3;
													MEMORIA[2][i]++;
													i++;
												}
											}
										}
								}
						}
						if (BANDERA == 0 && MEMORIA[2][i] == 2){
							BANDERA = 3;
						}
						if (MEMORIA[0][i] == 4)/*----DETECTA GIRO DE 180° Y CORRIGE LAS DESICIONES POR INTERSECCION EN CRUZ------*/
						{
							if (MEMORIA[2][i] == 1)
							{
								MEMORIA[1][i] = 2;
								MEMORIA[2][i]++;
								i++;
							}else
								{
									if (MEMORIA[2][i] == 2)
									{   
							         	MEMORIA[1][i] = 3;
										MEMORIA[2][i]++;
										i++;
									}else
										{
											if (MEMORIA[2][i] == 3)/*----BORRA INTERSECCION Y DESICION SI YA EXPLORO LAS 3 OPCIONES------*/
											{   
						         				MEMORIA[0][i]=0;
												MEMORIA[1][i]=0;
												MEMORIA[2][i]=0;
												cin>>INTER;
												i--;
											}
										}
							
								}
						}	
						if (MEMORIA[0][i] == 1 && BANDERA == 0)
						{
							if (MEMORIA[2][i] == 1)
							{
								MEMORIA[1][i] = 3;
								MEMORIA[2][i]++;
								BANDERA=1;
								i++;
							}
						}else
							{
								if (MEMORIA[0][i] == 2 && BANDERA == 0)
								{
									if (MEMORIA[2][i] == 1)
									{
										MEMORIA[1][i] = 2;
										MEMORIA[2][i]++;
										BANDERA=1;
										i++;
									}
								}else
									{
										if (MEMORIA[0][i] == 3 && BANDERA == 0)
										{
											if (MEMORIA[2][i] == 1)
											{
												MEMORIA[1][i] = 3;
												MEMORIA[2][i]++;
												BANDERA=1;
												i++;
											}
										}
									}
							}
					if (BANDERA == 2){
						BANDERA = 0;
						i++;	
					}
				}
		/*----IMPRIMIR MEMORIA--------------------------------------------------------------*/
			if (BANDERA == 0){
			cout<<"P A M B D "<<endl;
			for(int MARCADOR=0;MARCADOR<25;MARCADOR++)
			{
				string INT,DEC;
				if(MEMORIA[0][MARCADOR]==1){INT = "IZQ-DER";}
				if(MEMORIA[0][MARCADOR]==2){INT = "IZQ-CEN";}
				if(MEMORIA[0][MARCADOR]==3){INT = "CEN-DER";}
				if(MEMORIA[0][MARCADOR]==4){INT = "CRUZ";}
				if(MEMORIA[1][MARCADOR]==1){DEC = "IZQ";}
				if(MEMORIA[1][MARCADOR]==2){DEC = "CEN";}
				if(MEMORIA[1][MARCADOR]==3){DEC = "DER";}
				if(MEMORIA[0][MARCADOR]!=0){
					cout<<MARCADOR<<" "<<i<<" "<<MEMORIA[2][MARCADOR]<<" "<<BANDERA<<" "<<INT<<" tomo el camino "<<DEC<<endl;
				}else{
					cout<<MARCADOR<<endl;
				}
			}
		}
		}
	}
