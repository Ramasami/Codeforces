def main():
    n = int(input())
    print(int(n/2))
    if n % 2 == 1:
        print(3, end=" ")
        n -= 3
    while(n > 0):
        n -= 2
        print(2, end=" ")


if __name__ == "__main__":
    main()
