from PIL import Image, ImageDraw

img = Image.new('RGB', (280, 200), '#CCECFF')
draw = ImageDraw.Draw(img)
# brown square
draw.rectangle((40, 110, 80, 150), '#C55A11')
# blue rect
draw.rectangle((80, 90, 160, 150), '#0070C0')
# green rect
draw.rectangle((160, 50, 240, 150), '#548235')
# red square
draw.rectangle((80, 60, 110, 90), 'red')
# white rect (window in green)
draw.rectangle((185, 60, 215, 100), 'white')
# brown rect
draw.rectangle((150, 40, 250, 50), '#C55A11')
# left triangle
draw.polygon((40, 110, 60, 75, 80, 110), '#FFC000')
# middle triangle
draw.polygon((80, 60, 95, 34, 110, 60), '#FFC000')
# left wheel
# !FIX IT
draw.ellipse((80, 140, 110, 170), 'black')
# middle wheel
draw.ellipse((120, 130, 160, 170), 'black')
# right wheel
draw.ellipse((180, 130, 220, 170), 'black')


def train(file_name):
    img.save(file_name)
    img.close()
