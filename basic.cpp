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
//    cout<<"1到"<<n<<"不是3的倍數的和為"<<sum<<endl;
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



//傳數值引用
//#include <iostream>
//using namespace std;
//
////void swap(float,float);//用自己寫的方法去覆蓋原來的預設方法。
////方法宣告在引用的下方，就要在用引的上方，先寫出同名方法與參數型態。
///
//int main(){
//    float x,y;
//
//    cout <<"輸入2個小數，將它們用空格分開：";
//    cin>>x>>y;
//    swap(x, y);//佢有個預設方法，去交換兩個數。
//    cout<<"2個數引用後是："<<x<<"\t"<<y<<endl;
//    return 0;
//}

////void swap(float a,float b){
////    float temp = a;
////    a=b;
////    b=temp;
////}



//傳地址引用
//#include <iostream>
//using namespace std;
//
//void swap(float*,float*);
//
//int main(){
//    float x,y;
//
//    cout <<"輸入2個小數，將它們用空格分開：";
//    cin>>x>>y;
//    swap(&x, &y);//
//    cout<<"2個數前後交換之後是："<<x<<"\t"<<y<<endl;
//    return 0;
//}
//
//void swap(float* a,float* b){
//    float temp = *a;
//    *a=*b;
//    *b=temp;
//}



//傳參考的引用，與傳址引用的效果相同，但寫法更加簡單
//#include <iostream>
//using namespace std;
//void swap(float*,float*);
//int main(){
//    float x,y;
//
//    cout <<"輸入2個小數，將它們用空格分開：";
//    cin>>x>>y;
//    swap(x, y);//
//    cout<<"2個數前後交換之後是："<<x<<"\t"<<y<<endl;
//    return 0;
//}
//
//void swap(float& a,float& b){
//    float temp = a;
//    a=b;
//    b=temp;
//}


//定義類別之間的加法
//#include <iostream>
//using namespace std;
//
//class Cs{
//    friend int operator+(Cs&,Cs&);
//
//private:
//    int Number;
//public:
//
//    Cs(int Cs_Number){
//        Number=Cs_Number;
//    }
//};
//
//int operator+(Cs& x,Cs& y){
//    return (x.Number+y.Number);
//}
//
//int main(){
//    Cs a(20);
//    Cs b(30);
//
//    cout<<"a+b="<<a+b<<endl;
//
//    return 0;
//}


//定義相同類別之間的代入
//#include <iostream>
//using namespace std;
//
//class Game{
//public:
//    int Game_Price;
//    char *Game_Name;
//    long Name_Len;
//
//    Game(){
//        int Game_Price;
//        Name_Len =0;
//        Game_Name = new char [Name_Len+1];
//        Game_Name[0]='\0';
//    }
//
//    Game(int x,char *M){
//        int Game_Price=x;
//        Name_Len =strlen(M);//配置記憶體
//        Game_Name = new char [Name_Len+1];
//        strcpy(Game_Name, M);
//    }
//    Game& operator=(Game&);
//
//};
//
//Game& Game::operator=(Game& Str)
//{
//    delete Game_Name;
//    Game_Name=new char[Name_Len+1];
//    strcpy(Game_Name, Str.Game_Name);
//    return *this;
//}
//
//int main(){
//    Game X(222, "ToRacing");
//    Game Y;
//    Y.Game_Name=X.Game_Name;
//
//    cout<<"類別為Y的遊戲名稱為："<<Y.Game_Name<<endl;
//    return 0;
//}

