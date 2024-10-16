_, lines = input().split(" ")

# everything split by space
things = [(1 if (i == "true" or i == "and") else 0) for i in input().split(" ")]


for _ in range(int(lines)):
    start, end, wanted = input().split(" ")
    newthings = things[0:int(start) - 1] + [ 0 ] + things[int(end):]
    

    # parser body
    # and parsing
    i = 1
    while i < len(newthings):
        if newthings[i] == 1:
            statement = 1 if (newthings[i - 1] == 1 and newthings[i + 1] == 1) else 0

            newthings = newthings[0:i - 1] + [ statement ] + newthings[i + 2:]


        else:
            i += 2

    
    #print(newthings)

    # or parsing
    i = 1
    while i < len(newthings):
        if newthings[i] == 0:
            statement = 1 if (newthings[i - 1] == 1 or newthings[i + 1] == 1) else 0

            newthings = newthings[0:i - 1] + [ statement ] + newthings[i + 2:]


        else:
            i += 2


    if (newthings[0] == 1 and wanted == "true") or (newthings[0] == 0 and wanted == "false"):
        print("Y", end="")
    else:
        print("N", end="")


print("")