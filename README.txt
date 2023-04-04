Förutsättningar:

- C++/MINGW64 finns installerat.
- SDL samt tillhörande bibliotek (SDL2_ttf, SDL2_image och SDL2_mixer) finns installerade.
- Make finns installerat.
- gResPath variabel i Constants.h måste uppdateras och peka på den mapp där resursfilerna finns.
- Sökvägar i Makefilen överensstämmer med tidigare nämnda installationer.

Instruktioner:

1. Ändra gResPath-variabel till den mapp där resursfilerna finns.
2. Öppna terminalen och gå till projektmappen.
3. Kör "make" för att kompilera projektet.
4. Kör "./build/debug/play" i terminalen för att starta spelet.

Spelanvisningar:

Spelet är en version av Pong som går ut på att göra mål på motståndaren genom att studsa tillbaka bollen mot motståndaren. Om du missar bollen med din paddel får motståndaren poäng.
Den spelare som först får 5 poäng vinner, men detta kan ändras via funtionen setMaxScore i klassen Engine.
Spelet spelas av en eller två personer, vänsterspelaren använder piltangenterna W och S för att röra sin paddel upp och ned, medans den högra spelaren använder piltangenterna upp och ner.
Spelet har powerups som kan göra bollen snabbare och mindre.

Övrigt:

I main.cpp finns ett rekommenderat startspel, som går att ändra med fler eller färre komponenter i andra konfigurationer.
