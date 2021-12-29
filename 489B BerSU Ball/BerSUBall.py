def main():
    n = int(input())
    an = [int(x) for x in input().split()]
    m = int(input())
    am = [int(x) for x in input().split()]

    if(n < m):
        s = n
        sn = an
        l = m
        ln = am
    else:
        s = m
        sn = am
        l = n
        ln = an
    sn.sort()
    ln.sort()
    ans = 0
    j = 0
    i = 0
    while i < s and j < l:
        if ln[j] - sn[i] > 1:
            i+=1
        elif sn[i] - ln[j] > 1:
            j+=1
        else:
            ans+=1
            i+=1
            j+=1
    print(ans)

if __name__ == "__main__":
    main()
