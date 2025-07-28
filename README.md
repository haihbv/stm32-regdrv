# 🚀 Thư Viện Driver STM32 Sử Dụng Thanh Ghi

![STM32](https://img.shields.io/badge/STM32-F1-blue?style=for-the-badge&logo=stmicroelectronics)
![C](https://img.shields.io/badge/C-Language-orange?style=for-the-badge&logo=c)
![Keil](https://img.shields.io/badge/Keil-MDK--ARM-red?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)

> 🔧 Thư viện driver bare-metal cho vi điều khiển STM32F1 sử dụng thao tác trực tiếp với thanh ghi.

## ✨ Tính Năng

- **Điều khiển GPIO** - Cấu hình và điều khiển các chân GPIO
- **ADC** (Bộ chuyển đổi tương tự - số) - Đọc giá trị analog
- **Giao tiếp UART** với hỗ trợ printf đa tham số
- **Hoạt động Timer (TIM)** - Định thời và PWM
- **Ngắt ngoài (EXTI)** - Xử lý ngắt từ GPIO
- **Cấu hình đồng hồ hệ thống (RCC)** - Quản lý clock
- **Timer SysTick** - Delay và scheduling
- **AFIO** (Alternate Function I/O) - Cấu hình chức năng thay thế
- **Triển khai Ring buffer** - Buffer vòng tròn hiệu quả

## 📁 Cấu Trúc Dự Án

```
📦 stm32-regdrv
├── 📂 Core/                 // Mã ứng dụng chính
├── 📂 Drivers/              // Triển khai driver
│   ├── 📂 inc/              // File header
│   ├── 📂 src/              // File nguồn
│   ├── 📂 ring_buffer/      // Triển khai ring buffer
│   └── 📂 variadic_uart/    // UART với hỗ trợ printf
├── 📂 Example/              // Ví dụ sử dụng
├── 📂 System/               // Header cấp hệ thống
└── 📂 ARM-MDK/              // File dự án Keil MDK-ARM
```

## 🚀 Bắt Đầu

> **Yêu cầu:** Keil MDK-ARM IDE và STM32F1 development board

### 📥 Cài Đặt

1. **Import dự án** vào Keil MDK-ARM
2. **Cấu hình** thiết bị STM32F1 đích của bạn  
3. **Build** và **nạp** vào vi điều khiển

### 🎯 Sử Dụng Nhanh

```c
#include "gpio.h"
#include "uart.h"

int main(void) {
    // Khởi tạo GPIO
    GPIO_Init();
    
    // Khởi tạo UART
    UART_Init();
    
    // Bật LED
    GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET);
    
    while(1) {
        // Code của bạn
    }
}
```

## 📖 Ví Dụ

Kiểm tra thư mục `📂 Example/` để xem:
- **Ví dụ sử dụng ring buffer** - Quản lý dữ liệu hiệu quả
- **Ví dụ UART với printf đa tham số** - Debug và giao tiếp dễ dàng

## 📄 Giấy Phép

```
MIT License - Tự do sử dụng cho mọi mục đích
```

---

<div align="center">

**⭐ Nếu dự án hữu ích, hãy cho một star! ⭐**

[![GitHub stars](https://img.shields.io/github/stars/haihbv/stm32-regdrv?style=social)](https://github.com/haihbv/stm32-regdrv/stargazers)

</div>
