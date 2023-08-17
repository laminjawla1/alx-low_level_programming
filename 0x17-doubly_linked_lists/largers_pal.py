def is_palindrome(n):
	if str(n) == str(n)[::-1]:
		return True
	return False
set_1 = list(range(100, 1000))
set_2 = list(range(100, 1000))
largest = set_1[0] * set_2[0]
for n in set_1:
	for k in set_2:
		if is_palindrome(n * k):
			largest = n * k
print(largest)

