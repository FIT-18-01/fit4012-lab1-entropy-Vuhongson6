# Report 1 Page – FIT4012 Lab 1

## 1. Mục tiêu
Mục tiêu của bài lab là hiểu và cài đặt cách tính entropy và redundancy của một chuỗi ký tự, đồng thời áp dụng thuật toán Euclid mở rộng để tìm nghịch đảo modulo.

## 2. Cách làm
- Đọc hiểu chương trình entropy mẫu.
- Bổ sung hàm tính redundancy dựa trên công thức R = log2(N) - H(X).
- Hoàn thiện hàm mod_inverse() bằng thuật toán Euclid mở rộng.
- Chạy thử chương trình với nhiều test case khác nhau để kiểm tra tính đúng đắn.

## 3. Kết quả chính
### 3.1 Entropy và redundancy
| Input         | Entropy | Redundancy | Nhận xét |
|---------------|--------:|-----------:|----------|
| aaaa          | 0       | 8          | Chuỗi lặp hoàn toàn, entropy thấp |
| abcd          | 2       | 6          | Các ký tự khác nhau, entropy cao hơn |
| hello world   | ~3      | ~5         | Phân bố không đều, entropy trung bình |

### 3.2 Modulo inverse
| a  | m  | Kết quả mong đợi | Kết quả chương trình |
|---:|---:|------------------|----------------------|
| 3  | 7  | 5                | 5                    |
| 10 | 17 | 12               | 12                   |
| 6  | 9  | Không tồn tại    | Không tồn tại        |

## 4. Kết luận
Qua bài lab, em đã hiểu rõ cách tính entropy để đo mức độ ngẫu nhiên của dữ liệu và mối liên hệ giữa entropy và redundancy. Em cũng nắm được cách sử dụng thuật toán Euclid mở rộng để tìm nghịch đảo modulo và điều kiện tồn tại của nó. Khó khăn lớn nhất là hiểu cách hoạt động của thuật toán Euclid mở rộng, nhưng sau khi thực hành và kiểm tra lại kết quả, em đã hiểu rõ hơn về nguyên lý của nó.
