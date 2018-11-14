//void symbol222()
//{
//    printf("%s\n",__FUNCTION__);
//}

//void symbol1() __attribute__ ((weak,alias("symbol222")));  //这一包与下面的asm()一句是等效的。
int main()

{
    asm(".weak symbol1\n\t .set symbol1, symbol222\n\t");
    symbol1();
    return 0;
}
