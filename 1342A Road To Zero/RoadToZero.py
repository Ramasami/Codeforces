def main():
    t = int(input())
    while(t > 0):
        t -= 1
        x, y = [int(x) for x in input().split()]
        a, b = [int(x) for x in input().split()]

        if 2 * a < b:
            print(a * (x+y))
        else:
            print(min(x, y) * b + (abs(x-y) * a))


if __name__ == "__main__":
    main()
