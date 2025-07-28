# Thư Viện Driver STM32 Sử Dụng Thanh Ghi

Thư viện driver bare-metal cho vi điều khiển STM32F1 sử dụng thao tác trực tiếp với thanh ghi.

## Tính Năng

- Điều khiển GPIO
- ADC (Bộ chuyển đổi tương tự - số)
- Giao tiếp UART với hỗ trợ printf đa tham số
- Hoạt động Timer (TIM)
- Ngắt ngoài (EXTI)
- Cấu hình đồng hồ hệ thống (RCC)
- Timer SysTick
- AFIO (Alternate Function I/O)
- Triển khai Ring buffer

## Cấu Trúc Dự Án

```
├── Core/                 # Mã ứng dụng chính
├── Drivers/              # Triển khai driver
│   ├── inc/              # File header
│   ├── src/              # File nguồn
│   ├── ring_buffer/      # Triển khai ring buffer
│   └── variadic_uart/    # UART với hỗ trợ printf
├── Example/              # Ví dụ sử dụng
├── System/               # Header cấp hệ thống
└── ARM-MDK/              # File dự án Keil MDK-ARM
```

## Bắt Đầu

1. Import dự án vào Keil MDK-ARM
2. Cấu hình thiết bị STM32F1 đích của bạn
3. Build và nạp vào vi điều khiển

## Ví Dụ

Kiểm tra thư mục `Example/` để xem:
- Ví dụ sử dụng ring buffer
- Ví dụ UART với printf đa tham số

## Giấy Phép

Dự án này là mã nguồn mở và có sẵn theo Giấy phép MIT.
