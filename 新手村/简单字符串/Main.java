/*
	题目描述
	一般的文本编辑器都有查找单词的功能，该功能可以快速定位特定单词在文章中的位置，有的还能统计出特定单词在文章中出现的次数。
	
	现在，请你编程实现这一功能，具体要求是：给定一个单词，请你输出它在给定的文章中出现的次数和第一次出现的位置。
	注意：匹配单词时，不区分大小写，但要求完全匹配，即给定单词必须与文章中的某一独立单词在不区分大小写的情况下完全相同（参见样例1 ），
	如果给定单词仅是文章中某一单词的一部分则不算匹配（参见样例2 ）。
	
	输入格式
	共22行。
	
	第11行为一个字符串，其中只含字母，表示给定单词；
	
	第22行为一个字符串，其中只可能包含字母和空格，表示给定的文章。
	
	输出格式
	一行，如果在文章中找到给定单词则输出两个整数，两个整数之间用一个空格隔开，
	分别是单词在文章中出现的次数和第一次出现的位置（即在文章中第一次出现时，单词首字母在文章中的位置，位置从00 开始）；
	如果单词在文章中没有出现，则直接输出一个整数-1。
	
	输入输出样例
	输入 #1
	To
	to be or not to be is a question
	输出 #1
	2 0
	
	输入 #2
	to
	Did the Ottoman Empire lose its power at that time
	输出 #2
	-1
	
	说明/提示
	数据范围
	1≤单词长度≤10。
	1≤文章长度≤1,000,000。
	noip2011普及组第2题
*/
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        int sum=0,index;
        Scanner sc = new Scanner(System.in);
        String word = sc.nextLine().toLowerCase();//转小写
        String str = sc.nextLine().toLowerCase();
        String[] arr = str.split(" ");//str按空格分割，存入数组
        for(int i=0;i<arr.length;i++){
            if(word.equals(arr[i])){
                sum++;
            }
        }
        if(sum==0){
            System.out.println(-1);
        }else{
            if(word.equals(str.substring(0,word.length()))){
                index=0;    //特殊情况，第一个单词就一样
            }
            else{
                index=str.indexOf(" "+word+" ")+1;
            }
            System.out.println(sum+" "+index);//放在else里，不然单词没出现也会输出
        }
        
    }
}
