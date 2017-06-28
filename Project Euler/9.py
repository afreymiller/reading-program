
'''
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2

For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
'''

import math
from itertools import permutations

def is_triple(a, b, c):
	a_hyp = (a**2 == (b**2 + c**2))
	b_hyp = (b**2 == (a**2 + c**2))
	c_hyp = (c**2 == (a**2 + b**2))
	return True if a_hyp or b_hyp or c_hyp else False

def pythagorean_triplet(n):
	
	n_range = range(1, n)

	for a in n_range:
		for b in range(a, n - a):
			for c in range(b, n - b):
				#print(a, b, c)
				if (a + b + c == 1000):

					#print(a, b, c)
					if is_triple(a, b, c):
						print (a, b, c)

