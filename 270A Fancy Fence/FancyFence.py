import math


def main():
    t = int(input())
    while(t > 0):
        t -= 1
        a = int(input())
        n = 360/(180-a)
        if n == math.floor(n):
            print("YES")
        else:
            print("NO")


if __name__ == "__main__":
    main()
