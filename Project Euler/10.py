
'''
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
'''

import math

def prime_summation_below_n(n):
	summation = 0

	for i in range(n + 1):
		if is_prime(i):
			summation += i

	return summation


def is_prime(n):
	for i in range(2, int(math.ceil(math.sqrt(n))) + 1):
		if n % i == 0 and n != 2:
			return False
			
	return True if n != 1 else False	