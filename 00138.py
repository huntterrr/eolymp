n = int(input())
F = [0]*n
if n==1:
	print(2)
else:
	F[0] = 2
	F[1] = 4
	for i in range(2, n):
		F[i] = F[i-1]+F[i-2]

	print(F[n-1])