#!/usr/bin/python3
"""Definir le locked class."""


class LockedClass:
    """
    Empêchez l'utilisateur d'instancier de nouveaux attributs pour LockedClass
    pour tout autre attribut que ceux appelés 'first_name'.
    """

    __slots__ = ["first_name"]
