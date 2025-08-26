house_array = ()
for i in range(1, 100):
    for j in range(1, 100):
        house_array[i][j] = 0

x = 50
y = 50
with open("./input.txt", "r") as f:
    input = f.read()
    for char in input:
        if char == "<":
            y = y - 1
        elif char == ">":
            y = y + 1
        elif char == "^":
            x = x + 1
        elif char == "v":
            x = x - 1
        house_array[x][y] = house_array[x][y] + 1
        print(house_array)
