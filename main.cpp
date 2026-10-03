#include <iostream>   // std::cout 在这个头文件里
#include <string> // std::string 在这里
#include <vector>
#include <map>

struct Bill {
    double amount;
    std::string category;
    std::string note;
    std::string date;
};

int main() {
    Bill b0;                          // 创建一个 Bill 对象
    b0.amount = 23.5;                 // 用点号访问字段
    b0.category = "交通";
    b0.note = "食堂午饭";
    b0.date = "2026-10-03";
    Bill b1={38,"餐饮","无","2026-10-03"};
    Bill b2={14,"餐饮","无","2026-10-03"};
    std::vector<Bill> bills;
    bills.push_back(b0);
    bills.push_back(b1);
    bills.push_back(b2);
    double total = 0;
    std::map<std::string,double> summary;
    for(const Bill& b : bills)
    {
        std::cout<<b.category<<" "<<b.amount<<std::endl;
        summary[b.category]+=b.amount;
        total+=b.amount;
    }
    std::cout<<"总金额:"<<total<<std::endl;
    for(const auto& kv : summary)
    {
        std::cout<<kv.first<<"合计:"<<kv.second<<std::endl;
    }

    return 0;
}
