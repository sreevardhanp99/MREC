def get_password(num, name):
    num_to_word = {"0": "zero", "1": "one", "2": "two", "3": "three", "4": "four", "5": "five", "6": "six", "7": "seven", "8": "eight", "9": "nine"}
    num_sci = f"{num:e}"
    num_sci_parts = num_sci.split("e")
    num_sci_parts[0] = str(sum(int(digit) for digit in num_sci_parts[0] if digit.isdigit()) % 10)
    num_sci_parts[1] = str(sum(int(digit) for digit in num_sci_parts[1] if digit.isdigit()) % 10)
    num_sci = "e".join(num_sci_parts)
    s1 = "".join([num_to_word[digit][:3] for digit in num_sci if digit.isdigit()] + ["e" if digit == "e" else digit for digit in num_sci if not digit.isdigit()])
    s2 = "".join([char for i, char in enumerate(name) if i % 2 == 0 and char.isalpha()])
    if int(num_sci_parts[1]) % 2 == 1:
        password = s1 + "@" + s2
    else:
        password = s1
    return password
print(get_password(54.785949, "rajarajeswari"))  # Output: "fiv.onee+sev@rjrjsai"
print(get_password(0.00000934749, "bhuvaneswari"))