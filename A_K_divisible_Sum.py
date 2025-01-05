import math

def min_max_element(n, k):
    return math.ceil(k / n)

# Read number of test cases
t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    print(min_max_element(n, k))
