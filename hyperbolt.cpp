//Hack for the Future 2/5/2023
//Program by Saidarsh Tukkadi and Saiesh Kesireddy

#include <iostream>
#include <graphics.h>
#include <iomanip>
#include <string>
#include <fstream>
#include <string.h>
#include <sstream>

using namespace std;

void welcome() 
{
    cout << "Welcome to HyperBolt!" << endl;
    cout << "We offer a selecton of luxury spacecars." << endl;
}

int chooseSize(int size)
{
    cout << "Please select options by inputting numbers that correspond with the options provided unless stated otherwise." << endl;
    cout << endl;
    cout << "Select Vehicle size: " << endl;
    cout << "1. Compact - $40000" << endl << "2. Full-Size - $85000" << endl;
    cin >> size;
    cout << endl;
    return size;
}

int sizeCost(int size, int totalCost)
{
    switch(size)
    {
        case 1:
            totalCost += 40000;
            break;
        case 2:
            totalCost += 85000;
            break;
    }
    return totalCost;
}

int chooseColor(int color) 
{
    cout << "Select Exterior Color:" << endl;
    cout << "1. Red - $3000" << endl << "2. Blue - $2000" << endl << "3. Gray - $0" << endl;
    cin >> color;
    cout << endl;
    return color;
}

int colorCost(int color, int totalCost)
{
    switch (color) 
    {
        case 1:
            totalCost += 3000;
            break;
        case 2:
            totalCost += 2000;
            break;
        case 3:
            break;
    }
    return totalCost;
}

int chooseProp(int prop)
{
    cout << "Select propulsion:" << endl;
    cout << "1. Electric - $5000" << endl << "2. Fuel - $0" << endl;
    cin >> prop;
    cout << endl;
    return prop;
}

int propCost(int prop, int totalCost)
{
    switch (prop)
    {
        case 1:
            totalCost += 5000;
            break;
        case 2:
            break;
    }
    return totalCost;
}

int chooseTrim(int trimColor)
{
    cout << "Select Interior Trim Color:" << endl;
    cout << "1. Black - $0" << endl << "2. White - $1000" << endl << "3. Espresso Brown - $2000" << endl;
    cin >> trimColor;
    cout << endl;
    return trimColor;
}

int trimCost(int trimColor, int totalCost)
{
    switch (trimColor)
    {
        case 1:
            break;
        case 2:
            totalCost += 1000;
            break;
        case 3:
            totalCost += 2000;
            break;
    }
    return totalCost;
}

int choosePremium(int premiumUpgrade)
{
    cout << "Standard Premium Package (included) Features: Digital Guage Cluster, 20 Inch Screen, Leather Seats, LED Lights" << endl;
    cout << "Dual-Zone Climate Control, Heated Front Seats, Adaptive Cruise Control, Panoramic Sunroof, and SafeSense Tech, 12 Speaker System" << endl << endl;
    cout << "Executive Premium Package Features: Heated/Vent Front Seats, Advanced Self-Driving, 20 Speaker 3D System" << endl;
    cout << "Laser Lights, Heated/Cooled Cupholders, Heated Steering Wheel/Windows, Heads-Up display, Ambient Lighting, Wifi Hotspot" << endl << endl;
    cout << "Would you like to upgrade to the Executive Premium Package? (Press 1 for Yes, 0 for No)" << endl;
    cin >> premiumUpgrade;
    cout << endl;
    return premiumUpgrade;
}

int premiumCost(int premiumUpgrade, int totalCost)
{
    switch (premiumUpgrade)
    {
        case 1:
            totalCost += 7500;
            break;
        case 2:
            break;
    }
    return totalCost;
}

void fullSize()
{
    line(25,250,25,325); //1
    line(25,325,100,375); //2
    line(100,375,550,375); //3
    line(550,375,625,325); //4
    line(625,325,625,200); //5
    line(625,200,575,150); //6
    line(575,150,300,150); //7
    line(300,150,150,225); //8
    line(150,225,50,240); //9
    line(50,240,25,250); //10
}

void fullSizeBoosters()
{
    //boosters
    setcolor(DARKGRAY);
    setfillstyle(LTSLASH_FILL, DARKGRAY);
    rectangle(150,375,250,400);
    floodfill(151,376,DARKGRAY);
    setfillstyle(LTSLASH_FILL, DARKGRAY);
    rectangle(400,375,500,400);
    floodfill(451,376, DARKGRAY);

    //side booster
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    ellipse(540,300,0,360,50,25);
    floodfill(541,301,WHITE);
    setcolor(BLACK);
    setfillstyle(LTSLASH_FILL,BLACK);
    ellipse(540,300,0,360,40,20);
    floodfill(541,301,BLACK);
}

