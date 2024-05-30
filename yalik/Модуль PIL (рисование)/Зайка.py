from PIL import Image, ImageDraw

r = int(input())

img = Image.new('RGB', (r * 37, r * 27), (255, 255, 255))
draw = ImageDraw.Draw(img)

# face #255, 242, 204
draw.ellipse((8 * r, 12 * r, 26 * r, 26 * r), fill=(255, 242, 204), outline=2, width=2)
# left ear #255, 242, 204
draw.ellipse((10 * r, 1 * r, 14 * r, 15 * r), fill=(255, 242, 204), outline=2, width=2)
# inside left ear #254, 214, 244
draw.ellipse((11 * r, 5 * r, 13 * r, 14 * r), fill=(254, 214, 244), outline=2, width=2)
# right ear #255, 242, 204
draw.ellipse((22 * r, 13 * r, 36 * r, 17 * r), fill=(255, 242, 204), outline=2, width=2)
# inside right ear #254, 214, 244
draw.ellipse((23 * r, 14 * r, 32 * r, 16 * r), fill=(254, 214, 244), outline=2, width=2)
# left eye #0, 0, 0
draw.ellipse((14 * r, 17 * r, 15 * r, 18 * r), fill=(0, 0, 0), outline=2, width=2)
# right eye #0, 0, 0
draw.ellipse((19 * r, 17 * r, 20 * r, 18 * r), fill=(0, 0, 0), outline=2, width=2)
# nose #192, 0, 0
draw.ellipse((16 * r, 19 * r, 18 * r, 20 * r), fill=(192, 0, 0), outline=2, width=2)
# line up left
draw.line((10 * r, 19 * r, 15 * r, 20 * r), fill=(0, 0, 0), width=2)
# line down left
draw.line((11 * r, 22 * r, 15 * r, 21 * r), fill=(0, 0, 0), width=2)
# line up right
draw.line((19 * r, 20 * r, 24 * r, 18 * r), fill=(0, 0, 0), width=2)
# line down right
draw.line((19 * r, 21 * r, 23 * r, 22 * r), fill=(0, 0, 0), width=2)
# left tooth
draw.rectangle((16.5 * r, 21 * r, 17 * r, 22 * r), fill=(255, 255, 255), outline=2, width=2)
# right tooth
draw.rectangle((17 * r, 21 * r, 17.5 * r, 22 * r), fill=(255, 255, 255), outline=2, width=2)

img.save('cute_bunny.png')
img.close()
