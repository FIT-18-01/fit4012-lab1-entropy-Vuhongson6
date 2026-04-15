# Report 1 Page – FIT4012 Lab 1

## 1. Mục tiêu
- Hiểu cách tính entropy của một chuỗi ký tự.
- Bổ sung hàm tính độ dư thừa thông tin từ entropy.
- Cài đặt nghịch đảo modulo bằng thuật toán Euclid mở rộng.
- Kiểm thử chương trình với các test case thực tế.

## 2. Cách làm
- Đọc hiểu chương trình entropy mẫu.
- Bổ sung hàm tính redundancy.
- Hoàn thiện hàm mod_inverse().
- Chạy thử trên nhiều test case.

## 3. Kết quả chính
### 3.1 Entropy và redundancy
| Input | Entropy | Redundancy | Nhận xét |
|---|---:|---:|---|
| aaaa | 0.00 | 8.00 | Entropy thấp vì chỉ có 1 ký tự, redundancy cao |
| abcd | 2.00 | 6.00 | Entropy cao hơn vì 4 ký tự khác nhau |
| hello world | 2.85 | 5.15 | Entropy trung bình với sự phân bố ký tự |

### 3.2 Modulo inverse
| a | m | Kết quả mong đợi | Kết quả chương trình |
|---:|---:|---|---|
| 3 | 7 | 5 | 5 |
| 10 | 17 | 12 | 12 |
| 6 | 9 | Không tồn tại | Không tồn tại |

## 4. Kết luận
Bài lab giúp tôi nắm được cách tính entropy của chuỗi và hiểu độ dư thừa thông tin dựa trên entropy thực tế. Việc cài đặt nghịch đảo modulo bằng thuật toán Euclid mở rộng giúp tôi thấy rõ ứng dụng toán học trong mật mã và giải thuật. Khó khăn nhất là xác định cách biểu diễn entropy trong code, nhưng sau khi chạy thử với nhiều test case, tôi đã củng cố được ý nghĩa của entropy và redundancy.