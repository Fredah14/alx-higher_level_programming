#!/usr/bin/python3

if __name__ == "__main__":

    import sys

num_arguments = len(sys.argv) - 1
arguments = sys.argv[1:]

if num_arguments == 0:
    print("Number of argument(s) .")
else:
    print("Number of argument(s):", num_arguments)
    if num_arguments == 1:
        print("Argument:", arguments[0])
    else:
        print("Arguments:", ", ".join(arguments))

    print()

    for i, arg in enumerate(arguments, start=1):
        print("{}: {}".format(i, arg))
