import time


def timeit(func: function):
    def wrapper():
        start = time.time()
        func()
        end = time.time()

        print("Elapsed time: " + end - start)

    return wrapper


if __name__ == "__main__":
    print("This module must not be executed directly.")
    exit(1)
