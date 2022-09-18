#!/usr/bin/python3


find_prime_factors = __import__('find_factors').find_prime_factors
import sys

#This program factors a number into two different numbers
if __name__ == "__main__":
    #initialize the file from the command line to a variable
    file  = sys.argv[1]
    num = "" #num will hold a line read from file.
    factors = [] #factors will hold a list of factors
    f = open(file, 'r', encoding = 'ascii')

    num = 1
    while (num != ""):
        try:
            #read each line of number from f and convert it to an int.
            num = f.readline()
            num =  num[:len(num)-1]
            num = int(num)

            #find the factors of num and return them to factors
            factors = find_prime_factors(num)
        except ValueError:
            break

        #print the factors
        print("{:d}={:d}*{:d}".format(num, factors[1], factors[0])) 

    f.close()
