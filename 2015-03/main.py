import itertools
x_santa = 200
x_robot = 200
y_santa = 200
y_robot = 200
result_dic = {"200200": 2}
with open("./input_test.txt", "r") as f:
    input = f.read()
    for char in input:
        if char == "v":
            print(char)
            y_santa = y_santa - 1
            y_robot = y_robot + 1
        elif char == "^":
            print(char)
            y_santa = y_santa + 1
            y_robot = y_robot - 1
        elif char == ">":
            print(char)
            x_santa = x_santa + 1
            x_robot = x_robot - 1
        elif char == "<":
            print(char)
            x_santa = x_santa - 1
            x_robot = x_robot + 1
        key_santa = str(x_santa) + str(y_santa)
        key_robot = str(x_robot) + str(y_robot)
        if key_santa == key_robot:
            if not key_santa in result_dic:
                result_dic.update({key_santa: 0})
            result_dic[key_santa] += 1
        else:
            for key in (key_santa, key_robot):
                print(key_santa)
                print(key_robot)
                if not key in result_dic:
                    result_dic.update({key: 0})
                result_dic[key] += 1
    print(len(result_dic))
    print(result_dic)
