import math


def main():
    t = int(input())
    while(t > 0):
        t -= 1
        n, m = [int(x) for x in input().split()]
        print(math.ceil(n*m/2))


if __name__ == "__main__":
    main()
