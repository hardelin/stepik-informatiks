from PIL import Image, ImageDraw

img_size = list(map(int, input().split()))
img = Image.new('RGB', img_size, 'white')
draw = ImageDraw.Draw(img)
r, g, b = map(int, input().split())
y = 0
while r < 255 or g < 255 or b < 255:
    draw.line((0, y, img_size[0], y), (r, g, b), 2)
    r += 2
    g += 2
    b += 2
    y += 2
img.save('sunrise.png')
img.close()
