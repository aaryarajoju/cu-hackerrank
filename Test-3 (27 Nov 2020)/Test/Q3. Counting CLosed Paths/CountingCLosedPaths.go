package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
	"strconv"
	"strings"
)




/*
 * Complete the 'closedPaths' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER number as parameter.
 */

func closedPaths(number int32) int32 {
	// Write your code here

	int numOfClosedPaths = 0
	int rem
	int num;

	num = number

	for num > 0 {
		rem = num % 10

		switch rem {
			case 0:
			case 4:
			case 6:
			case 9:
				numOfClosedPaths = numOfClosedPaths + 1
				break

			case 8:
				numOfClosedPaths = numOfClosedPaths + 2
				break			
		}

		num = num / 10
	}

	return numOfClosedPaths	
}





func main() {
	reader := bufio.NewReaderSize(os.Stdin, 16*1024*1024)

	stdout, err := os.Create(os.Getenv("OUTPUT_PATH"))
	checkError(err)

	defer stdout.Close()

	writer := bufio.NewWriterSize(stdout, 16*1024*1024)

	numberTemp, err := strconv.ParseInt(strings.TrimSpace(readLine(reader)), 10, 64)
	checkError(err)
	number := int32(numberTemp)

	result := closedPaths(number)

	fmt.Fprintf(writer, "%d\n", result)

	writer.Flush()
}

func readLine(reader *bufio.Reader) string {
	str, _, err := reader.ReadLine()
	if err == io.EOF {
		return ""
	}

	return strings.TrimRight(string(str), "\r\n")
}

func checkError(err error) {
	if err != nil {
		panic(err)
	}
}
