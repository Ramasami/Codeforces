def main():
    s = input()
    previous = 0
    rotations = 0
    for characters in s:
        current = ord(characters)-ord('a')
        if current > previous:
            rotations += min(current - previous, 26 - (current - previous))
        else:
            rotations += min(previous - current, 26 - (previous - current))
        previous = current
    print(rotations)


if __name__ == "__main__":
    main()
