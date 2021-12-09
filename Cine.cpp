# include <stdio.h>
# include <conio.h>
# include <String.h>
# include <fstream>

// Arreglo de objetos, checar si esta reservado el lugar, hacer reservacion, quitar la reservacion.


class Asiento{
  public:
    bool bReservacion;
  public:
      Asiento(){
      bReservacion=false;
    }

    bool checar_reservacion(){
        return bReservacion;
    }

    void manejar_reservacion(bool bR){
        bReservacion=bR;
    }

};

void pedir_asiento(){
  int iFila, iCol;
  printf("Fila   : \n"); scanf("%d",&iFila);
  printf("Columna: \n"); scanf("%d",&iCol);
  getche();
}

void menu(){
  int op=0;
  Asiento sala1[3][3];
	while(op!=4){
    printf("Menu\n\n");
    printf("1) Checar Reservacion\n");
    printf("2) Hacer Reservacion\n");
    printf("3) Quitar Reservacion\n");
    printf("4) TERMINAR\n");
		printf("Indique la opci%cn: ",162);
		scanf("%d",&op);

    switch(op){
      case 1:
        //checar_reservacion();
        int iFila, iCol;
  		printf("Fila   : \n"); scanf("%d",&iFila);
  		printf("Columna: \n"); scanf("%d",&iCol);
        if (sala1[iFila][iCol].checar_reservacion()==true){
          printf("Esta reservada\n");
        }
        else{
          printf("No esta reservada\n");
        }
        break;

      case 2:
        //hacer_reservacion();
        pedir_asiento();
        sala1[iFila][iCol].manejar_reservacion(true);
        break;

      case 3:
        //quitar_reservacion();
        pedir_asiento();
        sala1[iFila][iCol].manejar_reservacion(false);
        break;
    }
  }

}


main(){
  menu();
  getche();
}




