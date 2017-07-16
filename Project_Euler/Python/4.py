'''
A palindromic number reads the same both ways. 
The largest palindrome made from the product 
of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the 
product of two 3-digit numbers.

'''

from itertools import permutations

def get_all_3_digit_products():
	return list(set([x[0] * x[1] for x in permutations(range(100, 1000), 2)]))

def number_is_palindrome(n):
	num_string = str(n)

	for i in range(len(num_string)/2):
		if num_string[i] != num_string[len(num_string) - 1 - i]:
			return False

	return True

def largest_palindrome():
	products = get_all_3_digit_products()

	curr_largest_palindrome = -1

	for p in products:
		if number_is_palindrome(p) and p > curr_largest_palindrome:
			curr_largest_palindrome = p

	return curr_largest_palindrome
