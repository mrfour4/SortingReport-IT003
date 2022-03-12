# SortingReport-IT003
Thực nghiệm các phương pháp sắp xếp tới hạn
# Thuật toán Heapsort
Heapsort là một thuật toán sắp xếp nội, nó không cần thêm bộ nhớ để hoạt động.
  1. Thuật toán Heap Sort để sắp xếp theo thứ tự tăng dần:<br>
    - Xây dựng một heap từ dữ liệu đầu vào<br>
    - Tại thời điểm này, mục lớn nhất được lưu trữ ở gốc của heap. Thay thế nó bằng mục cuối cùng của heap, sau đó giảm kích thước của heap đi 1. Cuối cùng, ta có một gốc heap.<br>
    - Lặp lại bước 2 trong khi kích thước của heap lớn hơn 1.<br>
  2. Độ phức tạp về thời gian của Heap Sort là O (nLogn).
  3.  Ứng dụng:<br>
    - Sắp xếp một mảng gần được sắp xếp xong (hoặc K đã sắp xếp).<br>
    - Tìm k phần tử lớn nhất (hoặc nhỏ nhất) trong một mảng.<br>
    - ...
# Thuật toán Merge sort
Merge sort là một thuật toán sắp xếp bằng phương pháp chia để trị. Nó chia mảng đầu vào thành hai nửa, gọi chính nó cho hai nửa và sau đó hợp nhất hai nửa đã sắp xếp.
  1. Thuật toán<br>
    MergeSort (arr [], l, r)<br>
       Nếu r > l<br>
     - Tìm điểm giữa để chia mảng thành hai nửa:<br>
          Ở giữa m = (l + r) / 2<br>
     - Hợp nhất cuộc gọi Sắp xếp cho nửa đầu:<br>
         Gọi mergeSort(arr, l, m)<br>
     -  Hợp nhất cuộc gọi Sắp xếp cho nửa sau:<br>
        Gọi mergeSort(arr, m + 1, r)<br>
     - Hợp nhất hai nửa được sắp xếp ở bước 2 và 3:<br>
         Gọi merge(arr, l, m, r)<br></p> </blockquote>
  2. Độ phức tạp về thời gian: ổn định với O (nlogn)<br>
  3. Ứng dụng:<br>
    - Vấn đề đảo ngược số lượng<br>
    - Được sử dụng trong sắp xếp bên ngoài<br>
    - ...
# Thuật toán Quicksort
Thuật toán Quick Sort (Sắp xếp nhanh) là một quy trình có hệ thống để sắp xếp các phần tử của một mảng. Giống như Merge Sort, QuickSort là một thuật toán sử dụng cách thức chia để trị.
  1. Thuật toán sẽ chọn ra một phần tử trong mảng để làm điểm đánh dấu gọi là pivot. Sau khi chọn được điểm đánh dấu, nó sẽ chia mảng đó thành hai mảng con bằng cách so sánh với pivot đã chọn. Một mảng sẽ bao gồm các phần tử nhỏ hơn hoặc bằng pivot và mảng còn lại luôn lớn hơn hoặc bằng pivot.<br><br> Sau đó, quá trình này được lặp lại đủ số lần cho đến khi các mảng nhỏ có thể được sắp xếp một cách dễ dàng để tạo ra một tập dữ liệu được sắp xếp đầy đủ.
  2. Độ phức tạp về thời gian: Trong các trường hợp tốt nhất, trung bình và xấu nhất, thuật toán Quick Sort thực hiện với độ phức tạp O (n), O (n log n) và O (n ^ 2) tương ứng. Đây là một trong những thuật toán sắp xếp hiệu quả nhất khi nói đến độ phức tạp về thời gian. 
  
