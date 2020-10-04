Practise-1: working with directories
1. Display your current directory.
Answer:
	pwd
    Current directory: /bin
     
     
2. Change to the /etc directory.
Answer:
	cd /etc


3. Now change to your home directory using only three key presses.
Answer: 
	cd


4. Change to the /boot/grub directory using only eleven key presses.
Answwer:
	cd /boot/grub (use tab to complete the path)


5. Go to the parent directory of the current directory.
Answer: 
	cd ..


6. Go to the root directory.
Answer:
	cd /


7. List the contents of the root directory.
Answer: 
	ls


8. List a long listing of the root directory.
Answer:
	ls -l


9. Stay where you are, and list the contents of /etc.
Answer:
	ls -l /etc


10. Stay where you are, and list the contents of /bin and /sbin.
Answer:
	ls /bin /sbin


11. Stay where you are, and list the contents of ~.
Answer:
	ls ~


12. List all the files (including hidden files) in your home directory.
Answer:
	ls -a  (-a list all the files)


13. List the files in /boot in a human readable format.
Answer:
	ls -h /boot  (-h lists in human readable format)


14. Create a directory testdir in your home directory.
Answer:
	mkdir ~/testdir


15. Change to the /etc directory, stay here and create a directory newdir in your home directory.
Answer:	
	cd /etc 
	mkdir ~/newdir
	
		
16. Create in one command the directories ~/dir1/dir2/dir3 (dir3 is a subdirectory from dir2,and dir2 is a subdirectory from dir1 ).
Answer:
	mkdir -p ~/dir1/dir2/dir3 (-p to create parent directory in this case dir1/dir2q)


17. Remove the directory testdir.
Answer:
	rmdir testdir


18. Open manual page for bash and read about pushd and popd by searching in manpage.
Answer:
	man bash
	To find in man pages: /<wordtobesearched>
	TO navigate through the search results: n

