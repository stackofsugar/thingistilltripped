some_array = [1,6,7,"merry","miko",9.2384]
some_array.append(80)
some_array.append("hello is anyone here")

print(some_array[3])
print(some_array[7])

for i in some_array: # for loop here, i is the placeholder for arr[i] (NOT i) and the incrementation is automatic
    print(i,end=" ") # end=" " to supress newline

print("")