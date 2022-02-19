//ad-hoc polymorphisme : permet de definie plusiere function ayant le meme nom mais prenont des parametres differant;
//operrator overlad : 

un constructor  copie ona un nouvell instance a cree alor que operator egal on seulement mise a jour d'une instance courant
forme canonique:
constructor par default et constructor a copie et desstructor et operator egale;
tout les classes doivent etre de forme canonique;
l;operator egale s'appel l'opeerator d'assignation

floating point : 



-------------------------
85.125 0:            85 -----> 01010101
0.125   ------> 001
85.125 ----> 1010101.001
              <----
              .
              1.010101001 * 2^6


sign        exponent          mantiss a
1bit        8bits               23bits

float base = 127

6 + 127 = 133

133 = 10000101

0 10000101 01010100100000000000000


101001.1010 = 0.5 + 0.125 = 41.625

float
1 * 2^0 = 1    | 1 * 2^-1 = 1/2^1 = 1 / 2 = 0.5
0 * 2^1 = 2    | 0 * 2^-2 = 1/2^2 = 1 /4
0 * 2^2 = 4    | 1 * 2^-3 = 1 / 8
1 * 2^3 = 8    | 0 * 2^-4 = 1 / 16
0 * 2^4 = 16   | 0 * 2^-5 = 1 / 32
1 * 2^5 = 32







Créez une classe sous forme canonique orthodoxe qui représente un nombre à virgule fixe :
• Membres privés :
◦ Un entier pour stocker la valeur du nombre à virgule fixe.
◦ Un entier constant statique pour stocker le nombre de bits fractionnaires. Sa valeur
sera toujours le littéral entier 8.
• Membres publics :
◦ Un constructeur par défaut qui initialise la valeur du nombre à virgule fixe à 0.
◦ Un constructeur de copie.
◦ Une surcharge d'opérateur d'affectation de copie.
◦ Un destructeur.
◦ Une fonction membre int getRawBits( void ) const;
qui renvoie la valeur brute de la valeur à virgule fixe.
◦ Une fonction membre void setRawBits( int const raw );
qui définit la valeur brute du nombre à virgule fixe.














orthodox canonical class form :

Constructeur par défaut
Copier le constructeur
Destructeur
Copier l'opérateur d'affectation

L'exploitation de nombres à virgule fixe est une tâche courante des systèmes embarqués. 
Nos microcontrôleurs peuvent ne pas prendre en charge la virgule flottante, nos capteurs 
peuvent fournir des données dans des formats à virgule fixe, ou nous pouvons vouloir 
utiliser des mathématiques à virgule fixe pour contrôler la plage et la précision d'une 
valeur.

Il existe de nombreuses bibliothèques mathématiques en virgule fixe sur Internet, 
telles que fixed_point ou la Compositional Numeric Library for C++. Si vous recherchez 
une solution fiable à utiliser à long terme, prenez le temps d'examiner ces bibliothèques 
pour identifier les candidats à l'intégration.

Cependant, nous n'avons pas toujours le temps nécessaire pour sélectionner une bibliothèque. 
Peut-être avez-vous simplement besoin de convertir un nombre à virgule fixe à des fins de 
prototypage, ou vous devez effectuer une implémentation rapide pour la démo de vendredi.

Vous trouverez ci-dessous une approche simple et rapide pour la conversion entre 
les nombres à virgule fixe et les nombres à virgule flottante. Si vous avez besoin 
de gérer des opérations mathématiques sur des nombres à virgule fixe, 
recherchez une bibliothèque à intégrer.


Tout d'abord, nous devons sélectionner notre type de point fixe. Pour cet exemple, 
nous utiliserons des nombres à virgule fixe de 16 bits, au format 11,5 (11 bits entiers, 
5 bits fractionnaires) :








