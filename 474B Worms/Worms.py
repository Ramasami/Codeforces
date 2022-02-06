def binary(l, r, s, a):
    if l >= r:
        return l
    m = l + (r-l)//2
    if a[m] == s:
        return m
    elif a[m] > s:
        return binary(l, m, s, a)
    else:
        return binary(m+1, r, s, a)


def main():
    n = int(input())
    a = [int(x) for x in input().split()]
    sum = 0
    cs = []
    for x in a:
        sum += x
        cs.append(sum)
    max = cs[n-1]
    input()
    t = [int(x) for x in input().split()]
    for i in t:
        p = binary(0, n, i, cs)
        print(p+1)


if __name__ == "__main__":
    main()
