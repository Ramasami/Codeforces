def main():
    s = input()
    c = []
    count = 0
    c.append(0)
    for i in range(1, len(s)):
        if s[i] == s[i-1]:
            count += 1
        c.append(count)
    t = int(input())
    while(t > 0):
        t -= 1
        l, r = [int(x) for x in input().split()]
        print(c[r-1] - c[l-1])


if __name__ == "__main__":
    main()
