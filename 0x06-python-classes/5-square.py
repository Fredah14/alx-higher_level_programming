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

    @property
    def size(self):
        """
        Getter method for the size attribute.
        """
        return self.__size

    @size.setter
    def size(self, value):
        """
        Setter method for the size attribute.
        """
        if not isinstance(value, int):
            raise TypeError("size must be an integer")
        if value < 0:
            raise ValueError("size must be >= 0")
        self.__size = value

    def area(self):
        """
        Calculates and returns the area of the square.
        """
        return self.__size ** 2

    def my_print(self):
        """
        Prints the square using '#', or an empty line if size is 0.
        """
        if self.__size == 0:
            print()
        else:
            for _ in range(self.__size):
                print("#" * self.__size)
