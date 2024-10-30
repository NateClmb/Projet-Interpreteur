# Nathan COLOMBAN - INM-1

# Projet INF404 - Calculatrice et Interpréteur Basique
# Une calculatrice qui peut effectuer des calculs, des affectations et des instructions conditionnelles "if-then-else"

# Ce fichier contient les indications pour compiler et exécuter le code ainsi qu'un court manuel utilisateur pour décrire la langage attendu par le programme.

# Mode d'emploi:
$ make
$ ./test_lexeme 'chemin_du_fichier_test_lexeme'.txt
$ ./calculette 'chemin_du_fichier_test'.txt

Le chemin du fichier test est de la forme Tests/test_lex_ok.txt ou encore Tests/test_correct_2.txt

# Description de la structure du répertoire
├── README.txt                       // Aide
├── calculette                       // calculatrice
│   ├── calculette                   // main
│   |   ├── analyse_syntaxique       // analyse_de_la_syntaxe
|   |   |   ├──analyse_syntaxique.c
│   |   |   ├── ast_construction     // Creation_de_ast
|   |   |   |   ├──ast_construction.c 
|   |   |   |   ├──ast_construction.h
|   |   |   |   └──type_ast.h
│   |   |   ├── ast_parcours         // Calcul_dans_ast
|   |   |   |   ├──ast_parcours.c 
|   |   |   |   ├──ast_parcours.h 
|   |   |   |   └──type_ast.h
│   └── └── analyse_lexicale         // analyse_du_lexique
|           ├──analyse_lexicale.c
|           ├──analyse_lexicale.h 
│           └── lecture_caracteres   // Lecture_des_caracteres
|               ├── lecture_caracteres.h 
|               └── lecture_caracteres.c
├── test_lexeme                      // test_analyse_syntaxique
|   ├──analyse_lexicale
|   ├──lecture_caracteres
|   └──test_lexeme.c
|
└── test_lex.txt / test*.txt         // fichiers_test


Le langage reconnu doit être composé d'affectation d'une valeur à un identificateur, il peut y en avoir plusieurs, sur lesquels on fait des calculs.
Chaque opération doit être terminée par un point virgule.
Il est aussi possible d'effectuer certaines comparaison dans un 'if then else', les comparaisons reconnues sont '<', '>' et '~'.
On ne peut pas effectuer d'opérations dans le 'if', par exemple :
" if x*2 < 4 " fera uniquement la comparaison 'x<4' et ne calculera pas 'x*2' avant de faire la comparaison.
La calculatrice ne pourra pas évaluer une expression avec uniquement des nombres sans les avoir effecter à une variable au préalable.
Les sauts de lignes et les indentations n'ont pas vraiment d'importance pour le programme, tant que chaque opération est bien séparée d'une autre par un point virgule
le programme s'exécutera sans erreur.

Par exemple :
x=5;y=2;

a=x/y;
b=a+1;
if a < b then
a = a+b;
else
a=a-1;