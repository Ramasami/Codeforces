def main():
    t = int(input())
    while(t > 0):
        t -= 1
        n, x = [int(x) for x in input().split()]
        if n <= 2:
            print(1)
        else:
            n -= 2
            print(int((n+x-1)/x) + 1)


if __name__ == "__main__":
    main()
