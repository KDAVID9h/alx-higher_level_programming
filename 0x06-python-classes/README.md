# 0x06. Python - Classes and Objects

Ce repectoir contient des fichiers Python implémentant une classe `Square` qui représente un carré. Chaque fichier correspond à une tâche spécifique et implémente des fonctionnalités supplémentaires pour la classe `Square`. Le but principal est de comprendre et d'appliquer les concepts de base de la programmation orientée objet en Python.

## Fichiers inclus

1. **0-square.py**
   - Définit une classe `Square` vide.

2. **1-square.py**
   - Définit une classe `Square` avec un attribut privé `size`.
   - Instantiation avec `size` (pas de vérification de type ou de valeur).

3. **2-square.py**
   - Ajoute une validation de type et de valeur à l'attribut `size`.
   - Lève des exceptions `TypeError` et `ValueError` en cas de violation des règles.

4. **3-square.py**
   - Ajoute une méthode publique `area` pour calculer la surface du carré.

5. **4-square.py**
   - Ajoute des accesseurs (`getter` et `setter`) pour l'attribut `size`.
   - Les accesseurs incluent une validation de type et de valeur.

6. **5-square.py**
   - Ajoute une méthode publique `my_print` pour afficher le carré avec le caractère `#`.
   - Gère le cas où `size` est égal à 0.

7. **6-square.py**
   - Ajoute un attribut privé `position` représentant la position du carré.
   - Ajoute des accesseurs et des validateurs pour l'attribut `position`.
   - La méthode `my_print` prend en compte la position lors de l'affichage.

## Comment exécuter les exemples

Chaque fichier a son propre script d'exemple associé qui démontre l'utilisation de la classe `Square` selon les spécifications de la tâche correspondante.

```bash
# Exemple pour la tâche 1
./1-main.py
```

## Auteur

Réalisé par HKDE
