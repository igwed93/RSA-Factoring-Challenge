#!/usr/bin/python3
def FindFactors(n):
    try:
        #declare variables
        p = 0
        q = 0
        i = 0
        factors = []

        for i in range(2, n):
            if (n % i) == 0:
                p = i
                q = int(n / i)
                break
        factors.append(p)
        factors.append(q)
    except Exception as e:
        print("{:s}: an error occurred".format(e))
    finally:
        return (factors)

def find_prime_factors(n):
    try:
        #declare variables
        p = 0
        q = 0
        i = 0
        factors = []

        for i in range(2, n):
            if ((n % i == 0) and i % 2 == 0 or i % 3 == 0 and i > 7):
                continue
            elif (n % i) == 0:
                p = i
                q = int(n / i)
                break
        factors.append(p)
        factors.append(q)
    except Exception as e:
        print("{:s}: an error occurred".format(e))
    finally:
        return (factors)
