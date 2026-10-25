* Bài 1: Find a pair with the given sum in an array

       -Dùng vòng lặp for để duyệt các phần tử

*Bài 2: Check if a subarray with 0 sum exists or not

       -Dùng vòng lặp for duyệt phần tử

*Bài 5: Find the duplicate element in a limited range array

       -Dùng vòng lặp for duyệt phần tử, nếu a[i]=a[j] thì in ra
       
*Bài 6: Find the largest subarray formed by consecutive integers

     -Tạo 1 mảng để đánh dấu giá trị của mảng a

     -Nếu vị trí đó đánh dấu khác 0 in ra giá trị của a => cho chỗ đó =0 (tiếp tục lặp)

*Bài 42: Sort an array in one swap whose two elements are swapped. Given an array where all its elements are sorted in increasing order except two swapped elements, sort it in linear time. Assume there are no duplicates in the array.

     -Dùng vòng lặp for để duyệt phần bên trái tìm số mà lớn hơn số sau

     -1 vòng for nữa để duyệt từ phải sang tìm số sau bé hơn số trước. lưu lại địa chỉ

     -Đổi chỗ

*Bài 74: Check if an array is formed by consecutive integers

     -Dùng vòng lặp sắp xếp lại dãy

     -Tạo vòng lặp để duyệt với các đk 

*Bài 78: Find all odd occurring elements in an array having a limited range of elements

     -For để xếp theo thứ tự tăng dần

     -Sử dụng đệ quy để cắt và xếp lại thành dãy có chữ số giống nhau

     -Tạo hàm để đếm các phần tử trong dãy, kiểm tra nếu số phần tử lẻ thì in ra

*Bài 87: Merging Overlapping Intervals. Given a set of intervals, print all non-overlapping intervals after merging the overlapping intervals.

     -Tạo 1 mảng để luw lại giá trị của các mảng nhỏ 2 phần tử

     -Viết hàm nhập với điều kiện nếu phần tử có địa chỉ lẻ lớn hơn ptu địa chỉ lẻ đầu tiên và nhỏ hơn phần tử chẵn kế tiếp thì in phần tử đầu và phần tử đó.

     -Sử dụng đệ quy tách thành các mảng và tiếp tục nhập mảng

*Bài 115: Segregate positive and negative integers in linear time

     -Tạo mảng phụ để lưu phần tử sau duyệt vào

     -Với x<0 lưu vào bên trái và x>0 lưu vào bên phải. Sử dụng k để làm địa chỉ của mảng được tạo

*Bài 118: Interpolation search

     -xếp mảng theo thứ tự tăng dần

     -Tìm mốc d. Nếu d gần n-1 hơn thì duyệt thì d-> n-1 nếu d gần 0 hơn thì duyệt thì 0->d

     -d=((x-a[o])/(a[n-1]-a[o]))*(n-1)

     
     
