def main():
    n = int(input())
    m = []
    for i in range(1,n+1):
        m.append([0] * i)
    for i in range(0,n):
        for j in range(0,i+1):
            if j == 0:
                m[i][j] = 1
            elif i == j:
                m[i][j] = 2 * m[i][j-1]
            else:
                m[i][j] = m[i-1][j] + m[i][j-1]
    print(m[n-1][n-1])


if __name__ == "__main__":
    main()
