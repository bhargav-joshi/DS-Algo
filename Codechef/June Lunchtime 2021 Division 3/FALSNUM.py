for _ in range(int(input())):
    y = input()
    if y[0] == "1":
        print(y[0] + "0" + y[1:])
    else:
        print("1" + y[:])
