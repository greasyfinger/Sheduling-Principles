all: maria rose sina prcsSchd ThrdSchd

ThrdSchd: ThrdSchd.c
	gcc ThrdSchd.c -o ThrdSchd -pthread
prcsSchd: prcsSchd.c
	gcc prcsSchd.c -o prcsSchd 
maria: maria.sh
	chmod u+x maria.sh
rose: rose.sh
	chmod u+x rose.sh
sina: sina.sh
	chmod u+x sina.sh

clean:
	rm -r ThrdSchd prcsSchd