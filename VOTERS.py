https://www.codechef.com/problems/VOTERS

l=[]
l1=[]
l2=[]
l3=[]

l = [int(x) for x in input().split()]

for i in range(l[0]):
    l1.append(eval(input()))

for i in range(l[1]):
    l2.append(eval(input()))

for i in range(l[2]):
    l3.append(eval(input()))

s1=set(l1)
s2=set(l2)
s3=set(l3)

s4=s1.intersection(s2)
s5=s1.intersection(s3)
s6=s2.intersection(s3)

x=s4.union(s5)
y=x.union(s6)

z=list(y)
print(len(z))
z.sort()
for i in range(len(z)):
    print(z[i])