
'''
Problem: Find the first Fibonacci 
terms that don't exceed 4,000,000
and obtain the sum of the even-valued
terms
'''

def generate_even_terms(upper_bound):
	F = [1, 1]
	while (F[-1] < upper_bound):
		F.append(F[len(F)-1] + F[len(F)-2])

	if(F[-1] >= upper_bound):
		F = F[0:len(F)-1]
	return [x for x in F if x % 2 == 0]

def even_fibonacci(upper_bound):
	even_terms = generate_even_terms(upper_bound)
	summation = reduce(lambda x,y: x+y, even_terms)
	return summation
