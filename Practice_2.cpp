#include <iostream>

const int len = 50;

class long_num
{
private:
    int m_num[2 * len + 1];
    int m_num_len;

public:
    long_num(char number[2 * len + 1])
    {
        for (int i = 0; i < strlen(number); i++)
        {
            m_num[i] = number[strlen(number) - i - 1] - 48;
        }
        for (int i = strlen(number); i < len; i++)
        {
            m_num[i] = 0;
        }

        m_num_len = strlen(number);
    }

    void number()
    {
        for (int i = 0; i < m_num_len; i++)
        {
            std::cout << m_num[i];
        }

        std::cout << " " << m_num_len << std::endl;
    }

    void swap()
    {
        for (int i = 0; i < m_num_len; i++)
        {
            std::swap(m_num[i], m_num[m_num_len - i - 1]);
        }
    }

    int* get_num()
    {
        return m_num;
    }

    void add(long_num num2)
    {
        int* number2[2 * len + 1] = num2.get_num();
    }
        
};





int main()
{
    char num1[2*len + 1], num2[2*len + 1];
    std::cin >> num1;
    std::cin >> num2;

    //std::cout << num << " " << strlen(num) << std::endl;

    long_num l_num1 = long_num(num1);
    long_num l_num2 = long_num(num2);

    //l_num1.number();
    //l_num2.number();

    std::cout << l_num1.get_num();

}
