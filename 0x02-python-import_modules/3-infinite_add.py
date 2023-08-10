#!/usr/bin/python3

if __name__ == "__main__":

    import sys

    result = 0
    arguments = sys.argv[1:]
    sum_result = sum(int(arg) for arg in arguments)
    print(sum_result)
