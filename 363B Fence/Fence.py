def main():
    n, k = [int(x) for x in input().split()]
    a = [int(x) for x in input().split()]
    min = 0
    sum = 0
    i = 0
    while(i < k):
        sum += a[i]
        i += 1

    minSum = sum
    while(i < n):
        sum += a[i]-a[i-k]
        if sum < minSum:
            minSum = sum
            min = i - k + 1
        i += 1
    print(min + 1)


if __name__ == "__main__":
    main()
