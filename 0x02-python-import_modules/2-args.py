#!/usr/bin/python3

if __name__ == "__main__":

    import sys

    i = len(sys.argv) - 1
    arguments = sys.argv[1:]

    if i == 0:
        print("0 arguments.")
    
    else:
        print("Number of argument(s):", i)

    if i == 1:
        print("Argument:", arguments[0])

    else:
        print("1 argument:", ", ".join(arguments))

        print()
        
        for i, arg in enumerate(arguments, start=1):
            print("{}: {}".format(i, arg))
