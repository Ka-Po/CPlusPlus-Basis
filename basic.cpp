//  main.cpp
//  cpp_test
//
//  Created by KaPo on 20/3/2023.
//

//#include <iostream>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main(){
//    cout << "hollo world!"<<endl;
//    return 0;
//}

//條件
//#include <iostream>
//using namespace std;
//
//int main(){
//    int score;
//    cout << "成績為：";
//    cin>>score;
//
//    if(score>=60)
//        cout<<"Pass"<<endl;
//    else
//        cout<<"不合格"<<endl;
//
//    return 0;
//}


//情況
//#include <iostream>
//using namespace std;
//
//int main(){
//
//    int n1,n2;
//    char op;
//    cout<<"順序輸入第1個數，運算子，第2個數";
//    cin>>n1>>op>>n2;
//    switch(op){
//        case '+':cout<<n1 + n2<<endl;
//            break;
//        case '-':cout<<n1 - n2<<endl;
//            break;
//        case '*':cout<<n1 * n2<<endl;
//            break;
//        case '/':cout<<n1 / n2<<endl;
//            break;
//        case '%':cout<<n1 % n2<<endl;
//            break;
//
//        default: cout<<"輸入不正確"<<endl;
//    }
//    return 0;
//
//}


//回圈
//#include <iostream>
//using namespace std;
//
//int main(){
//    int n,i, sum=0;
//    cout<<"輸入正整數";
//    cin>>n;
//    for(i=1;i<=n;i++){
//        sum+=i;
//    }
//    cout<<"1+...+"<<n<<"="<<sum<<endl;
//    return 0;
//
//}

//前測回圈
//判斷條件後回圈
//#include <iostream>
//using namespace std;
//
//int main(){
//    int n,i, sum=0;
//    cout<<"輸入正整數";
//    cin>>n;
//
//    i=0;
//    while(i<=n){
//        sum +=i;
//        i++;
//    }
//    cout<<"1+...+"<<n<<"="<<sum<<endl;
//    return 0;
//
//}

//後測回圈
//先執行第一次，才判斷條件
//#include <iostream>
//using namespace std;
//
//int main(){
//
//    int mon;
//    do{
//        cout<<"請輸入月份";
//        cin>>mon;
//    }
//    while(mon>12 || mon <1);
//
//    cout<<"月份為"<<mon<<endl;
//    return 0;
//
//}

//跳到回圈的更新值，再開始回圈；跳回回圈continue
//#include <iostream>
//using namespace std;
//
//int main(){
//    const int n=10;
//    int sum=0,i;
//    for(i=1;i<=n;i++){
//        if(!(i%3))
//            continue;
//        sum+=i;
//    }
//    cout<<"1到"<<n<<"不是3的部數的和為"<<sum<<endl;
//
//    return 0;
//
//}


//找出陣列內的最大值
//#include <iostream>
//using namespace std;
//
//int main(){
//    int n = 4;
//    int a[]={3,67,92,11};
//
//    int maxNumber=0, i;
//    for(i=0;i<n;i++)
//        if(a[i]>a[maxNumber])
//            maxNumber=i;
//
//    for(i=0;i<n;i++)
//        cout<<a[i]<<"";
//
//    cout<<endl;
//    cout<<"最大數元素是 a["<<maxNumber<<"]，而值是"<<a[maxNumber]<<endl;
//
//    return 0;
//
//}

//m至n的隨機數公式是rand()%(n-m+1)+m
//1至4的隨機數
//#include <iostream>
//#include <ctime>//隨機數要有一個srand方法，它要有個不固定的參數，會用到time()方法！
//#include <cstdlib>//srand與rand要引用這個程式集
//using namespace std;
//
//int main(){
//    int n=4;
//    int a[n];
//    srand((unsigned int)time(NULL));
//
//    for(int i=0;i<n;i++)
//        a[i]=(rand()%4+1);//由1到4的隨機數
//
//    for(int i=0;i<n;i++)
//        cout<<"a["<<i<<"] = "<<a[i]<<"\t";
//
//    cout<<endl;
//    return 0;
//
//}


//順序搜尋；跳出回圈break
//#include <iostream>
//using namespace std;
//int main(){
//
//    int n =3,i,key;
//    int loc=-1;
//
//    int a[3]={0,1,2};
//
//    cout<<"輸入你要找的數字";
//    cin>>key;
//
//    for(i=0;i<n;i++)
//        if(a[i]==key){
//            loc=i;
//            break;
//        }
//
//    if(loc != -1){
//        cout<<"a["<<loc<<"]="<<key<<endl;
//    }
//    else
//        cout<<"没有你找的值"<<key<<endl;
//
//    return 0;
//}


//氣泡排序法
//#include <iostream>
//using namespace std;
//int main(){
//    int n=5;
//   // int a[5]={1,3,5,7,9};
//    int a[5]={5,1,3,9,7};
//
//    int temp,i,j,k;
//    for(i=0;i<n;i++){
//        for(k=0;k<n;k++)
//            cout<<a[k]<<"\t";
//
//        cout<<endl;
//
//        for(j=0;j<n-1;j++)
//            if(a[j]>a[j+1]){
//                temp=a[j];
//                a[j]=a[j+1];
//                a[j+1]=temp;
//            }
//    }
//
//        cout<<"遞升後陣列是"<<endl;
//        for(i=0;i<n;i++)
//            cout<<a[i]<<"\t";
//
//        return 0;
//
//}




#include <iostream>
using namespace std;
int main(){
    
}
