

in_arr = [ int(x) for x in input().split() ]
n = in_arr[0]
m = in_arr[1]
a = in_arr[2]

countX = n // a
countY = m // a
if n % a !=0:
    countX +=1

if m % a !=0:
    countY +=1

count = countX * countY
print(count)
