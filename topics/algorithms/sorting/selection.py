import math
# import naiithink.utils.timing as timer

list = [2, 5, 4, 3, 6, 7, 1, 9, 8, 0]

# @timer.timeit
def selection_sort(ls: list) -> list:

    # Head pointer
    head = 0

    # Min run
    min = math.inf

    # Min run position
    min_pos = math.inf

    # Iteration count
    time = 0

    while time < len(ls):
        for i in range(head, len(ls)):
            if ls[i] < min:
                min = ls[i]
                min_pos = i

        temp = ls[head]
        ls[head] = min
        ls[min_pos] = temp

        head += 1
        time += 1

        min = math.inf
        min_pos = math.inf

    return ls

print(list)
print(selection_sort(list))
