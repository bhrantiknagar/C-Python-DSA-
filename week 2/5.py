# 5. Write a program in C and also in Python to convert lowercase characters to uppercase and vice
# versa in a string



def convert_case(s):
    result = ""

    for ch in s:
        if ch.islower():
            result += ch.upper()
        elif ch.isupper():
            result += ch.lower()
        else:
            result += ch

    return result

string = input("Enter a string: ")

print("Converted string:", convert_case(string))



