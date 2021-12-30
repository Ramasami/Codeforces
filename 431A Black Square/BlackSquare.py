def main():
    a = [int(x) for x in input().split()]
    s = input()
    sum = 0
    for i in s:
        sum+=a[int(i)-1]
    print(sum)



if __name__ == "__main__":
    main()
