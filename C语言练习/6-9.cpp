#include<iostream>
using namespace std;
void factorial(int value);
int main()
{
  factorial(1000); 
}
void factorial(int value)
{  
     
 int result[10000]={0};
 int result_size=1;//ʵʱ����result��ʵ��λ��
 int carryBit = 0;   //��λ��ֵ
 
    result[0]=1;//��ʼ���Ϊ1
 
 for (int out = 2; out <= value; out++) {  
         for (int in = 0; in < result_size; in++) {  
                int temp = result[in] * out  
                        + carryBit;  
                result[in]=temp % 10;  
                carryBit = temp / 10;  
            }  
            while (carryBit != 0) { 
                result[result_size]=carryBit % 10;  
                result_size++;
                carryBit = carryBit / 10;  
            }  
        }
 
      cout<<value<<"�Ľ׳˽��Ϊ��"<<endl;
        for(int i=result_size;i>0;i--)  
        {  
            cout<<result[i];
        }  
  
 }
