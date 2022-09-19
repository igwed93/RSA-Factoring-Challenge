#!/usr/bin/python3
def FindFactors(n):
    try:
        #declare variables
        i = 0
        factors = []

        for i in range(2, n):
            if (n % i) == 0:
                factors.append(i)
                factors.append(int(n / i))
                break
    except Exception as e:
        print("{:s}: an error occurred".format(e))
    finally:
        return (factors)

def find_prime_factors(n):
    try:
        #declare variables
        i = 0
        factors = []

        for i in range(3, n, 2):
            if ((n % i == 0) and i % 2 == 0 or i % 3 == 0 and i > 7):
                continue
            elif (n % i) == 0:
                factors.append(i)
                factors.append(int(n / i))
                break
    except Exception as e:
        print("{:s}: an error occurred".format(e))
    finally:
        return (factors)
