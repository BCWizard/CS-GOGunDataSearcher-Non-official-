#include <iostream>
#include <string>
using namespace std;

const string sItem[9] = { "Name:","Cost:","Ammo:","Kill Award:","Damage:","Fire Rate:",
						"Recoil Contrl:","Accurate Range:","Armor Penetration:" };

void ShowSMGData(int inputGN) {
	string GunPosition[7][9] = {
		{"MAC-10","$1050","30/100","$600","29","13","83","12","115"},
		{"MP5-SD","$1500","30/120","$600","27","12","85","15","125"},
		{"MP7","$1500","30/120","$600","29","12","85","15","125"},
		{"UMP-45","$1200","25/100","$600","35","11","76","11","130"},
		{"P90","$2350","50/100","$300","26","14","85","11","138"},
		{"PP-Bizon","$1400","64/120","$600","27","12","83","11","126"},
		{"MP9","$1250","30/120","$600","26","14","81","17","120"},
	};

	for (int i = 0; i < 9; i++) {
		cout << sItem[i] << GunPosition[inputGN - 1][i] << '\n';
	}

	cout << "Armor Penetration Damage:" 
		<< stoi(GunPosition[inputGN - 1][4]) * stoi(GunPosition[inputGN - 1][8]) / 200
		<< '\n';
}

void ShowRifleData(int inputGN) {
	string GunPosition[11][9] = {
		{"Galil-AR","$1800","35/90","$300","30","11","79","18","155"},
		{"AK-47","$2700","30/90","$300","36","10","68","24","155"},
		{"SSG 08","$1700","10/90","$300","88","0","72","52","170"},
		{"SG 553","$3000","30/90","$300","30","9","68","26","200"},
		{"AUG","$3300","30/90","$300","28","10","76","31","180"},
		{"AWP","$4750","10/30","$100","115","0","72","76","195"},
		{"G3SG1","$5000","20/90","$300","80","4","63","73","165"},
		{"SCAR-20","$5000","20/90","$300","80","4","62","73","165"},
		{"FAMAS","$2050","25/90","$300","30","11","80","16","140"},
		{"M4A1-S","$2900","25/75","$300","33","10","71","30","140"},
		{"M4A4","$3100","30/90","$300","33","11","77","30","140"},
	};

	for (int i = 0; i < 9; i++) {
		cout << sItem[i] << GunPosition[inputGN - 1][i] << '\n';
	}

	cout << "Armor Penetration Damage:"
		<< stoi(GunPosition[inputGN - 1][4]) * stoi(GunPosition[inputGN - 1][8]) / 200
		<< '\n';
}

void ShowPistolData(int inputGN) {
	string GunPosition[10][9] = {		
		{"Glock-18","$200","20/120","$300","30","6","83","22","94"},
		{"Dual Berettas","$400","30/120","$300","38","8","68","18","115"},
		{"P250","$300","13/26","$300","38","6","70","15","128"},
		{"Tec-9","$500","18/90","$300","33","8","74","24","181"},
		{"Five-SeveN","$500","20/100","$300","32","6","70","15","182"},
		{"Desert Eagle","$700","7/35","$300","63","4","9","27","186"},
		{"R8 Revolver","$600","8/8","$300","86","2","81","67","186"},
		{"USP-S","$200","12/24","$300","35","5","70","22","101"},
		{"P2000","$200","13/52","$300","35","5","73","24","101"},
		{"CZ75-Auto","$500","12/12","$100","31","10","59","12","155"},
	};

	for (int i = 0; i < 9; i++) {
		cout << sItem[i] << GunPosition[inputGN - 1][i] << '\n';
	}

	cout << "Armor Penetration Damage:"
		<< stoi(GunPosition[inputGN - 1][4]) * stoi(GunPosition[inputGN - 1][8]) / 200
		<< '\n';
}

void ShowHeavyData(int inputGN) {
	string GunPosition[6][9] = {
		{"Nova","$1050","8/32","$900","234","1","1","3","100"},
		{"XM1014","$2000","7/32","$900","120","2","1","3","160"},
		{"Sawed-Off","$1100","7/32","$900","256","1","1","2","150"},
		{"M249","$5200","100/200","$300","32","12","72","17","160"},
		{"Negev","$1700","150/300","$300","35","13","79","13","142"},
		{"MAG-7","$1300","5/32","$900","240","1","1","3","150"},
	};

	for (int i = 0; i < 9; i++) {
		cout << sItem[i] << GunPosition[inputGN - 1][i] << '\n';
	}

	cout << "Armor Penetration Damage:"
		<< stoi(GunPosition[inputGN - 1][4]) * stoi(GunPosition[inputGN - 1][8]) / 200
		<< '\n';
}

