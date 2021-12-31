def main():
    t = int(input())
    while(t > 0):
        t -= 1
        n = input()
        l = len(n)
        n = int(n)
        ans = (l - 1) * 9
        x = 0
        while (l > 0):
            x = 10*x+1
            l -= 1
        ans += int(n/x)
        print(ans)


if __name__ == "__main__":
    main()
