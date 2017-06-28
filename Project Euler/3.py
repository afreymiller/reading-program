
'''
Problem: Given an integer, find
it's largest prime factor
'''

def get_largest_prime_factor(n):
	curr_divisor = 2
	largest_prime_divisor = 1
	while n > largest_prime_divisor:
		if n % curr_divisor == 0:
			largest_prime_divisor = max(largest_prime_divisor, curr_divisor)
			n /= curr_divisor
		else: 
			curr_divisor += 1
	return largest_prime_divisor

