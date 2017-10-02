def main():
    while(True):
        try:
            a = str(input())
        except EOFError:
            break;
        b = str(input())

        if(b in a):
            print("Resistente")
        else:
            print("Nao resistente")


if __name__ == '__main__':
    main()
