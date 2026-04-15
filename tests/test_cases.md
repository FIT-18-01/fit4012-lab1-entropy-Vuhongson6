# Test cases – FIT4012 Lab 1

Đánh dấu [x] khi đã chạy và kiểm tra kết quả.

## 1. Entropy / Redundancy
- [X] Input: `aaaa` -> entropy thấp, redundancy cao
- [X] Input: `abcd` -> entropy cao hơn `aaaa`
- [X] Input: `hello world` -> entropy và redundancy được tính hợp lệ

## 2. Modulo inverse
- [X] `a=3, m=7` -> nghịch đảo modulo là 5
- [X] `a=10, m=17` -> nghịch đảo modulo là 12
- [X] `a=6, m=9` -> không tồn tại nghịch đảo modulo

## 3. Ghi chú
Các test case cơ bản đã được kiểm tra và cho kết quả đúng theo lý thuyết.
Chương trình xử lý đúng các trường hợp đặc biệt như chuỗi lặp, chuỗi đa dạng và trường hợp không tồn tại nghịch đảo modulo.
Nhóm có thể mở rộng thêm test với chuỗi dài hoặc giá trị lớn để kiểm tra độ ổn định.