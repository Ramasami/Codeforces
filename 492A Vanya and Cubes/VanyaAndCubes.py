def main():
    n = int(input())
    i = 1
    r = 3
    l = 0
    while n > i:
        l += 1
        r += 1
        i = i * r / l
    print(l if n != i else l+1)


if __name__ == "__main__":
    main()
