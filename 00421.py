i, k = map(int, input().split())
count = 0
while i/k>1:
	i/=k
	count+=1
print(count)