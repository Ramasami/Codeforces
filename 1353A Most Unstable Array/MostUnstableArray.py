def main():
    t = int(input())
    while(t > 0):
        t -= 1
        n, m = [int(x) for x in input().split()]
        if n % 2 == 0 and m % 2 == 0:
            print(m/(n/2))


if __name__ == "__main__":
    main()
