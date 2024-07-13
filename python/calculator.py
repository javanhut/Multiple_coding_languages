class Calculator:

    def __init_(self) -> None:
        """Initializes Calculator class."""

    def add(self, a: int|str, b: int|str) -> int:
        """This method adds up 2 variables
        Args:

            a: int
            b: int
        Returns:
            return: int
        """
        return int(a) + int(b)

    def subtract(self, a: int|str, b: int|str) -> int:
        """
        This method subtracts 2 variables.
        Args:
            a: int
            b: int
        Returns:
            return: int
        """
        return int(a) - int(b)

    def multiply(self, a: int|str, b: int|str) -> int:
        """
        This method multiples 2 integer variables.
        Args:
            a: int
            b: int
        Returns:
            return: int
        """
        return int(a) * int(b)

    def divide(self, a: int|str, b: int|str) -> float:
        """This method divides two integer values.

        Args:
            a: int
            b: int
        Returns:
            return float
        """
        return float(int(a) / int(b))

    def modulus(self, a: int|str, b: int|str) -> int:
        """
        This method gets remainder of two variables.

        Args:
            a: int
            b: int
        Returns:
            return: int
        """
        return int(a) % int(b)
