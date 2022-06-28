# My_printf

My_printf est un projet de début d'année le but est de recoder la fonction de printf se trouvant dans la bibliothèque C selon la norme C99. 
Notre fonction doit être prototypée comme la fonction printf sans l'implémentation de la gestion du tampon printf de la bibliothèque C.

Nous devons traiter tous les drapeaux de formatage printf sauf les suivants (qui sont facultatifs) : 
• gestion des types flottants ou doubles, 
• gestion des drapeaux %n, 
• gestion des drapeaux " * " , " ’ " et " I " (i majuscule). 
Nous devons aussi ajouter un indicateur de formatage %b, qui imprime les nombres non signés dans une base binaire. 
Nous devons également ajouter un indicateur de formatage %S, qui imprime une chaîne de caractères (comme %s). 
Cependant, les caractères non imprimables (valeur ASCII strictement inférieure à 32 ou supérieure ou égale à 127) 
doivent être représentés par un antislash suivi de la valeur du caractère en base octale.


## But du programme

Recoder notre fonction printf que pourrons utiliser dans nos projets qui doit traiter les drapeaux de formatage printf.

## Fonctions autorisées

```

	• Write 
	• Malloc
	• free
	
```

## Mise en route

Ces instructions vous permettront d'obtenir une copie du projet opérationnel sur votre machine locale à des fins de développement et de test.

### Pré-requis

De quoi avez-vous besoin pour installer le logiciel et comment l'installer ?

```

gcc
make

```

### Installation

Compilation du projet

```
make
```

Lancement du projet

```
./my_printf
```






