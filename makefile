CC= gcc
CFLAGS = -Wall -o2
SOURCE= main.c addition.c division.c multiplication.c soustraction.c
TARGET= calcul
SOURCETEST= test.c addition.c division.c multiplication.c soustraction.c
TARGET_TEST= test_calcul
build: main.c
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCE)
	$(CC) $(CFLAGS) -o $(TARGET_TEST) $(SOURCETEST)

test:
	./$(TARGET_TEST)	

run:
	./$(TARGET)
	


deploy:
	mkdir -p deploi
	mv $(TARGET) deploi

clean:
	rm  -f  *.o  cible
