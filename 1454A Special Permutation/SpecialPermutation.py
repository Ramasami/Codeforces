def main():
    t = int(input())
    while(t > 0):
        t -= 1
        n = int(input())
        print(n, end=" ")
        print(" ".join([str(x) for x in range(1, n)]))


if __name__ == "__main__":
    main()
