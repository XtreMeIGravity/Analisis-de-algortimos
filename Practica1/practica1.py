#main
import random
from array import *;

def print_array(*arg):
    for x in arg:
        print(arg[x]),

n=7
a=[]
b=[]
c=[]
for x in range(n):
    a.append(random.randint(0,1))
    b.append(random.randint(0,1))
    c.append(random.randint(0,1))
for i in range(n):
    print(a[i]),
print("")
print_array(*a)