void fullSizeFeatures()
{
    //door lines
    line(380,160,297,375);
    line(300,155,575,155);
    line(163,225,100,375);
    line(163,225,300,155);
    line(575,155,625,205);
    line(505,160,422,375);
    
    //window 1 
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    line(300,160,175,225); 
    line(175,225,350,225);
    line(350,225,375,160);
    line(375,160,300,160);
    floodfill(301,161,BLACK);

    //window 2
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    line(360,225,385,160);
    line(385,160,500,160);
    line(500,160,475,225);
    line(475,225,360,225);
    floodfill(386,161,BLACK);

    //window 3
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    line(485,225,510,160);
    line(510,160,575,160);
    line(575,160,615,200);
    line(615,200,590,225);
    line(590,225,485,225);
    floodfill(511,161,BLACK);
}

void compactSize()
{
    line(25,250,25,325); //1
    line(25,325,550,325); //3
    line(550,325,625,200); //5
    line(625,200,575,150); //6
    line(575,150,300,150); //7
    line(300,150,150,225); //8
    line(150,225,50,240); //9
    line(50,240,25,250); //10
}

void headlights()
{
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    rectangle(25,260,75,275);
    floodfill(26,261, WHITE); 
}

void compactFeatures ()
{
    //door lines
    line(382,155,317,325);
    line(300,155,575,155);
    line(163,225,120,325);
    line(163,225,300,155);
    line(575,155,625,205);
    line(507,155,442,325);
    
    //window 1 
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    line(300,160,175,225); 
    line(175,225,350,225);
    line(350,225,375,160);
    line(375,160,300,160);
    floodfill(301,161,BLACK);

    //window 2
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    line(360,225,385,160);
    line(385,160,500,160);
    line(500,160,475,225);
    line(475,225,360,225);
    floodfill(386,161,BLACK);


    //window 3
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    line(485,225,510,160);
    line(510,160,575,160);
    line(575,160,615,200);
    line(615,200,590,225);
    line(590,225,485,225);
    floodfill(511,161,BLACK);
}

void compactSizeBoosters()
{
    //lower boosters
    setcolor(DARKGRAY);
    setfillstyle(LTSLASH_FILL, DARKGRAY);
    rectangle(150,325,250,350);
    floodfill(151,326,DARKGRAY);
    setfillstyle(LTSLASH_FILL, DARKGRAY);
    rectangle(400,325,500,350);
    floodfill(401,326, DARKGRAY);

    //side booster
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    ellipse(520,280,0,360,45,15);
    floodfill(521,281,WHITE);
    setcolor(BLACK);
    setfillstyle(LTSLASH_FILL,BLACK);
    ellipse(520,280,0,360,30,10);
    floodfill(521,281,BLACK);
}

void colorText(int totalCost, int prop1, int trim1, int premium1)
{
    setcolor(15);
    char totalText[16] = {0};
    itoa(totalCost,totalText,10);
    outtextxy(50,50,"$");
    outtextxy(60,50,totalText);
    switch (prop1)
    {
        case 1:
            outtextxy(50,70,"Electric-Based Propulsion");
            break;
        case 2:
            outtextxy(50,70,"Fuel-Based Propulsion");
            break;
    }
    switch (trim1)
    {
        case 1:
            outtextxy(50,90,"Black Interior Trim");
            break;
        case 2:
            outtextxy(50,90,"White Interior Trim");
            break;
        case 3:
            outtextxy(50,90,"Espresso Brown Interior Trim");
            break;
    }
    switch (premium1)
    {
        case 1:
            outtextxy(50,110,"Executive Premium Package (Standard Premium Features Included)");
            outtextxy(50,410,"Heated/Vent Front Seats, Advanced Self-Driving, 20 Speaker 3D System, Laser Lights");
            outtextxy(50,430,"Heated/Cooled Cupholders, Heated Steering Wheel/Windows, Heads-Up Display");
            outtextxy(50,450,"Ambient Lighting, Wifi Hotspot");
            break;
        case 0:
            outtextxy(50,110,"Standard Premium Package");
            outtextxy(50,410,"Digital Guage Cluster, 20 Inch Screen, Leather Seats, LED Lights");
            outtextxy(50,430,"Dual-Zone Climate Control, Heated Front Seats, Adaptive Cruise Control");
            outtextxy(50,450,"Panoramic Sunroof, SafeSense Tech, 12 Speaker System");
            break;
    }
}

