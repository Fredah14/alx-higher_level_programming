#!/usr/bin/python3

def print_reversed_list_integer(my_list=[]):
    length = len(my_list)
    for i in range(length - 1, -1, -1):
        print("{}".format(my_list[i]))

        
if __name__ == "__main__":
    my_list = [1, 2, 3, 4, 5]
    print_reversed_list_integer(my_list)
