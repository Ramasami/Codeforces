def main():
    n, t = [int(x) for x in input().split()]
    if t == 10 and n == 1:
        print(-1)
        return
    print(t, end="")
    if t == 10:
        n -= 1
    for i in range(1, n):
        print(0, end="")


if __name__ == "__main__":
    main()
