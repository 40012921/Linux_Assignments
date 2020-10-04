Practise-3: file contents
1. Display the first 12 lines of /etc/services.
Answer:	 
	head -12 /etc/services


2. Display the last line of /etc/passwd.
Answer:	
	tail -1 /etc/passwd


3. Use cat to create a file named count.txt that looks like this:
One
Two
Three
Four
Five

Answer: 
	cat > count.txt
One
Two
Three
Four
Five
press ctrl+d
	
	
4. Use cp to make a backup of this file to cnt.txt.
Answer:	
	cp count.txt cnt.txt


5. Use cat to make a backup of this file to catcnt.txt.
Answer:	
	cat count.txt > catcnt.txt


6. Display catcnt.txt, but with all lines in reverse order (the last line first).
Answer:	
	tac catcnt.txt


7. Use more to display /etc/services.
Answer:
	more /etc/services


8. Display the readable character strings from the /usr/bin/passwd command. 
Answer:
	strings /usr/bin/passwd


9. Use ls to find the biggest file in /etc.
Answer:	
	ls -lrs


10. Open two terminal windows (or tabs) and make sure you are in the same directory in both. Type echo this is the first line > tailing.txt in the first terminal, then issue tail -f tailing.txt in the second terminal. Now go back to the first terminal and type echo This is another line >> tailing.txt (note the double >>), verify that the tail -f in the second terminal shows both lines. Stop the tail -f with Ctrl-C.
Answer: 	
	genesis49@Trainee49:~/Desktop$ echo this is the first line > tailing.txt
	genesis49@Trainee49:~/Desktop$ tail -f tailing.txt
	this is the first line
	genesis49@Trainee49:~/Desktop$ echo This is another line >> tailing.txt
	genesis49@Trainee49:~/Desktop$ tail -f tailing.txt
	this is the first line
	This is another line

11. Use cat to create a file named tailing1.txt that contains the contents of tailing.txt followed by the contents of /etc/passwd.
Answer: 
	genesis49@Trainee49:~/Desktop$ cat /etc/passwd >> tailing1.txt

12. Use cat to create a file named tailing2.txt that contains the contents of tailing.txt preceded by the contents of /etc/passwd
Answer:
	genesis49@Trainee49:~/Desktop$ mv tailing1.txt tmp.txt ; cat /etc/passwd tmp.txt > tailing2.txt



