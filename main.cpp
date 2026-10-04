#include <iostream>   // std::cout 在这个头文件里
#include <string> // std::string 在这里
#include <vector>
#include <map>
#include <limits>
#include "bill.h"


int main() {
    std::vector<Bill> bills;
    while(1){
        std::cout<<"请输入您的选择:"<<std::endl;
        std::cout<<"1.记一笔 2.退出"<<std::endl;
        std::string choice;
        std::getline(std::cin,choice);
        if(choice == "1"){
            std::cout<<"请输入账单数目:"<<std::endl;
            std::string line;
            double amount;
            while(1){
                try{
                    std::getline(std::cin,line);
                    amount = std::stod(line);
                    break;
                }catch(...){
                    std::cout<<"请正确输入数字"<<std::endl;
                }
            }
            std::cout<<"请输入账单类别:"<<std::endl;
            std::string category;
            std::getline(std::cin,category);
            std::cout<<"请输入账单备注:"<<std::endl;
            std::string note;
            std::getline(std::cin,note);
            std::cout<<"请输入账单日期:"<<std::endl;
            std::string date;
            std::getline(std::cin,date);
            Bill b = {amount,category,note,date};
            bills.push_back(b);
        }
        else if(choice == "2"){
            break;
        }
        else{
            std::cout<<"输入无效"<<std::endl;
        }
    }
    double total = 0;
    std::map<std::string,double> summary;
    for(const Bill& b : bills)
    {
        b.print();
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
