#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;


struct alumno{
       int matricula;
       char nombre[30];
       int edad;
       }alumno2;

int main(){
    
    /*system ("cls");
    FILE *archdisco;
    archdisco = fopen("Alumnos2.txt","w");
    fclose(archdisco);
    printf("ARCHIVO CREADO");
    cout<<endl;*/
    
    int op;
    
    do{
    do{
      cout<<"Ingrese la opcion: ";
      cin>>op;
    } while ((op<0) || (op>3));

    switch (op){
           case 1: system ("cls");
                   //captura de campos.
                   cout<<"Digite matricula: "; cin>>alumno2.matricula;
                   fflush(stdin);
                   cout<<"Digite nombre: "; cin.getline(alumno2.nombre,30,'\n');
                   fflush(stdin);
                   cout<<"Digite edad: "; cin>>alumno2.edad;
    
                   FILE *archdisco;
                   archdisco = fopen("Alumnos2.txt","at+");
                   fwrite(&alumno2,sizeof(alumno2),1,archdisco);
                   fclose(archdisco);
    
                   cout<<"Alumno insertado";
                   break;
                   
                   
           case 2: 
		           system ("cls");
                   
                   archdisco = fopen("Alumnos2.txt","at+");
    
                   while (fread(&alumno2,sizeof(alumno2),1,archdisco)==1){
                         cout<<"Matricula: "<<alumno2.matricula<<endl;
                         fflush(stdin);
                         cout<<"Nombre: "<<alumno2.nombre<<endl;
                         fflush(stdin);
                         cout<<"Edad: "<<alumno2.edad<<endl;
                         cout<<endl;
                   }
    
                   fclose(archdisco);
                   break;
                   
                   
         case 3: system("cls");
            printf("dame matricula buscar:  ");
           int clave;
           scanf("%d", &clave);
           getchar();
           
           archdisco = fopen("Alumnos2.txt","at+");
           
           while(fread(&alumno2,sizeof(alumno2),1,archdisco)==1){
                 if(clave == alumno2.matricula){
                             cout<<"Matricula: "<<alumno2.matricula<<endl;
                             fflush(stdin);
                             cout<<"Nombre: "<<alumno2.nombre<<endl;
                             fflush(stdin);
                             cout<<"Edad: "<<alumno2.edad<<endl;
                             cout<<endl;
                 }
                 
           }
           fclose(archdisco);
           break;
           
           
           }
       } while (op!=0);



           system("pause");
}

