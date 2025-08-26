import itertools

packageArea = 0
spareArea = 0
totalArea = 0
input = ()

def calculate_package_area(l, w, h):
    return 2 * l * w + 2 * w * h + 2 * h * l

with open("./input.txt", "+r", encoding="utf-8") as f:
    input = f.read()
    input = input.rstrip("\n")
    input = input.split(",")
    input = itertools.batched(input, 3)
    for item in input:
        l = int(item[0])
        w = int(item[1])
        h = int(item[2])
        side_list = [l, w, h]
        packageArea = (calculate_package_area(l, w, h))
        side_list.remove(max(side_list))
        spareArea = side_list[0] * side_list[1]
        totalArea = totalArea + packageArea + spareArea
        packageArea = 0
        spareArea = 0
    print(totalArea)
