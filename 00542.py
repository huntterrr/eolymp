e, f, c = map(int, input().split())
if f+e==0:
    print(0)
else:
    print((e+f-1)//(c-1))