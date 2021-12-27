import math


def getMax(n, m):
    s = [9]*n
    sum = 9*n
    i = n-1
    while i >= 0:
        if sum > m:
            if sum - m <= 9:
                s[i] -= sum - m
                sum = m
                break
            elif sum - m > 9:
                s[i] = 0
                sum -= 9
        elif sum == m:
            break
        else:
            sum = -1
            break
        i -= 1
    if sum == -1:
        return -1
    return "".join([str(x) for x in s])


def getMin(n, m):
    s = [0]*n
    sum = 0
    i = n-1
    while i >= 0:
        if sum < m:
            if m - sum <= 9:
                if i > 0:
                    s[0] = 1
                    s[i] = m - sum - 1
                else:
                    s[0] = m - sum
                sum = m
                break
            elif m - sum > 9:
                if i == 0:
                    sum = -1
                    break
                else:
                    s[i] = 9
                    sum += 9
        elif sum == m:
            break
        else:
            sum = -1
            break
        i -= 1
    if sum == -1:
        return -1
    return "".join([str(x) for x in s])


def main():
    n, m = [int(i) for i in input().split()]
    if n == 0 or (m == 0 and n != 1):
        print(-1, -1)
    else:
        print(getMin(n, m), getMax(n, m))


if __name__ == "__main__":
    main()
