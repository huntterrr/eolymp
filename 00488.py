n = int(input())
F = [[0]*n for i in range(n)]
for i in range(n):
	for j in range(n):
		F[i][j]=str(j+1+n*i)
	if i%2==1:
		F[i] = F[i][::-1]
	print(' '.join(F[i]))