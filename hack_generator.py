# hack_generator.py
with open("hack_input.txt", "w") as f:
    t = 10000
    f.write(f"{t}\n")
    
    for _ in range(t):
        f.write("1 1\n")  # n = 1, m = 1
        f.write("5\n")    # The array 'v': a single element 5
        f.write("1\n")    # The array 'vv': a single impact value 1