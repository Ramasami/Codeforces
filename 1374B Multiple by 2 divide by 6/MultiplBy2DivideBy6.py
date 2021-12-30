def main():
    t = int(input())
    while(t > 0):
        t -= 1
        n = int(input())
        ans = 0
        while n % 6 == 0:
            ans += 1
            n /= 6
        while n % 3 == 0:
            ans += 2
            n /= 3
        if n == 1:
            print(ans)
        else:
            print(-1)


if __name__ == "__main__":
    main()
