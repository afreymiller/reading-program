
'''
Problem #1: Find all multiples of 3 or 5
less than 1000.
'''

def multiples_of_3_or_5(n):
	return len([x for x in range(n) if x % 3 == 0 or x % 5 == 0])
