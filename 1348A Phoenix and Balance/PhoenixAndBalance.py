def main():
    t = int(input())
    while(t > 0):
        t -= 1
        n = int(input())
        print(int(2 * (2**(n/2) - 1)))


if __name__ == "__main__":
    main()