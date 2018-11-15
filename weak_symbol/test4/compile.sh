#prepaire
gcc -c -fPIC strong.c
gcc -c -fPIC weak.c
gcc -c -fPIC main.c
ar -r weak.a weak.o
ar -r strong.a strong.o


#test1
echo "******************test1"
echo gcc main.o strong.o weak.o -o test1.out
gcc main.o strong.o weak.o -o test1.out
./test1.out
objdump -t test1.out |grep symbol
echo "***********************"

echo "******************test2"
echo gcc main.o weak.o -o test2.out
gcc main.o weak.o -o test2.out
./test2.out
objdump -t test2.out |grep symbol
echo "***********************"


echo "******************test3"
echo  gcc main.o strong.a weak.a -o test3.out
gcc main.o strong.a weak.a -o test3.out
./test3.out
objdump -t test3.out |grep symbol
echo "***********************"

echo "******************test4"
echo gcc main.o weak.a -o test4.out
gcc main.o weak.a -o test4.out
./test4.out
objdump -t test4.out |grep symbol
echo "***********************"

echo "******************test5"
echo  gcc -shared -fPIC weak.c -o weak.so
echo  gcc main.o weak.so -o test5.out
gcc -shared -fPIC weak.c -o weak.so
gcc main.o weak.so -o test5.out
./test5.out
objdump -t test5.out |grep symbol
echo "***********************"

echo "******************test6"
echo gcc -shared -fPIC weak.o -o weak.so
echo gcc main.o weak.so -o test6.out
gcc -shared -fPIC weak.o -o weak.so
gcc main.o weak.so -o test6.out
./test6.out
objdump -t test6.out |grep symbol
echo "***********************"

echo "******************test7"
echo gcc -shared -fPIC weak.a -o weak.so
echo gcc main.o weak.so -o test7.out
gcc -shared -fPIC weak.a -o weak.so
gcc main.o weak.so -o test7.out
./test7.out
objdump -t test7.out |grep symbol
echo "***********************"

echo "******************test8"
echo gcc -shared -fPIC strong.a -o strong.so
echo gcc main.o strong.so -o test.out
gcc -shared -fPIC strong.a -o strong.so
gcc main.o strong.so -o test.out
./test.out
objdump -t test.out |grep symbol
echo "***********************"

echo "******************test8"
echo gcc -shared -fPIC strong.o -o strong.so
echo gcc -shared -fPIC weak.a strong.so -o strong2.so
echo gcc main.o strong2.so -o test.out
gcc -shared -fPIC strong.o -o strong.so
gcc -shared -fPIC strong.so weak.a -o strong2.so
gcc main.o strong2.so -o test.out
./test.out
objdump -t test.out |grep symbol
echo "***********************"

echo "******************test9"
gcc -shared -fPIC weak.o -o weak.so
gcc -shared -fPIC weak.so strong.o -o weak2.so
gcc main.o weak2.so -o test.out
./test.out
objdump -t test.out |grep symbol
echo "***********************"

echo "******************test9_9"
gcc -shared -fPIC weak.o -o weak.so
gcc -shared -fPIC weak.so strong.a -o weak2.so
gcc main.o weak2.so -o test.out
./test.out
objdump -t test.out |grep symbol
echo "***********************"

#echo "******************test10"
#gcc -shared -fPIC weak.a strong.o -o weak2.so
#gcc main.o weak2.so -o test.out
#./test.out
#objdump -t test.out |grep symbol
#echo "***********************"
#
#echo "******************test11"
#ar rcs weak1.a weak.o strong.o
#gcc main.o weak1.a -o test.out
#./test.out
#objdump -t test.out |grep symbol
#echo "***********************"
