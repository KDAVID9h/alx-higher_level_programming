#!/usr/bin/python3
"""Définit une fonction de division de matrices."""

def matrix_divided(matrix, div):
    """Divise tous les éléments d'une matrice.

    Args:
        matrix (list): Une liste de listes d'entiers ou de flottants.
        div (int/float): Le diviseur.
    Raises:
        TypeError: Si la matrice contient des non-nombres.
        TypeError: Si la matrice contient des lignes de tailles différentes.
        TypeError: Si div n'est pas un entier ou un flottant.
        ZeroDivisionError: Si div est égal à 0.
    Returns:
        Une nouvelle matrice représentant le résultat de la division.
    """
    if (not isinstance(matrix, list) or matrix == [] or
            not all(isinstance(row, list) for row in matrix) or
            not all((isinstance(ele, int) or isinstance(ele, float))
                    for ele in [num for row in matrix for num in row])):
        raise TypeError("matrix doit être une matrice (liste de listes) "
                        "d'entiers/flottants")

    if not all(len(row) == len(matrix[0]) for row in matrix):
        raise TypeError("Chaque ligne de la matrice doit avoir la même taille")

    if not isinstance(div, int) and not isinstance(div, float):
        raise TypeError("div doit être un nombre")

    if div == 0:
        raise ZeroDivisionError("division par zéro")

    return ([list(map(lambda x: round(x / div, 2), row)) for row in matrix])
