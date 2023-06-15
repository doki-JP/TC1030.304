/*
    Proyecto Situación problema
    Juan Pablo Chávez Leal
    a01705408
    14/06/23
    Este es el main del programa, es quí donde se da la interaccion entre el programa y el usuario, además de el uso de algunos constructores ya predefinidos
    para que el programa ya tenga información. Algo muy importante es que el programa es especialmente sensible a lo que ingrese el usuario.
    Un área de oportunidad o incluso algo que podría mejorar el proyecto sería el uso de archivos para que guarden la información y así 
    sea como una pequeña base de datos, no lo implemente porque no tengo los conocimientos necesarios como para que no se complique demasiado el 
    proyecto.
*/
#include "Video.h"

int main(){
    //Declaración de las variables para la interacción
    string nom,seleccion="y";
    int menu,tempo,capit;
    string gen,id,aux;
    float min,rati;
    //Contador de cuantos Videos fueron creados, se inicializa en 2 porque en 0 se creo una serie y en 1 una película
    int contVid=2;
    //Creación del array de apuntadores - así como adición de los primeros objetos
    Video *ptr[100]; 
    ptr[1] = new Pelicula("End of Evangelion","Accion",90,4,"P01");
    ptr[0]=new Serie("Neon Genesis Evangelion","Accion y Mecha",169,4.25,"S01",1,26);
        //Adicion de capitulos de evangelion
    ((Serie*)ptr[0])->setCap(1,"El ataque del angel",1,3.85);
    ((Serie*)ptr[0])->setCap(2,"Un techo desconocido",1,4);
    ((Serie*)ptr[0])->setCap(3,"El telefono que nunca suena",1,3.85);
    ((Serie*)ptr[0])->setCap(4, "Lluvia, despues de la huida",1,3.8);
    ((Serie*)ptr[0])->setCap(5,"Rei, al otro lado de su corazon",1,3.85);
    ((Serie*)ptr[0])->setCap(6,"La batalla decisiva / Distrito 3 de Nuevo Tokio - Rei II",1,4.15);
    ((Serie*)ptr[0])->setCap(7,"Construido por los hombres",1,3.75);
    ((Serie*)ptr[0])->setCap(8,"Asuka llega a Japon",1,3.9);
    ((Serie*)ptr[0])->setCap(9,"Un instante, una mente al unisono",1,4.05);
    ((Serie*)ptr[0])->setCap(10,"Sumergida en el magma",1,3.7);
    ((Serie*)ptr[0])->setCap(11,"En las tinieblas inmoviles / Mas alla de la oscuridad",1,3.95);
    ((Serie*)ptr[0])->setCap(12,"El valor de un milagro",1,3.95);
    ((Serie*)ptr[0])->setCap(13,"La invasion del angel",1,3.8);
    ((Serie*)ptr[0])->setCap(14,"Seele, el lugar de los espiritus / Tejiendo una historia",1,3.5);
    ((Serie*)ptr[0])->setCap(15,"Mentiras y silencio / Ansia de besos",1,4.05);
    ((Serie*)ptr[0])->setCap(16,"Al borde de la muerte y despues, enfermedad mortal",1,4.4);
    ((Serie*)ptr[0])->setCap(17,"Apto para ser el cuarto elegido",1,3.8);
    ((Serie*)ptr[0])->setCap(18,"Elegir un destino / El juicio de la vida",1,4.45);
    ((Serie*)ptr[0])->setCap(19,"El combate de un muchacho / La lucha de un muchacho",1,4.6);
    ((Serie*)ptr[0])->setCap(20,"El espejo del alma / La forma de la mente",1,4.3);
    ((Serie*)ptr[0])->setCap(21,"El nacimiento de NERV",1,4.3);
    ((Serie*)ptr[0])->setCap(22,"Al menos actua como ser humano",1,4.3);
    ((Serie*)ptr[0])->setCap(23,"Rei III - Lagrimas",1,4.3);
    ((Serie*)ptr[0])->setCap(24,"El ultimo enviado",1,4.3);
    ((Serie*)ptr[0])->setCap(25,"Un mundo que se acaba",1,3.9);
    ((Serie*)ptr[0])->setCap(26,"La bestia que pedia amor a gritos desde el centro del mundo",1,4);

        //Inicio de la interfaz de interacción
    while (seleccion=="y"||seleccion=="Y"){
        cout<<"Seleccione uno de las opciones:\n\t1. Aniadir Pelicula\n\t2. Aniadir Serie\n\t3. Mostrar capitulos de una serie\n\t4. Buscar contenido a base de nombre\n\t5.Mostrar todo el catalogo\n ";
        cin>>menu;
        if (menu==1){
            cout<<"Ingrese el titulo de la pelicula: ";
            //ignore() ignora algunos caracteres o datos, en especial para poder usar getline() que permite guardar o leer cadenas de caracteres con espacios
            cin.ignore();
            getline(cin,nom);
            cout<<"Ingrese el genero principal de la pelicula: ";
            cin>>gen;
            cout<<"Introduzca la duracion en minutos de la obra: ";
            cin>>min;
            cout<<"Introduzca el rating de la obra: ";
            cin>>rati;
            cout<<"Introduzca el ID de la pelicula: ";
            cin>>id;
            //Crea el objeto en contVid, así se pueden mandar a imprimir más facilmente, además de evitar que se sobreescriba la información de los objetos
            ptr[contVid]=new Pelicula(nom,gen,min,rati, id);
            contVid++;
        }
        else if (menu==2){
            cout<<"Ingrese el titulo de la serie: ";
            cin.ignore();
            getline(cin,nom);
            cout<<"Ingrese el genero principal de la obra: ";
            cin>>gen;
            cout<<"Ingrese la duracion en minutos de la serie: ";
            cin>>min;
            cout<<"Ingrese el rating, en escala del 1 al 5, de la obra: ";
            cin >>rati;
            cout<<"Ingrese el ID de la obra: ";
            cin>>id;
            cout<<"Ingrese el numero de temporadas que tiene: ";
            cin>>tempo;
            cout<<"Ingrese el numero de capitulos por temporada: ";
            cin>>capit;
            ptr[contVid]=new Serie(nom,gen,min,rati, id,tempo,capit);
            cout<<"Desea aniadir los capitulos?(y/n): ";
            cin>>aux;
            if (aux=="Y"||aux=="y"){
                    capit=capit*tempo;
                for (int i=0;i<capit;i++){
                    cout<<"Ingrese el titulo del episodio: ";
                    cin.ignore();
                    getline(cin,nom);
                    //cout<<"Ingrese la temporada a la que pertenece: ";
                    //cin>>tempo;
                    cout<<"Ingrese el rating del episodio: ";
                    cin>>rati;
                    ((Serie*)ptr[contVid])->setCap(i+1,nom,tempo,rati);
                    
                }
            contVid++;

            }

            
        }
        else if(menu==3){
            cout<<"Cual es la serie que te interesa?: ";
            cin.ignore();
            getline(cin,nom);
            for (int i=0;i<contVid;i++){
                aux=ptr[i]->getTitulo();
                if (nom==aux){
                    cout<<"Serie encontrada: "<<aux;
                    ((Serie *)ptr[i])->MostrarCapSerie();
                }
            }
            

        }
        else if(menu==4){
            cout<<"Cual es el nombre del video?: ";
            cin.ignore();
            getline(cin,nom);
            for (int i=0;i<contVid;i++){
                ptr[i]->BuscarContenido(nom);
                //Este cout es crucial, el metodo buscarContenido() regresaba tanto el if como el else, sospecho de que está agarrando algo en Serie
                //cuando se aplica en peliculas no sucede
                
            }
            cout<<"Si no se desplego informacion, no hay contenido disponible\n";
        }
        else if(menu==5){
            for (int i=0;i<contVid;i++){
                ptr[i]->MostrarVideos();
            }
        }    
        cout<<"Desea repetir el menu? (y/n) - No importa si utiliza mayusculas o minusculas: ";
        cin>>seleccion;
    }
    delete(ptr);
}
