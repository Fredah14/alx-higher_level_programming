#!/usr/bin/python3

def uppercase(str):
    for char in str:
        ascii_value = ord(char)
        if ord('a') <= ascii_value <= ord('z'):
            uppercase_ascii = ascii_value - 32
            print(chr(uppercase_ascii), end='')
        else:
            print(char, end='')
    print()
