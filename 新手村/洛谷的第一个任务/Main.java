/*
	��Ŀ����
	�׶ذ��˻�Ҫ���ˣ�С����ƴ����ϰ��Ӿ׼���μ���Ӿ������
	������С�㲢��֪�������ǲ��ܲμ�����İ��˻�ġ�
	��һ�죬С����Լ�����Ӿʱ�����˾�ȷ�ļ�ʱ�������еļ�ʱ����24Сʱ�Ƽ��㣩��
	�������Լ���aʱb��һֱ��Ӿ�������cʱd�֣�     
	�����С�����һ�£�������һ�����˶���ʱ���أ�
	С���εĺ�����ѽ����ɲ�Ҫ�����Ŷ��
	
	�����ʽ
	һ�������� 4 ���������ֱ��ʾ a, b, c, d��
	
	�����ʽ
	һ������� 2 ������ e �� f���ÿո��������α�ʾС������һ�����˶���Сʱ���ٷ��ӡ�
	���б�ʾ���ӵ����� f Ӧ��С��60��
*/
import java.util.Scanner;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int d = sc.nextInt();
        
        int cha = (c*60+d)-(a*60+b);
        int hours = cha/60;
        int mintes = cha%60;
        System.out.println(hours+" "+mintes);
    }
}
