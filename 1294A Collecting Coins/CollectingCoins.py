def main():
    t = int(input())
    while(t > 0):
        t -= 1
        a, b, c, n = [int(x) for x in input().split()]
        print("YES" if ((a+b+c+n) % 3) == 0 else "NO")


if __name__ == "__main__":
    main()
