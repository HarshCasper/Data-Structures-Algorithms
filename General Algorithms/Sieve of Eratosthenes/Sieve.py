def sieve(n):
    prime=[True for i in range(n+1)]
    p=2
    while(p*p<=n):
        if(prime[p]==True):
            for i in range(p*p,n+1,p):
                prime[i]=False
        p=p+1

        for p in range(2,n):
            if(prime[p]==True):
                print("%r\n" %p)

if __name__=='__main__':
    n=30
    n=int(input("Enter the limit till which the Prime Numbers are to be printed:  "))
    print("The Prime Numbers are:")
    sieve(n)
