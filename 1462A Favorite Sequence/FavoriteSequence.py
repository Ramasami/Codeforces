def main():
    t = int(input())
    while(t > 0):
        t -= 1
        n = int(input())
        a = input().split()
        b = []
        for i in range(0, int(n/2)):
            b.append(a[i])
            b.append(a[n-i-1])
        if n % 2 == 1:
            b.append(a[int((n)/2)])
        print(" ".join(b))


if __name__ == "__main__":
    main()
