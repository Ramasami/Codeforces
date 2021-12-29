

from collections import deque


def main():
    n = int(input())
    d = deque()
    [d.append(int(x)) for x in input().split()]
    sc1 = 0
    sc2 = 0
    i = 0
    while len(d) > 0:
        if d[0] > d[-1]:
            l = d[0]
            d.popleft()
        else:
            l = d[-1]
            d.pop()
        if i % 2 == 0:
            sc1 += l
        else:
            sc2 += l
        i += 1
    print(sc1, sc2)


if __name__ == "__main__":
    main()
