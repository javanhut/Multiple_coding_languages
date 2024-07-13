from calculator import Calculator



if __name__ == "__main__":
   calc1 = Calculator()

options = {
    'add': ['Enter add', 'Addition'],
    'sub': ['Enter sub', 'Subtraction'],
    'mult': ['Enter mult', 'Multiplication'],
    'div': ['Enter div', 'Division'],
    'mod': ['Enter mod', 'Modulus']
}
if __name__ == "__main__":
    while True:
        for k, v in options.items():
            print(f"{v[1]} : {v[0]}")

        opt = input("Enter the option you'd like to do: ").strip().lower()
        if opt not in options:
            print("Invalid option. Please try again.")
            continue

        try:
            a = int(input("Enter the first integer: "))
            b = int(input("Enter the second integer: "))
        except ValueError:
            print("Invalid input. Please enter integers only.")
            continue

        operations = {
            'add': calc1.add(a, b),
            'sub': calc1.subtract(a, b),
            'mult': calc1.multiply(a, b),
            'div': calc1.divide(a, b),
            'mod': calc1.modulus(a, b)
        }

        result = operations[opt]
        print(f"The {options[opt][1]} of {a} and {b} is {result}")

        another = input("Would you like to perform another operation? (yes/no): ").strip().lower()
        if another != 'yes':
            break

