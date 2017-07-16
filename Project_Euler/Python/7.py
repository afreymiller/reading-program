'''
By listing the first six prime numbers: 2, 3, 5, 7, 11,
and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
'''

import math

def is_prime(n):
	for i in range(2, int(math.ceil(math.sqrt(n))) + 1):
		if n % i == 0 and n != 2:
			return False

	return True

def ordinal_prime(n):
	num_primes = 0
	curr_value = 1
	primes = []
	while num_primes < n:
		curr_value += 1
		if is_prime(curr_value):
			primes.append(curr_value)
			num_primes += 1

	return curr_value
