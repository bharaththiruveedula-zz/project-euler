solved = 0
i = 380
while True:
	if solved == 1:
		break
	for x in range(1,21):
		if i%x != 0:
			break
		if x == 20:
			solved =1
			print i
	i = i+380
