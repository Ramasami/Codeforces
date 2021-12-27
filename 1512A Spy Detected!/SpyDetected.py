def main():
    t = int(input())
    while(t > 0):
        t -= 1
        input()
        a = [int(x) for x in input().split()]
        if a[0] == a[1]:
            x = a[0]
        else:
            x = a[2]
        for idx, val in enumerate(a):
            if val != x:
                print(idx+1)
                break


if __name__ == "__main__":
    main()
