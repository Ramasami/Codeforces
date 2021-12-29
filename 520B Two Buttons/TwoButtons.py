def main():
    n, m = [int(x) for x in input().split()]
    w = 0
    while n!=m:
        if m > n:
            if m%2==0:
                m/=2
            else:
                m+=1
        elif n > m:
            m+=1
        w+=1
    print(w)


if __name__ == "__main__":
    main()
