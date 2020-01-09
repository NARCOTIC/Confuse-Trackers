## Confuse-Trackers
This program searches google and visits websites randomly to make it really hard to track you and fingerprint you.

## 👨🏽‍💻 Confuse-Trackers-1.0 - C++
⚙️ 1. In ```settings.txt``` you can change ```line 3``` with your browser name (```chrome```, ```firefox```, etc.)
⚙️ 2. Add your searches list to ```searches.txt``` (Do not exceed 1000 lines).
⚙️ 3. Add your websites list to ```websites.txt``` (Do not exceed 1000 lines).
⚙️ 4. Compile and use.

## 👨🏽‍💻 Confuse-Trackers-2.0 - C/C++ (Flash to a Digistump Attiny85)
⚙️ 1. Add your searches list to ```searches.txt```.
⚙️ 2. When you add searches be careful about how many lines you add. Attiny85 can only hold approx. 50 lines.
⚙️ 3. Don't mess with ```incode.txt``` if you don't 100% know what you're changing.
⚙️ 4. Use ```finalize.cpp``` to output the final code to ```finalcode.txt```.
⚙️ 5. If you want to use our latest ```searches.txt```'s keywords, select that option when you use ```finalize.cpp```.
⚙️ 6. After you get the final code, install __Digistump__ drivers and libraries (Search YouTube if you don't know).
⚙️ 7. Flash your code to a Attiny85 or some other compatible board, and use.

## 👨🏽‍💻 Notes
+ __Confuse-Trackers-1.0__ is a windows program. You can run it as a ```.exe``` file.
+ __Confuse-Trackers-2.0__ is a program wrote for Attiny85 board.
+ You can flash the code to the Attiny85 board and simply plug it in using USB port to run it.
+ Attiny85 board injects keystrokes to your computer and computer identify it as a keyboard.
+ __Confuse-Trackers-1.0__ could be recognized by trackers because it executes inside the computer.
+ __Confuse-Trackers-2.0__ acts just like a keyboard.
+ Attiny85 board can't hold that much data. If you can use another compatible board, it'd be better.

##### ADD YOUR SEARCHES AND WEBSITES
When you add new searches and websites to ```searches.txt``` and ```websites.txt``` the program automatically downloads the latest searches and websites you added to every single user who uses it.
