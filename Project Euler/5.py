
'''
2520 is the smallest number that can be divided by each 
of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly
divisible by all of the numbers from 1 to 20?
'''

import math

def is_prime(n):
	for i in range(2, int(math.ceil(math.sqrt(n))) + 1):
		if n % i == 0 and n != 2:
			return False

	return True

def get_primes_in_range(a, b):
	return [x for x in range(a, b+1) if is_prime(x)]

def curr_divisors_complete(list_divisors, a, b):
	return list_divisors == range(a, b + 1)

def smallest_multiple():
	curr_divisors = []
	primes_range = get_primes_in_range(1, 20)

	prime_multiple = reduce(lambda x, y: x*y, primes_range)
	curr_val = prime_multiple
	upper_limit = reduce(lambda x,y: x*y, range(11, 20))

	while curr_val < upper_limit:
		for i in range(11, 21): 
			if curr_val % i == 0:
				curr_divisors.append(i)
		if curr_divisors_complete(curr_divisors, 11, 20):
			return curr_val
		else: 
			curr_divisors = []
			curr_val += prime_multiple


