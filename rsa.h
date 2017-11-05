/*
Tham khảo sách "Giáo trình cơ sở an toàn thông tin" thầy Nguyễn Khanh Văn,NXB Bách Khoa Hà Nội. 
*/
#ifndef _RSA_H
#define _RSA_H

typedef struct{
	unsigned int p,q,n,m,e,d;
}rsa_params;
/*
Thuật toán gcd mở rộng, áp dụng tìm nghịch đảo của n1 theo modulo n2,
kết quả trả về là một mảng [g,a,b] với g là UCLN của n1,n2 và a, b thỏa mãn
n1*a+n2*b=1.
Chi tiết tham khảo trang 71.
*/
int* gcd_mo_rong(int n1,int n2);
//------------------------------------------------
/*
Bước xây dựng các tham số p,q,n,e,m,d cho thuật toán RSA.
Chi tiết tham khảo trang 73.
*/
void init();
int luy_thua_cao(int x,int y,int mod);
#endif //_RSA_H