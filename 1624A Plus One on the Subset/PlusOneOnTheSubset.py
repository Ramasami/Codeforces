def main():
    t = int(input())
    while(t > 0):
        t -= 1
        n = int(input())
        a = [int(x) for x in input().split()]
        m = a[0]
        M = 0
        for i in a:
            M = max(M, i)
            m = min(m, i)
        print(M-m)


if __name__ == "__main__":
    main()
