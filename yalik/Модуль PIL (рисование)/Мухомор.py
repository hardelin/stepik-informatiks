from PIL import Image, ImageDraw

font = tuple(map(int, input().split()))
r = int(input())

img = Image.new('RGB', (r * 20, r * 22), font)
draw = ImageDraw.Draw(img)

# leg
draw.ellipse((7 * r, 7 * r, 13 * r, 21 * r), fill=(255, 250, 235))
# head
draw.chord((3 * r, 3 * r, 17 * r, 17 * r), -180, 0, fill=(192, 0, 0))
# 3 dots on head
draw.ellipse((5 * r, 7 * r, 7 * r, 9 * r), fill=(255, 255, 255))
draw.ellipse((9 * r, 4 * r, 11 * r, 6 * r), fill=(255, 255, 255))
draw.ellipse((13 * r, 7 * r, 15 * r, 9 * r), fill=(255, 255, 255))
# fill bottom of the leg with white color
draw.rectangle((0, 20 * r, 20 * r, 22 * r), fill=font)
# grass
draw.rectangle((3 * r, 19 * r, 17 * r, 20 * r), fill=(146, 208, 80))

img.save('mushroom.png')
img.close()
