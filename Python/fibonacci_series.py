def recursion_fibo(n):
    if n <= 1:
        return n
    else:
        return(recursion_fibo(n-1)+recursion_fibo(n-2))

n = 8

if n <= 0 :
    print("Please enter a positive integer")
else :
    print("Fibonacci sequence: ")

    for i in range(n) :
        print(recursion_fibo(i))