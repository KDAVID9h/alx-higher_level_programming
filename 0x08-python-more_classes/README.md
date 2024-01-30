# Projet de la classe Rectangle

Ce projet définit une classe Rectangle simple en Python. La classe inclut diverses fonctionnalités telles que des attributs d'instance, des méthodes pour calculer la surface et le périmètre, la représentation sous forme de chaîne de caractères, la suppression d'instance, et bien plus encore.

## Modules

### Module 0 : rectangle

Définit une classe Rectangle vide.

### Module 1 : rectangle

Définit une classe Rectangle avec des attributs d'instance privés, largeur et hauteur.

### Module 2 : rectangle

Étend le Module 1 pour inclure des méthodes d'instance publiques pour calculer la surface et le périmètre.

### Module 3 : rectangle

Étend le Module 2 pour inclure une méthode de représentation sous forme de chaîne de caractères (__str__).

### Module 4 : rectangle

Étend le Module 3 pour inclure une méthode __repr__ pour une représentation sous forme de chaîne de caractères formelle.

### Module 5 : rectangle

Étend le Module 4 pour inclure une méthode de suppression d'instance (__del__).

### Module 6 : rectangle

Étend le Module 5 pour inclure un attribut de classe number_of_instances.

### Module 7 : rectangle

Étend le Module 6 pour inclure un attribut de classe print_symbol pour personnaliser la représentation sous forme de chaîne de caractères.

### Module 8 : rectangle

Étend le Module 7 pour inclure une méthode statique `bigger_or_equal` pour comparer deux rectangles.

## Utilisation

Exemple d'utilisation de la classe Rectangle :

```python
from rectangle import Rectangle

# Créer un rectangle
rect = Rectangle(5, 10)

# Obtenir la surface et le périmètre
surface = rect.surface()
périmètre = rect.périmètre()

# Afficher la représentation sous forme de chaîne de caractères
print(rect)

# Comparer deux rectangles
rect1 = Rectangle(3, 5)
rect2 = Rectangle(4, 4)
résultat = Rectangle.bigger_or_equal(rect1, rect2)
print(résultat)
```
