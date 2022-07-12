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

Por defecto genera un fast forward, generando un merge rapido y eficaz, si hay discrepancia entre las ramas que se quieren fusionar, manualmente el editor le dice cuales son las diferencias entre cada rama para que el diseñador decida que se queda y que se va.

verificar que no queden commits inconclusos 
ir a la rama con la que queremos hacer la fusión

git remote

me sirve para elegir el repositorio remoto con el que voy a trabajar en este proyecto.

git remote add le pones origin y pegas el link q te da github

git remote -v 
me muestra el repositorio y la url a la que esta asignado

git push 

sirve para empujar mi codigo desde el editor hasta el repositorio remoto.
me pide dos parametros principales el nombre de mi remoto (origin) 
y la rama que quiero subir

git pull

me sirve para descargar el contenido nuevo que hay en el repositorio, muy importante a la hora de trabajar en equipo.
ademas hay que especificar que rama porque si hubo cambios sobre esa rama vsc va a buscar fusionarlas mergearlas automáticamente.



git log --oneline --graph --all

muestra con diferentes colores los cambios realizados por multiples usuarios, vinculando al usuario con un hash y diversos colores que muestran la relación que hay entre cada linea de codigo.
cada * es un commit y las descripciones que se les agregan. Al final todas se juntan.
facil acceso visual a la informacion de las modificaciones realizadas sobre el proyecto

git stash

permite guardar de forma temporal un cambio realizado en nuestro proyecto sin la necesidad de utilizar commit.
Evitar commits de codigos intermedios sin terminar 

una vez que me muevo a una rama de prueba que no interfiera con la main, uso

git stash pop

me copia eso que stashie en la rama elegida


git checkout <hash>

puedo hacer una copia desde git log oneline utilizando el hash que nos brinda ahí

git checkout y un codigo 

para verificar si es que en ese momento funcionaba mi codigo y verificar las diferencias entre el main que no funciona y la que si, la del hash.

git revert

como eliminar un commit
para no mandar moco con la gente que estoy trabajjando gg
git revert agrega los cambios que sacamos en el commit  no elimina el commit, solo recupera los cambios,es decir, no borra el historial

git reset

hace lo mismo que revert pero necesita del hash

git reset --hard hash

pero de ahi no muestra el historialllll ;)
tener cuidado al hacerlo sobre repositorios centrales.


git commit --ammend

agrega cambios a los commits que todavia no se realizaron, tanto eliminados como agregados
para consolidarlo en uno solo para no tener commits innecesarios
agrega datos eliminados al ultimo commit que todavia no se ejecutó

git rebase

git rebase y el nombre de la otra rama 
colocar commits sin la necesidad que aparezcan las ramas adicionales, se genera un arbol lineal.

hace una especie de merge pero a todos los commits que tenemos en una rama los pone en otra, porque cuando se ve el arbol de trabajo correspondiente al proyecto, muestra todos los merges al mismo nivel en vez de hacer relaciones y rayas.

