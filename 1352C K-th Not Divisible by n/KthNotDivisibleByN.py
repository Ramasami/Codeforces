def find(n, k):
    if k < n:
        return k
    m = int(k/n)*n
    rem = k % n + int(k/n)
    add = find(n, rem)
    return m + add


def main():
    t = int(input())
    while(t > 0):
        t -= 1
        n, k = [int(x) for x in input().split()]

        print(find(n, k))


if __name__ == "__main__":
    main()
