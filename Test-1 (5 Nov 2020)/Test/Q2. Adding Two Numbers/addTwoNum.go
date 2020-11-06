package main

import (
    "bufio"
    "fmt"
    "io"
    "os"
    "strconv"
    "strings"
)

import "math"


func addNumbers(a float32, b float32) int32 {
    return int32(math.Floor(float64(a)+float64(b)))
}

func main() {
    reader := bufio.NewReaderSize(os.Stdin, 16 * 1024 * 1024)

    stdout, err := os.Create(os.Getenv("OUTPUT_PATH"))
    checkError(err)

    defer stdout.Close()

    writer := bufio.NewWriterSize(stdout, 16 * 1024 * 1024)

    aTemp, err := strconv.ParseFloat(strings.TrimSpace(readLine(reader)), 64)
    checkError(err)
    a := float32(aTemp)

    bTemp, err := strconv.ParseFloat(strings.TrimSpace(readLine(reader)), 64)
    checkError(err)
    b := float32(bTemp)

    result := addNumbers(a, b)

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
