def main():
    n, m = [int(x) for x in input().split()]
    x = max(n, m)
    if(x == 6):
        print("1/6")
    elif (x == 5):
        print("1/3")
    elif (x == 4):
        print("1/2")
    elif (x == 3):
        print("2/3")
    elif(x == 2):
        print("5/6")
    else:
        print("1/1")


if __name__ == "__main__":
    main()
