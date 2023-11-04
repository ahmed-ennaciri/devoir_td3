A)
e problème réside dans les valeurs que nous utilisons pour initialiser les coordonnées (60 et 65). Comme nous utilisons le type char, la valeur maximale que nous pouvons stocker est 127. Donc, lorsque nous tentons d'initialiser les coordonnées avec les valeurs 60 et 65, une débordement se produit, ce qui provoque un comportement indéterminé.
B)
Il faut simplement utiliser un type plus grand pour représenter les coordonnées, comme le type int. Voici comment la classe point pourrait être définie avec ce type :

template <class T> class point { T x, y ; // coordonnees public : point (T abs, T ord) { x = abs ; y = ord ; } void affiche () ; } ; template <class T> void point<T>::affiche () { cout << "Coordonnees : " << x << " " << y << "\n" ; }