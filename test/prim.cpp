#include <iostream>

using namespace std;

/*void prim(){
	int i,n,sum=0;
	cout<<"Please input a number to detect whether it is a prime number: ";
	cin >> n;
	for(i=1;i<=n;i++){


		if(n%i==0){
			sum++;
		}

	}
	if(sum==2){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
}


int main(){
	prim();
}
*/
int main()
{
    int a,b,x,y,sum=0; //a、b為範圍值(前者、後者)；x為外迴圈；y為內迴圈
    while(true)  //無窮迴圈，目的要讓使用者連續輸入資料
    {
        cout << "請輸入二整數，其將成為一個範圍，本程式會找出範圍中的質數:";
        cin >> a >> b ;
 
        if(b>a&&b>=2) //若b>a(後者大於前者)，且b要大於等於2，因為2是最小的質數，若b小於2，那就找不到質數了
        {
            cout << a << "~" << b << "質數有:"; //提示顯示出來的數字是什麼
            if (a<=2) //如果a小於2的話，那範圍內就有包含2，所以有質數2
            cout << "2" << " ";
            for(x=a;x<=b;x++) //x外迴圈，x範圍為a~b
            {
                for(y=2;y<=x;y++) //y內迴圈
               {
                   if(x%y==0) //判斷非質數和質數，若條件式為真，則跳出迴圈
                    break;  //跳出y內迴圈
                   else if (x==y+1) //判斷是否為質數
                    cout << sum+x << " "; //輸出x值，就是質數
                 }
            }
        }
        else if (a>b&&a>=2) //若a>b(前者大於後者)，則下面都跟上面寫法相反，a要改成b，b要改成a，其它不去更動
        {
            cout << b << "~" << a << "質數有:";
            if (b<=2)
            cout << "2" << " ";
            for(x=b;x<=a;x++)
            {
                for(y=2;y<=x;y++)
                {
                    if(x%y==0)
                    break;
                    else if (x==y+1)
                    cout << x << " ";
                }
            }
        }
        else //使用者可能輸入二相等數，或是範圍值內完全沒有質數
        cout << "輸入範圍有誤，可能是二數相等，又可能是因為範圍值內完全沒有質數";
        cout << endl ; //換行，然後跳到while迴圈敘述最上端，繼續要求使用者輸入資料
    }
 
 
}