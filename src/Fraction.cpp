class Fraction{
    private:
        int numerator;// tử số
        int denominator;// Mẫu số
    public:
    // NOTE: xây dựng các hàm khởi tạo
    Fraction();// khởi tạo mặc định
    Fraction(int numerator, int denominator);// khởi tạo có đối số
    Fraction(const Fraction &fraction);// Khởi tạo sao chép
    // NOTE: xây dựng hàm hủy
    ~Fraction(){};
};
Fraction::Fraction(){
    this->numerator = 0;
    this->denominator =1;
}
Fraction::Fraction(int numerator,int denominator){
    this->numerator = numerator;
    this->denominator = denominator;
}
Fraction::Fraction(const Fraction &fraction){
    this->numerator = fraction.numerator;
    this->denominator = fraction.denominator;
}
int main(){
    Fraction fraction;// khởi tạo mặc định, tự gọi
    Fraction fraction2 = Fraction(3,2);// khởi tạo phân số 3/2
    Fraction fraction3 = fraction2;// Khởi tạo sao chép. fraction 3 có giá trị giống fraction2
    return 0;
}