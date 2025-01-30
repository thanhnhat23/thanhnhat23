import sys
import time

lyrics = [
    "🎵 Em gieo bao tình yêu ~ ❤️", #line 1
    "       ngàn lời vàn trong lúc say 🍾, \n", #line 2
    "🎶 Rồi gieo niềm đau lời mật ngọt em có hay,", #line 3
    "       môi nơi môi hôn 🫦 vội trao", #line 4
    "       mà ngàn người đang ước ao, \n", #line 5
    "🎵 Em như hoa quỳnh đen 🥀 nên em chỉ đẹp vào ban đêm 🌃 \n", #line 6
    "🎶 Gửi gắm ân tình làm gì để rồi phải chia ly 🤦", #line 7
    "       là từ em thôi không nói trước muôn lối ai sẽ rời đi \n", #line 8
    "🎵 Em bên tôi làm chi để rồi bên nhau có được gì 😿", #line 9
    "       vài câu nói yêu thôi em theo ai cứ vậy đi ~ 🫠" #line 10
]

# Thiết lập thời gian delay giữa các dòng
delays = [0.001, 0.6, 0.5, 0.1, 0.6, 2.5, 0.9, 2.3, 0.03, 0.5]
text_deplay = [0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05]
print("🎶 Từ em mà ra 🎧")
time.sleep(4.8)  # Chờ 4.8s trước khi bắt đầu in chữ

# In từng dòng với hiệu ứng gõ chữ 
for i, line in enumerate(lyrics):
    for char in line:
        sys.stdout.write(char)
        sys.stdout.flush()
        time.sleep(0.04)  # Tốc độ gõ chữ
    print()  # Xuống dòng
    time.sleep(delays[i])  # Độ trễ mỗi dòng