int main() {
	string sInputGunType;
	int iInputGunType;
		int iInputGunName;

	cout << "Welcome TO \"Counter - Strike : Global Offensive Gun Data Searcher\"(NON OFFICIAL)\n"
		<< "Version 0.1.1\tLastUpdateDate:2021/08/24\n";

	/*
	cout << "SMG:\tmac-10 mp5-sd mp7 ump-45 p90 pp-bizon mp9\n"
		<< "REF:\t galil-ar ak-47 ssg08 sg553 aug awp g3sg1 scar-20 famas m4a1 m4a4\n"
		<< "glock-18 dual-berettas p250 tec-9 57 dwsert-eagle usp-s p2k cz75-auto\n"
		<< "nova xm1014 sawed-off m249 negev mag-7\n";
	*/

	cout << ">  Type \"exit\" to leave the program\n"
		<< ">  Choose gun type \"Number\":\n    1.SMG 2.Rifle 3.Pistol 4.Heavy\n";

		while (cin >> sInputGunType && sInputGunType != "exit"){
			//Input validation Convert string to integer
			try {
				iInputGunType = stoi(sInputGunType);
			}
			catch (...) {				
				if (sInputGunType == "author") {
					cout << ">Name:BCWizard\n"
						<< "\tNational Formosa University\n"
						<< "\tComputer Science & Information Engineering\n";
				}
				else if (sInputGunType == "version") {
					cout << "0.1.1\n"
						<< "Date:2021/08/24\n"
						<< "\t1.Use Function to complete the program.\n"
						<< "\t2.Check and adjustment Gun name.\n";
				}
				else {
					cout << "Well... You input what Type?\n";
				}
				continue;
			}

			switch (iInputGunType) {
			default:
				cout << "Well... You type what?\n";
				break;
			//SMG
			case 1: {
				cout << "You type SMG!\n";
				cout << "Choose gun name \"Number\"\n"
					<< "\t(1)mac-10 (2)mp5-sd (3)mp7 (4)ump-45"
					<< " (5)p90 (6)pp-bizon (7)mp9\n";

				while (cin >> iInputGunName){
					if (iInputGunName < 1 || iInputGunName > 7) {
						cout << "Well... You input what?\n";
						continue;
					}
					ShowSMGData(iInputGunName);
				}
				break;
			}
			//Rifle
			case 2: {
				cout << "You type Rifle!\n";
				cout << "Choose gun name \"Number\"\n"
					<< "\t(1)galil-ar (2)ak-47 (3)ssg08 (4)sg553"
					<< " (5)aug (6)awp (7)g3sg1 (8)scar-20"
					<< "(9)famas (10)m4a1 (11)m4a4\n";

				while (cin >> iInputGunName) {
					if (iInputGunName < 1 || iInputGunName > 11) {
						cout << "Well... You input what?\n";
						continue;
					}
					ShowRifleData(iInputGunName);
				}
				break;
			}
			//Pistol
			case 3: {
				cout << "You type Pistol!\n";
				cout << "Choose gun name \"Number\"\n"
					<< "\t(1)glock-18 (2)dual berettas (3)p250 (4)tec-9"
					<< " (5)57 (6)desert eagle (7)r8 (8)usp-s (9)p2000"
					<< " (10)cz75-auto\n";

				while (cin >> iInputGunName) {
					if (iInputGunName < 1 || iInputGunName > 10) {
						cout << "Well... You input what?\n";
						continue;
					}
					ShowPistolData(iInputGunName);
				}
				break;
			}
			//Heavy
			case 4: {
				cout << "You type Heavy!\n";
				cout << "Choose gun name \"Number\"\n"
					<< "\t(1)nova (2)xm1014 (3)sawed-off(4)m249"
					<< " (5)negev (6)mag-7\n";

				while (cin >> iInputGunName) {
					if (iInputGunName < 1 || iInputGunName > 6) {
						cout << "Well... You input what?\n";
						continue;
					}
					ShowHeavyData(iInputGunName);
				}
				break;
			}
			}
		}
		cout << "Good Fortune in the game Goodbye\n";	//End of the program output message
}