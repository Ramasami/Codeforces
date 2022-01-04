def main():
    n = int(input())
    l = []
    for i in range(0, n):
        p, q = [int(x) for x in input().split()]
        l.append((p, q))
    l = sorted(l)
    max = l[0]
    found = False
    for i in range(1, n):
        if l[i-1][0] == l[i][0] and (i == n - 1 or l[i][0] == l[i+1][0]):
            continue
        else:
            if max[0] != l[i][0] and max[1] > l[i][1]:
                found = True
                break
            elif max[1] < l[i][1]:
                max = l[i]
    if found:
        print("Happy Alex")
    else:
        print("Poor Alex")


if __name__ == "__main__":
    main()
