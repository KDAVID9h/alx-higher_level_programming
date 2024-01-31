#!/usr/bin/python3
"""Définit une fonction d'addition pour les entiers."""


def add_integer(a, b=98):
    """Retourne l'addition entière de a et b.

    Les arguments de type float sont convertis en entiers avant l'addition.

    Raises:
        TypeError: Si a ou b n'est ni un entier ni un flottant.
    """
    if not isinstance(a, (int, float)):
        raise TypeError("a doit être un entier")
    if not isinstance(b, (int, float)):
        raise TypeError("b doit être un entier")
    return int(a) + int(b)
