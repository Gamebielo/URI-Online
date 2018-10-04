dia_inicial = int(input().split()[1])
#'split()[1]' pois só o 2º valor da entrada me interessa

hora = input().split(":")
hora_inicial = int(hora[0])
min_inicial = int(hora[1])
seg_inicial = int(hora[2])

dia_final = int(input().split()[1])

hora = input().split(":")
hora_final = int(hora[0])
min_final = int(hora[1])
seg_final = int(hora[2])

dias = dia_final - dia_inicial

horas = hora_final - hora_inicial

if horas < 0:
    horas += 24
    dias -= 1

minutos = min_final - min_inicial

if minutos < 0:
    minutos += 60
    horas -= 1

segundos = seg_final - seg_inicial

if segundos < 0:
    segundos += 60
    minutos -= 1

print("{} dia(s)".format(dias))
print("{} hora(s)".format(horas))
print("{} minuto(s)".format(minutos))
print("{} segundo(s)".format(segundos))