int colorGraphics(int size,int color,int prop1,int totalCost,int trim1,int premium1)
{
    int gDrive = DETECT;
    int gMode;
    initgraph(&gDrive, &gMode, NULL);

    switch(size)
    {
        case 1:
            switch (prop1)
            {
                case 1:
                    switch (color)
                    {
                        case 1:
                            {setcolor(RED);
                            setfillstyle(SOLID_FILL,RED);
                            compactSize();
                            floodfill(30,255,RED);
                            headlights();
                            compactSizeBoosters();
                            compactFeatures();
                            colorText(totalCost,prop1,trim1,premium1);
                            break;
                            }
                        case 2:
                            setcolor(BLUE);
                            setfillstyle(SOLID_FILL,BLUE);
                            compactSize();
                            floodfill(30,255,BLUE);
                            headlights();
                            compactSizeBoosters();
                            compactFeatures();
                            colorText(totalCost,prop1,trim1,premium1);
                            break;
                        case 3:
                            setcolor(DARKGRAY);
                            setfillstyle(SOLID_FILL,DARKGRAY);
                            compactSize();
                            floodfill(30,255,DARKGRAY);
                            headlights();
                            compactSizeBoosters();
                            compactFeatures();
                            colorText(totalCost,prop1,trim1,premium1);
                            break;
                        
                    }
                    break;
                case 2:
                    switch (color)
                    {
                        case 1:
                            setcolor(RED);
                            setfillstyle(SOLID_FILL, RED);
                            compactSize();
                            floodfill(30,255,RED);
                            headlights();
                            compactSizeBoosters();
                            compactFeatures();
                            colorText(totalCost,prop1,trim1,premium1);
                            break;
                        case 2:
                            setcolor(BLUE);
                            setfillstyle(SOLID_FILL, BLUE);
                            compactSize();
                            floodfill(30,255,BLUE);
                            headlights();
                            compactSizeBoosters();
                            compactFeatures();
                            colorText(totalCost,prop1,trim1,premium1);
                            break;
                        case 3:
                            setcolor(DARKGRAY);
                            setfillstyle(SOLID_FILL, DARKGRAY);
                            compactSize();
                            floodfill(30,255,DARKGRAY);
                            headlights();
                            compactSizeBoosters();
                            compactFeatures();
                            colorText(totalCost,prop1,trim1,premium1);
                            break;
                    }
                    break;

            }
            break;
        case 2:
            switch (prop1)
            {
                case 1:
                    switch (color)
                    {
                        case 1:
                            setcolor(RED);
                            setfillstyle(SOLID_FILL,RED);
                            fullSize();
                            floodfill(30,255,RED);
                            headlights();
                            fullSizeBoosters();
                            fullSizeFeatures();
                            colorText(totalCost,prop1,trim1,premium1);
                            break;
                        case 2:
                            setcolor(BLUE);
                            setfillstyle(SOLID_FILL,BLUE);
                            fullSize();
                            floodfill(30,255,BLUE);
                            headlights();
                            fullSizeBoosters();
                            fullSizeFeatures();
                            colorText(totalCost,prop1,trim1,premium1);
                            break;
                        case 3:
                            setcolor(DARKGRAY);
                            setfillstyle(SOLID_FILL,DARKGRAY);
                            fullSize();
                            floodfill(30,255,DARKGRAY);
                            headlights();
                            fullSizeBoosters();
                            fullSizeFeatures();
                            colorText(totalCost,prop1,trim1,premium1);
                            break;
                    }
                    break;
                case 2:
                    switch (color)
                    {
                        case 1:
                            setcolor(RED);
                            setfillstyle(SOLID_FILL,RED);
                            fullSize();
                            floodfill(30,255,RED);
                            headlights();
                            fullSizeBoosters();
                            fullSizeFeatures();
                            colorText(totalCost,prop1,trim1,premium1);
                            break;
                        case 2:
                            setcolor(BLUE);
                            setfillstyle(SOLID_FILL,BLUE);
                            fullSize();
                            floodfill(30,255,BLUE);
                            headlights();
                            fullSizeBoosters();
                            fullSizeFeatures();
                            colorText(totalCost,prop1,trim1,premium1);
                            break;
                        case 3:
                            setcolor(DARKGRAY);
                            setfillstyle(SOLID_FILL,DARKGRAY);
                            fullSize();
                            floodfill(30,255,DARKGRAY);
                            headlights();
                            fullSizeBoosters();
                            fullSizeFeatures();
                            colorText(totalCost,prop1,trim1,premium1);
                            break;
                    }
                    break;

            }
            break;
    }
    return 0;
}

int main()
{
    bool valid = true;
    while (valid)
    {
        int size, color, prop, trimColor, premium = 0;
        int size1, color1, prop1, trim1, premium1, totalCost = 0;
        int initial = 0;
        int yesOrNo;
        welcome();
        size1 = chooseSize(size);
        totalCost += sizeCost(size1,initial);
        cout << "Current Total: $" << totalCost << endl << endl;
        color1 = chooseColor(color);
        totalCost += colorCost(color1,initial);
        cout << "Current Total: $" << totalCost << endl << endl;
        prop1 = chooseProp(prop);
        totalCost += propCost(prop1,initial);
        cout << "Current Total: $" << totalCost << endl << endl;
        trim1 = chooseTrim(trimColor);
        totalCost += trimCost(trim1,initial);
        cout << "Current Total: $" << totalCost << endl << endl;
        premium1 = choosePremium(premium);
        totalCost += premiumCost(premium1,initial);
        cout << "Current Total: $" << totalCost << endl << endl;
        colorGraphics(size1,color1,prop1,totalCost,trim1,premium1);
        cout << "Buy another spacecar? (Press 1 for Yes, Press 2 for No)" << endl;
        cin >> yesOrNo;
        switch (yesOrNo)
        {
            case 1:
                cout << endl;
                break;
            case 2:
                valid = false;
                break;
        }
    }

}
