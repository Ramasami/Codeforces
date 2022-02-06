def main():
    n, m = [int(x) for x in input().split()]
    a = [int(x) for x in input().split() if int(x) < 0]
    a.sort()
    sum = 0
    for i,x in enumerate(a):
        if i >=m:
            break
        sum+=-x
    print(sum)
    



if __name__ == "__main__":
    main()
