def main():
    t = int(input())
    while(t > 0):
        t -= 1
        x, y, z = [int(x) for x in input().split()]
        if ((x == y and x >= z) or (y == z and y >= x) or (z == x and z >= y)):
            print("YES")
            if(x == y):
                print(x, z, z)
            elif (x == z):
                print(z, y, y)
            else:
                print(y, x, x)
        else:
            print("NO")


if __name__ == "__main__":
    main()
