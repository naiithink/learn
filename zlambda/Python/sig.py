import signal
import time

def say_hello(sigint, frame):
    print("hello, world")
    exit(0)

signal.signal(signal.SIGINT, say_hello)

while True:
    print("C-C")
    time.sleep(5000)
