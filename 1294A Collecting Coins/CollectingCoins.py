def main():
    t = int(input())
    while(t > 0):
        t -= 1
        a, b, c, n = [int(x) for x in input().split()]
        if (a+b+c+n)%3!=0:
            print("NO")
        else:
            med = (a+b+c+n)/3
            if med >= a and med >=b and med >=c:
                print("YES")
            else:
                print("NO")


if __name__ == "__main__":
    main()
