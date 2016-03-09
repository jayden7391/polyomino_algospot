count = input()
current = 0

while current < count:
    current = current + 1
    n = input()

    n1 = 2
    n2 = 6
    n3 = 19
    n4 = 0
    
    if n == 1:
        print 1
        continue
    if n == 2:
        print 2
        continue
    if n == 3:
        print 6
        continue
    if n == 4:
        print 19
        continue
        
    for i in range(4,n):
        n4 = 5*n3 - 7*n2 + 4*n1
        n1 = n2
        n2 = n3
        n3 = n4
    
    if n3 > 10000000:
        print n3 % 10000000
    else:
        print n3

