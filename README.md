# TC1030.304 - Juan Pablo Chávez Leal - A01705408
Programación orientada a objetos

En este proyecto se solucionará la situación problema ya establecida en el curso, en donde se solucionen los varios inscisos como: Mostrar los videos dentro de una plataforma, es decir, episodios y películas con sus respectivas calificaciones, asimismo implementar el ID de cada video en el catálogo de Netflix, además de otros factores a considerar.
Todo esto con el motivo de desarrollar las competencias pertinentes y así poder aprender de una manera íntegra.

Decidí realizar este proyecto debido a que considero que mi creatividad se limitaría a tomar la ruta más rápida y fácil, asimismo el proyecto que se incluye dentro del curso debe ser suficientemente complejo para poder acreditar tanto la materia como las subcompetencias, es decir que mi desarrollo debería ser óptimo para las próximas materias en el plan de estudios.

# Funcionalidad
El programa es capaz de Mostrar los videos; películas o series con su respectiva calificación, así como su ID de video.
Debe tener algún tipo de menú para poder escoger entre las diferentes opciones en las que se puede utilizar el código.

Tomando como apoyo el UML; la clase video, siendo la general y abstracta, hereda sus métodos hacia las clases 'Serie' y 'Pelicula', siendo clases más específicas. Al mismo tiempo, la clase Episodio tiene una relación de composición con la clase Serie, sin serie no existen capítulos, y al haber una relación de composición los métodos de 'Capitulos' son accesibles para Serie. Para finalizar, gracias a la primera herencia podemos definir un significado diferente dependiendo de la clase, esto siendo uno de los beneficios del polimorfismo dentro del programa.

# Consideraciones
El programa está hecho en c++ y debería correr en todos los sistemas operativos. Los siguientes comandos están orientados a Windows 11:
Compilar con "g++ 'nombre_del_archivo.cpp' -o 'nombre_del_archov_sin_terminación'"
Ejecutar con: "nombre_del_archivo.exe" o bien con ".\nombre_del_archivo_sin_terminación"
Al ejecutar, probablemente salga algún aviso, favor de ignorarlo.

Una consideración importante es que el programa es muy sensible a la entrada del usuario, entonces los siguientes menús o métodos son vulnerables y quizás pueda romper el código:
- El input del genero de todo video: solo utilizar una palabra, esta siendo el género principal.
- El menú principal numeros enteros(lo primero en mostrarse): evitar una de las opciones (número) se saltara toda opción y recurrirá a volver a empezar el menú.
- El menú principal: SI SE INGRESA UN CARACTÉR ALFANUMÉRICO, SE REPETIRÁ INFINITAMENTE EL MENÚ PRINCIPAL, FAVOR DE APEGARSE A LAS OPCIONES DISPONIBLES.
- En toda opción que se pida un número, favor de ingresar el digito y no la expresión, el código hará cosas extrañas de no ser así
- Los titulos de videos sí aceptan varias palabras.
- Al terminar, el menú principal enseña un aviso acerca de la ejecución, se pueden utilizar mayúsculas o minúsculas, si se inserta otro valor se tomará como negativo y el código no se repetirá
- Se reemplazó la "Ñ" por "ni", por ejemlo, año=anio, añade=aniade y niño=ninio. Favor de usar este reemplazo al insertar las opciones, no generá ningún tipo de error, pero puede distorsionar algunos caracteres.
- Si se busca una serie a la que no se le añadió capitulos, se leerá "Los capitulos de la serie son: ", significa que no tiene ningún capitulo registrado.
- 
- 
