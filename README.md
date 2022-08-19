## Quản trị hệ nhúng theo chuẩn ITSS (Team ADD)

#### Made by Anh Tong-Ngoc (A), Dat Vu-Tuan (D) & Diem Nguyen-Thi-Ngoc (D)

### Giữa kỳ

- **Mục tiêu**: Điều khiển xe Arduino chạy theo hình số 8
- **Link đến mã nguồn**: https://github.com/tonganh/laptrinh-nhung

### Cuối kỳ

- **Mục tiêu**: Nhận dạng giọng nói tiếng việt, điều khiển xe chạy theo mệnh lệnh
- **Thiết lập android**:
  - Tham khảo 1: [Viblo Speech To Text Android](https://viblo.asia/p/huong-dan-lam-viec-voi-speech-to-text-trong-android-aRBeXnmpvWE)
  - Tham khảo 2: [Bluetooth API Scanner Android](https://viblo.asia/p/tim-hieu-ve-bluetooth-api-tren-android-tao-mot-ung-dung-bluetooth-scanner-3wjAM7JARmWe)
  - Tham khảo 3: [Bluetooth Github API](https://github.com/cong91/BluetoothScannerTutorial)
- **Thiết lập code xe arduino**:
  - Link đến mã nguồn: https://github.com/tuanvu9981/Bluetooth_Speech_To_Text_ArduinoCar/blob/master/arduno-code/sketch_apr18a.ino

- **Thành quả:**
<p align="center">
  <img 
    src="https://github.com/tuanvu9981/Bluetooth_Speech_To_Text_ArduinoCar/blob/master/image/car.jpg" 
    width="90%" 
  />
  <br/>
  <p align="center">
    <b>Arduino Car & Android Code </b>
  </p>
</p>

- **Giao diện ứng dụng:**

<table align="center">
  <tr align="center">
    <th>
        <img 
            src="https://github.com/tuanvu9981/Bluetooth_Speech_To_Text_ArduinoCar/blob/master/image/app1.png"
            width="80%" 
            height="80%"
        />
    </th>
    <th>
        <img 
            src="https://github.com/tuanvu9981/Bluetooth_Speech_To_Text_ArduinoCar/blob/master/image/app4.jpg"
            width="80%" 
            height="80%"
        />
    </th>
  </tr>

  <tr align="center">
    <td>Màn hình ban đầu</td>
    <td>
      <p>Thứ tự thao tác và kết quả</p>
      <ul>
        <li>Kết nối bluetooth với máy điện thoại với mã code 123 hoặc 123456</li>
        <li>Chọn 1. Lấy danh sách các thiết bị bluetooth đã ghép đôi với smartphone</li>
        <li>Chọn 2: Tạo kết nối giữa điện thoại và thiết bị có id trùng với số trên nút</li>
        <li>Chọn 3: Nhấn nút micro, nói mệnh lệnh và chạm micro lần 2 để kết thúc</li>
      </ul>  
    </td>
  </tr>
</table>
