def main():
    n, m = [int(x) for x in input().split()]
    days = n
    currDays = n
    while (currDays >= m):
        days += int(currDays/m)
        currDays = int(currDays/m) + currDays % m
    print(days)


if __name__ == "__main__":
    main()
