
#include <stdio.h>

//本节主要涉及到表达式转换的手工操作方法
//1:中缀表达式转前缀表达式或后缀表达式
  /*
	转换时，每两个操作数一个运算符就将他们用括号括起来，注意这个过程不要乱，按照从内到外的顺序
	依次括，括好之后，将括号的结果在下面再抄一遍，这次抄时只保留操作数和括号，不要写运算符，注意
	对齐。然后对照两个式子，将运算符移到括号外，注意移动时只把该运算符移动到该运算符所在括号外就可以了
	不要一次移动多层，最后去掉括号，即可。移动时后缀表达式往后移，前缀表达式往前移动
  */
//2:后缀表达式转前缀表达式或中缀表达式
	/*
		后缀变动时转换其他表达式时，每遇到两个表达式一个运算符，即为1组，若转前缀就将运算符移动两个表达是前面
		若是中缀则是中间，转换过程中如果遇到连续两个表达式，则将前面转换的表达式先放下，单独处理这两个连续的表达式
		让他们成为一组，最终转换即可完成。转换时，把后缀表达式写到第一行，下面转化一步一步进行，写进去一个，对应位置
		画一条竖线下来，防止干扰。
	*/
//3:其他
	/*
	 三个表达式相互转换有很多情况，上述只是说了代表情况，其余情况是和他们类似的。如果实在不行的话，可以借助
	 中缀表达式进行转换，只是就是操作麻烦了点
	*/