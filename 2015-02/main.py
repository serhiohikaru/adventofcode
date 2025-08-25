import itertools

packageArea = 0
spareArea = 0
totalArea = 0

with open("./input.txt", "+r", encoding="utf-8") as f:
    input = f.read()
    input = input.rstrip("\n")
    input = input.split(",")
    input = itertools.batched(input, 3)
    for item in input:

