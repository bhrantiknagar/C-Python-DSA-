# 2. Write a C program to swap two numbers using pointers and functions ( Also implement this program in Python)


def swap(a, b):
    return b, a

x = int(input("Enter first number: "))
y = int(input("Enter second number: "))

print("\nBefore Swapping:")
print("x =", x)
print("y =", y)

x, y = swap(x, y)

print("\nAfter Swapping:")
print("x =", x)
print("y =", y)

