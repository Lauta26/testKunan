# testKunan
repositorio práctica autoevaluación kunan
#https://www.mclibre.org/consultar/informatica/lecciones/vsc-git-repositorio.html De acá saqué la data para armar el repositorio

<!-- #git is the program to manage the source code
#github hosts a copy of that code and a repository (a central location in which data is stored and managed) online -->
<!-- 
 VSC makes the process of using Git and github easy. -->

 
Git add

Permite pasar los archivos a una etapa de staging o de preparación para hacer un comit o crear una nueva versión de nuestro código.

git add. 

es otra forma de agregar un archivo pero, ahora los puedo agregar dandole la dirección donde están ubicados esos archivos, siempre y cuando la ubicación esté en el repositorio.

en realidad si mandas git add. agrega todos los archivos que no estaban siendo trackeados.


git add patch

me sirve para agregar una dirección o ruta, por pedazos para no crear un conflicto de commits a la hora de trabajar en equipo.
git add nombrearchivo.formato --patch

me abre un display
que marca las stages o etapas del código

image.png


git status

nos dice en que rama estas, despues marca el commit, es decir lo que se va a hacer, en este caso es agregar el new file 

git commit
 

confirmar una nueva versión del código que está en espera, los que se veían con git status, ahora los vamos a realizar o a cometer.

git diff 

sirve para ver las diferencias entre el archivo en el ultimo commit y el archivo ya modificado.

git log 

nos muestra el historial de commits realizados, tambien se puede ver poniendo -- oneline
tira una respuesta más resumida de lo que se realizó

git log --stat

muestra la cantidad de inserciones y eliminaciones en cada commit

git log -p 

muestra los detalles por cada commit ojo con esto porque abre un monton de cosas jaja

git branch

muestra las ramas activas que tiene nuestro proyecto
en verde muestra sobre la que estoy trabajando y si escribo git branch algo, crea una nueva branch con el nombre algo


git checkout

uso checkout para cambiar de rama entre las ya existentes (git checkout rama a la que quiero moverme)

si pongo git checkout -b algo

agrega una branch nueva y nos lleva ahí


git merge

es el comando que me vincula y fusiona los cambios realizados entre dos ramas diferentes de un mismo proyecto, no queremos que ninguna ruta o rama esté por delante de otra, es decir que se sincronicen.

verificar que no queden commits inconclusos 
ir a la rama con la que queremos hacer la fusión


