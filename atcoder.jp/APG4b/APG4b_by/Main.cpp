#include <bits/stdc++.h>
using namespace std;

// 以下に、24時間表記の時計構造体 Clock を定義する
class Clock{
  private:
    int hour;
    int minute;
    int second;
  public:
  	void set(int h,int m,int s){
      this->hour=h;
      this->minute=m;
      this->second=s;
    }
  	
  	string to_str(){
      string time;
      
      if(hour<10)time+='0';
      time+=to_string(hour);
      time+=':';
      
      if(minute<10)time+='0';
      time+=to_string(minute);
      time+=':';
      
      if(second<10)time+='0';
      time+=to_string(second);
      
      return time;
    }
  	
  	void shift(int diff_second){
      int diff_hour;
      int diff_minute;
      diff_hour=diff_second/3600;
      diff_second=diff_second%3600;
      diff_minute=diff_second/60;
      diff_second=diff_second%60;
      
      this->second+=diff_second;
      
      if(this->second>=60){
        this->minute++;
        this->second-=60;
      }else if(this->second<0){
        this->minute--;
        this->second+=60;
      }
      
      this->minute+=diff_minute;
      
      if(this->minute>=60){
        this->hour++;
        this->minute-=60;
      }else if(this->minute<0){
        this->hour--;
        this->minute+=60;
      }
      
      this->hour+=diff_hour;
      
      if(this->hour>=24){
        this->hour-=24;
      }else if(this->hour<0){
        this->hour+=24;
      }
    }
};

// -------------------
// ここから先は変更しない
// -------------------

int main() {
  // 入力を受け取る
  int hour, minute, second;
  cin >> hour >> minute >> second;
  int diff_second;
  cin >> diff_second;

  // Clock構造体のオブジェクトを宣言
  Clock clock;

  // set関数を呼び出して時刻を設定する
  clock.set(hour, minute, second);

  // 時刻を出力
  cout << clock.to_str() << endl;

  // 時計を進める(戻す)
  clock.shift(diff_second);

  // 変更後の時刻を出力
  cout << clock.to_str() << endl;
}
