def main():
    a, b = [int(x) for x in input().split()]
    h = 0
    c = 0
    while a > 0:
        h += a
        c += a
        a = int(c/b)
        c %= b
        if a == 0 and c < b:
            break
    print(h)


if __name__ == "__main__":
    main()
