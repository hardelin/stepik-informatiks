from PIL import Image, ImageDraw

a = list(map(int, input().split()))
img_size = tuple(a[0:2])
s = a[2]
img = Image.new('RGB', img_size, 'white')
draw = ImageDraw.Draw(img)
flag = True
cnt = s
draw.rectangle((0, 0, cnt, img_size[1]), 'white')
type = 1
while flag:
    if type == 0:  # white line
        draw.rectangle((cnt, 0, cnt, img_size[1]), 'white')
        cnt += s
    if type == 1:  # black line
        draw.rectangle((cnt, 0, cnt + s // 4, img_size[1]), 'black')
        cnt += (s // 4)
    if type == 2:  # yellow line
        draw.rectangle((cnt, 0, cnt + s, img_size[1]), (255, 192, 0))
        cnt += s
    if type == 3:  # black line
        draw.rectangle((cnt, 0, cnt + s // 4, img_size[1]), 'black')
        cnt += (s // 4)
    type += 1
    if type == 4:
        type = 0
    if cnt > img_size[0]:
        flag = False

img.save('crossing.png')
img.close()
