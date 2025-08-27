x = 50
y = 50
result_dic = {"5050": 1}
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
        key = str(x) + str(y)
        if not key in result_dic:
            result_dic.update({key: 0})
        result_dic[key] += 1
    print(len(result_dic))
