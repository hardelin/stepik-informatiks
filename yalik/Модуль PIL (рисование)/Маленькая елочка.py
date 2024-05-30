from PIL import Image, ImageDraw

s = int(input())

img = Image.new('RGB', (24 * s, 40 * s), 'white')
draw = ImageDraw.Draw(img)
rect = [10.5 * s, 32 * s, 13.5 * s, 36 * s]

t1 = [(12 * s, 3 * s), (6 * s, 11 * s), (18 * s, 11 * s)]
t2 = [(12 * s, 8 * s), (4 * s, 20 * s), (20 * s, 20 * s)]
t3 = [(2 * s, 32 * s), (12 * s, 16 * s), (22 * s, 32 * s)]

draw.polygon(t1, '#00b050')
draw.polygon(t2, '#00b050')
draw.polygon(t3, '#00b050')
draw.rectangle(rect, fill='#7f6000')

img.save('fir_tree.png')
img.close()
