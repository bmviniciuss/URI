#2157 - Sequência Espelho
# -*- coding: utf-8 -*-
def main():
    casos = int(input())
    while(casos > 0):
        inicio, final = map(int, input().split())
        a = ""

        for i in range(inicio, final +1):
            a += str(i)

        casos -=1

        print("{}{}".format(a, a[::-1]))

if __name__ == '__main__':
    main()
