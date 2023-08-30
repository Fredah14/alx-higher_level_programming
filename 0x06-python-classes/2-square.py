#!/usr/bin/python3
"""
Module Documentation: Square class
"""


class Square:
    """
    Defines a square class with a private size attribute
    """

    def __init__(self, size=0):
        """
        Initializes a Square instance with a given size.
        """
        self.__size = size

        if not isinstance(size, int):
            raise TypeError("size must be an integer")
        if size < 0:
            raise ValueError("size must be >= 0")
