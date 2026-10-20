a = "Hello"
b = a
c = a[:]
print("b == a:", b == a)  
print("c == a:", c == a) 

x = [1, 2, 3, 4]
y = x       
z = x[:]    

y[0] = 10   

print("x:", x)  
print("z:", z)  