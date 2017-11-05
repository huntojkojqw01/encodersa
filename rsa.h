#ifndef _RSA_H
#define _RSA_H
#include <stdlib.h>
//Thuật toán gcd mở rộng, áp dụng tìm nghịch đảo của n1 theo modulo n2,
// kết quả trả về là một mảng [g,a,b] với g là UCLN của n1,n2 và a, b thỏa mãn
// n1*a+n2*b=1.
//Tham khảo sách "Giáo trình cơ sở an toàn thông tin" thầy Văn, trang 71.
int* gcd_mo_rong(int n1,int n2);
#endif //_RSA_H