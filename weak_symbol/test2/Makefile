objstrong=strong.so
objweak=weak2.o
result=output
objstrong1=strong.a
objweak1=weak22.o
result1=output2

dynamic:${objstrong} ${objweak} ${result}
${objstrong}:strong.c
	gcc -shared -fPIC strong.c -o strong.so
${objweak}:weak2.c
	gcc -c weak2.c
${result}:
	gcc ${objstrong}  ${objweak} -o ${result}

static:${objstrong1} ${objweak1} ${result1}
${objstrong1}:strong.c
	gcc -c strong.c 
	ar -rcs strong.a strong.o
${objweak1}:weak2.c
	gcc -c weak2.c
${result1}:
	gcc weak2.o strong.a  -o output

clean:
	rm ${objstrong} ${objweak} ${result} strong.a strong.o
