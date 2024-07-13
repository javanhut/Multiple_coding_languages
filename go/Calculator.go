package main

import (
	"fmt"
)

func add(a int, b int) int{
	return a + b
}

func sub(a int, b int) int{
	return a - b
}

func multiply(a int, b int) int{
	return a * b
}

func divide(a int, b int ) int{
	if b != 0 {
		return a / b
	} else {
		return 0
	}
}
func modulus(a int, b int ) int{
	if b != 0 {
		return a % b
	} else {
		return 0
	}
}

func main(){
	var a int
	var b int
	var opt string
	opts_map := map[string]int{"add": 1, "sub": 2, "mult": 3, "div": 4, "mod": 5}

	fmt.Print("Enter first integer: ")
	fmt.Scan(&a)
	fmt.Print("Enter Second integer: ")
	fmt.Scan(&b)
	fmt.Print("Enter option from the selections below:\nAdd: Enter add\nSubtract: Enter sub\nMultiply: Enter mult\nDivide: Enter div\nModulus/Remainder: Enter mod\nOption:")
	fmt.Scanln(&opt)
	switch opts_map[opt] {
	case 1:
		fmt.Printf("The addition of %d and %d is equal to %d",a,b,add(a,b))
	case 2:
		fmt.Printf("The subtraction of %d and %d is equal to %d", a,b, sub(a,b))
	case 3:
		fmt.Printf("The multiplication of %d and %d is equal to %d", a,b, multiply(a,b))
	case 4:
		fmt.Printf("The division of %d and %d is equal to %d", a,b, divide(a,b))
	case 5:
		fmt.Printf("The modulus of %d and %d is equal to %d", a,b, modulus(a,b))
	}
}