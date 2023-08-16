#!/usr/bin/python3

def uppercase(str):
    for char in str:
        if ord('a') <= ord(char) <= ord('z'):
            diff = ord('a') - ord('A')
            print(chr(ord(char) - diff), end='')
        else:
            print(char, end='')
    print()
