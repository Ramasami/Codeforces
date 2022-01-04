def main():
    n = int(input())
    a = [int(x) for x in input().split()]
    state = 0
    l = -1
    r = -1
    for i in range(1, n):
        if state == 0 and a[i] < a[i-1]:
            if l == -1:
                l = i
            state = 1
        elif state == 1 and a[i] > a[i-1]:
            if r == -1:
                r = i
            state = 2
        elif state == 2 and a[i] < a[i-1]:
            state = 3

    if l == -1 and r == -1:
        l = 1
        r = 1
    elif r == -1:
        r = n

    if state == 3 or ((r != n and a[l-1] > a[r]) or (l != 1 and a[r-1] < a[l-2])):
        print("no")
    else:

        print("yes")
        print(l, r)


if __name__ == "__main__":
    main()
