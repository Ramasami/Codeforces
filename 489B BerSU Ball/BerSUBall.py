def main():
    s = int(input())
    sn = [int(x) for x in input().split()]
    l = int(input())
    ln = [int(x) for x in input().split()]

    sn.sort()
    ln.sort()
    ans = 0
    j = 0
    i = 0
    while i < s and j < l:
        if ln[j] - sn[i] > 1:
            i += 1
        elif sn[i] - ln[j] > 1:
            j += 1
        else:
            ans += 1
            i += 1
            j += 1
    print(ans)


if __name__ == "__main__":
    main()
