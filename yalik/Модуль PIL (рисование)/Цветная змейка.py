from PIL import Image, ImageDraw

circles = int(input())
lcol = input()
rcol = input()

size = 100 + 250 * circles + 130 * (circles - 1) + 100

img = Image.new('RGB', (400, size), '#777')
draw = ImageDraw.Draw(img)
if circles != 1:
    for i in range(circles - 1):
        draw.arc((75, 100 + 380 * i, 325, 350 + 380 * i), 90, 270, fill=lcol, width=60)
        draw.arc((75, 100 + 190 + 380 * i, 325, 350 + 190 + 380 * i), -90, 90, fill=rcol, width=60)
draw.arc((75, 100 + 380 * (circles - 1), 325, 350 + 380 * (circles - 1)), 90, 270, fill=lcol, width=60)

img.save('colored_snake.png')
img.close()
