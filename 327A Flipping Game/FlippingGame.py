def main():
    n = int(input())
    a = [int(x) for x in input().split()]
    maxOnes = 0
    currentOnes = 0
    l = -1
    L = -1
    R = -1
    for i in range(0, n):
        if a[i] == 0:
            currentOnes += 1
        else:
            currentOnes -= 1
            if currentOnes < 0:
                currentOnes = 0
                l = i

        if currentOnes > maxOnes:
            L = l
            R = i
            maxOnes = currentOnes

    if R == -1:
        print(n-1)
    else:
        one = 0
        for i in range(0, L + 1):
            if a[i] == 1:
                one += 1


        for i in range(L+1, R+1):
            if a[i] == 0:
                one += 1

        for i in range(R+1, n):
            if a[i] == 1:
                one += 1

        print(one)


if __name__ == "__main__":
    main()
