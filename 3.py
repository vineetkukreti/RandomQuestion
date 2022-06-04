'''
     3 Design, Develop and Implement a menu driven Program in Python to perform the following
        tasks
        a. Read three numbers and print largest of it
        b. Read a number and print sum of its digit
        c. Read a number and print reverse a number (without using built in function)
        Support the program with appropriate functions for each of the above tasks

'''
def large_of_num():
    a = int(input("Enter first number : "))
    b = int(input("Enter second number : "))
    c = int(input("Enter third number : "))
    max = a
    if(a>b):
        if(a>c):
            max = a
    else:
        if(b>c):
            max = b
        else:
            max = c
    print(max)
def sum_of_digit():
    a = int(input("Enter the digit = "))
    sum = 0
    while a>0:
        rem = a%10
        sum+=rem
        a=a//10
    print("Sum of digit : ",int(sum))
def  reverse_number():
    a = int(input("Enter the digit = "))
    n = a
    rev = 0
    while a>0:
        rem = a%10
        rev = rev*10 + rem
        a = a//10
    print(f"Reverse of {n} = {rev}")
print("\t\t1. Read three numbers and print largest of it\n\t\t2. Read a number and print sum of its digit\n"
      "\t\t3. Read a number and print reverse a number")
while True:
    choice = int(input("Enter your choice = "))
    if choice == 1:
        large_of_num()
    elif choice == 2:
        sum_of_digit()
    elif choice == 3:
        
        reverse_number()
    else:
        print("invalid")