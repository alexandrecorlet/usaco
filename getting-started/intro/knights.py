# author: corlet1


def count(k: int) -> int:
    possibilities = (k ** 2) * (k**2 - 1) // 2
    attacks = 4 * (k - 1) * (k - 2)
    total_ways = possibilities - attacks
    return total_ways


def main():
    n = int(input())
    for i in range(1, n + 1):
        print(count(i))


if __name__ == "__main__":
    main()