//類別的型態轉換
//#include <iostream>
//using namespace std;
//
//class CHD;
//class HKD{
//    float HK_Exchange_Rate;
//
//public:
//    HKD(){
//        HK_Exchange_Rate=40;
//    }
//    HKD(float Rate){
//        HK_Exchange_Rate=Rate;
//    }
//friend istream& operator >> (istream& in,HKD& Tmp_Money);
//    operator CHD();
//};
//
//class CHD{
//    float CH_Exchange_Rate;
//public:
//    CHD(){
//        CH_Exchange_Rate=40;
//    }
//    CHD(float Rate){
//        CH_Exchange_Rate=Rate;
//    }
//    friend ostream& operator << (ostream& out,CHD& Tmp_money);
//};
//
//istream& operator >> (istream& in,HKD& Tmp_Money){
//    cout << "輸入匯率比（香港：中國）"<<endl<<"1港元：人民幣";
//    in >> Tmp_Money.HK_Exchange_Rate;
//    return (in);
//};
//
//ostream& operator << (ostream& out,CHD& Tmp_Money){
//    out<<Tmp_Money.CH_Exchange_Rate<<"元"<<endl;
//    return (out);
//};
//
//HKD::operator CHD(){
//    float CH_Exchange_Rate=1/HK_Exchange_Rate;
//    return (CHD(CH_Exchange_Rate));
//};
//
//int main(){
//    HKD HK_Dollar;
//    CHD CH_Collar;
//    cin >> HK_Dollar;
//    CH_Collar = HK_Dollar;
//    cout << endl;
//    cout << "等於匯率比（中國：香港）"<<endl<<"1元人民幣："<<CH_Collar;
//
//    return 0;
//}


//用字串string 計算每行文字的字數。
//#include <iostream>
//#include <string>
//#include <cctype>
//using namespace std;
//int main(){
//    string inputline;
//    while(getline(cin,inputline)){
//        int n=0;
//        int i;
//        int leng = inputline.length();
//
//        for(i=0;i<leng;i++){
//            if(isalpha(inputline[i]) && !isalpha(inputline[i+1]))
//                n++;
//        }
//        cout<<n<<endl;
//    }
//    return 0;
//
//}

//用遞迴的方法去計算1＋2＋3＋....+n
//#include <iostream>
//using namespace std;
//
//int g(int n){
//    if(n==1)
//        return 1;
//    else
//        return g(n-1)+n;
//}
//
//int main(){
//    cout<<"g(6) = "<<g(6)<<endl;
//    return 0;
//}


//用多載去比較數值
//#include <iostream>
//using namespace std;
//
//int comp(int,int);
//float comp(float,float,float);
//int main(){
//    cout<<"1.1,3.1,2.2那個數更大？ 是"<<comp(1.1,3.1,2.2)<<endl;
//}
//
//int comp(int a,int b){
//    return(a>b)?a:b;
//}
//
//float comp(float a,float b,float c){
//    float x;
//    x=(a>b)?a:b;
//    return (c>x)?c:x;
//}

//未確定的變數形態，稱為泛型
//#include <iostream>
//using namespace std;
//template <class T>
//
//T add(T a,T b){
//    T c;
//    c=a+b;
//    return c;
//}
//
//int main(){
//    cout<<"4+5= "<<add(4,5)<<endl;
//    cout<<"2.2+3.3= "<<add(2.2,3.3)<<endl;
//}

//類別的解構子
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class MathsSubject{
//private:
//    char student[20];
//    int score;
//
//public:
//    MathsSubject();
//    void showstudent();
//    MathsSubject(char *name,int A);
//
//    ~MathsSubject(){
//        cout<<"將會被釋放的保存資源為："<<student<<endl;
//    }
//};
//
//MathsSubject::MathsSubject(){
//    strcpy(student,"家寶");
//    score=66;
//}
//
//MathsSubject::MathsSubject(char *name,int A){
//    strcpy(student, name);
//    score=A;
//}
//
//void MathsSubject::showstudent(){
//    cout<<"學生名字："<<student<<endl;
//    cout<<"數學得分："<<score<<endl;
//}
//
//void calculate_score(){
//    MathsSubject s1;
//    MathsSubject s2("小宁",65);
//    s1.showstudent();
//    s2.showstudent();
//}
//
//int main(){
//    calculate_score();
//
//    return 0;
//}

