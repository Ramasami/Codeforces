def main():
    s = input()
    m = len(s)
    M = 0
    queries = []
    t = int(input())
    while(t > 0):
        t -= 1
        l, r = [int(x) for x in input().split()]
        m = min(m, l-1)
        M = max(M, r - 1)
        queries.append((l-1, r-1))
    c = [0] * (M-m+1)
    count = 0
    c.append(0)
    for i in range(m, M + 1):
        if s[i] == s[i-1]:
            count += 1
        c[i-m] = count
    for query in queries:
        l, r = query
        print(c[r - m] - c[l - m])


if __name__ == "__main__":
    main()
