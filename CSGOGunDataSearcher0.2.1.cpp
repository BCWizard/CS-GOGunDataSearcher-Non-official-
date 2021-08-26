#include <iostream>
#include <string>
using namespace std;

const string sItem[9] = { "Name:","Cost:","Ammo:","Kill Award:","Damage:","Fire Rate:",
						"Recoil Contrl:","Accurate Range:","Armor Penetration:" };

class cGunData {
protected:
	string* m_sGunDataArray;
	int m_iInputGN;

public:
	cGunData(int iInputGn) {
		m_iInputGN = iInputGn;
		m_sGunDataArray = new string;
	}
	~cGunData() {
		delete [] m_sGunDataArray;
	}
	void getData() {
		for (int i = 0; i < 9; i++) {
			cout << sItem[i] << m_sGunDataArray[(m_iInputGN - 1)*9+i] << '\n';
		}

		cout << "Armor Penetration Damage:"
			<< stoi(m_sGunDataArray[(m_iInputGN - 1) * 9 + 4]) * 
			stoi(m_sGunDataArray[(m_iInputGN - 1) * 9 + 8]) / 200
			<< '\n';
	}
};

class cGunSMGData:public cGunData {
public:
	cGunSMGData(int iInputGn):cGunData(iInputGn) {
		m_sGunDataArray = new string[7 * 9]{
		"MAC-10","$1050","30/100","$600","29","13","83","12","115",
		"MP5-SD","$1500","30/120","$600","27","12","85","15","125",
		"MP7","$1500","30/120","$600","29","12","85","15","125",
		"UMP-45","$1200","25/100","$600","35","11","76","11","130",
		"P90","$2350","50/100","$300","26","14","85","11","138",
		"PP-Bizon","$1400","64/120","$600","27","12","83","11","126",
		"MP9","$1250","30/120","$600","26","14","81","17","120"
		};
	}
};

class cGunRifleData :public cGunData {
public:
	cGunRifleData(int iInputGn) :cGunData(iInputGn) {
		m_sGunDataArray = new string[11 * 9]{
		"Galil-AR","$1800","35/90","$300","30","11","79","18","155",
		"AK-47","$2700","30/90","$300","36","10","68","24","155",
		"SSG 08","$1700","10/90","$300","88","0","72","52","170",
		"SG 553","$3000","30/90","$300","30","9","68","26","200",
		"AUG","$3300","30/90","$300","28","10","76","31","180",
		"AWP","$4750","10/30","$100","115","0","72","76","195",
		"G3SG1","$5000","20/90","$300","80","4","63","73","165",
		"SCAR-20","$5000","20/90","$300","80","4","62","73","165",
		"FAMAS","$2050","25/90","$300","30","11","80","16","140",
		"M4A1-S","$2900","25/75","$300","33","10","71","30","140",
		"M4A4","$3100","30/90","$300","33","11","77","30","140",
		};
	}
};

class cGunPistolData : public cGunData {
public:
	cGunPistolData(int iInputGn) :cGunData(iInputGn) {
		m_sGunDataArray = new string[10 * 9]{
		"Glock-18","$200","20/120","$300","30","6","83","22","94",
		"Dual Berettas","$400","30/120","$300","38","8","68","18","115",
		"P250","$300","13/26","$300","38","6","70","15","128",
		"Tec-9","$500","18/90","$300","33","8","74","24","181",
		"Five-SeveN","$500","20/100","$300","32","6","70","15","182",
		"Desert Eagle","$700","7/35","$300","63","4","9","27","186",
		"R8 Revolver","$600","8/8","$300","86","2","81","67","186",
		"USP-S","$200","12/24","$300","35","5","70","22","101",
		"P2000","$200","13/52","$300","35","5","73","24","101",
		"CZ75-Auto","$500","12/12","$100","31","10","59","12","155",
		};
	}
};

class cGunHeavyData : public cGunData {
public:
	cGunHeavyData(int iInputGn) :cGunData(iInputGn) {
		m_sGunDataArray = new string[6 * 9]{
		"Nova","$1050","8/32","$900","234","1","1","3","100",
		"XM1014","$2000","7/32","$900","120","2","1","3","160",
		"Sawed-Off","$1100","7/32","$900","256","1","1","2","150",
		"M249","$5200","100/200","$300","32","12","72","17","160",
		"Negev","$1700","150/300","$300","35","13","79","13","142",
		"MAG-7","$1300","5/32","$900","240","1","1","3","150",
		};
	}
};

int main() {
	string sInputGunType;
	int iInputGunType;
	int iInputGunName;

	cout << "Welcome TO \"Counter - Strike : Global Offensive Gun Data Searcher\"(NON OFFICIAL)\n"
		<< "Version 0.2.1\tLastUpdateDate:2021/08/26\n";
	cout << "\n\n";

	cout << ">  Type \"exit\" to leave the program\n"
		<< ">  Choose gun type \"Number\":\n    1.SMG 2.Rifle 3.Pistol 4.Heavy\n";

	while (cin >> sInputGunType && sInputGunType != "exit") {
		//Input validation Convert string to integer
		try {
			iInputGunType = stoi(sInputGunType);
		}
		catch (...) {
			if (sInputGunType == "author") {
				cout << ">  Name:BCWizard\n"
					<< "\tNational Formosa University\n"
					<< "\tComputer Science & Information Engineering\n";
			}
			else if (sInputGunType == "version") {
				cout << ">  0.1.1\n"
					<< "Date:2021/08/24\n"
					<< "\t1.Use Function to complete the program.\n"
					<< "\t2.Check and adjustment Gun name.\n";
				cout << ">  0.2.1\n"
					<< "Date:2021/08/26\n"
					<< "\t1.Use Class to complete the program.\n"
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
				<< "\t(1)MAC-10 (2)MP5-SD (3)MP7 (4)UMP-45"
				<< " (5)P90 (6)PP-Bizon (7)MP9\n";

			while (cin >> iInputGunName) {
				if (iInputGunName < 1 || iInputGunName > 7) {
					cout << "Well... You input what?\n";
					continue;
				}
				cGunSMGData SMG(iInputGunName);
				SMG.getData();
			}
			break;
		}
			  //Rifle
		case 2: {
			cout << "You type Rifle!\n";
			cout << "Choose gun name \"Number\"\n"
				<< "\t(1)Galil AR (2)AK-47 (3)SSG08 (4)SG553"
				<< " (5)AUG (6)AWP (7)G3SG1 (8)SCAR-20"
				<< "(9)FAMAS (10)M4A1-S (11)M4A4\n";

			while (cin >> iInputGunName) {
				if (iInputGunName < 1 || iInputGunName > 11) {
					cout << "Well... You input what?\n";
					continue;
				}
				cGunRifleData Rifle(iInputGunName);
				Rifle.getData();
			}
			break;
		}
			  //Pistol
		case 3: {
			cout << "You type Pistol!\n";
			cout << "Choose gun name \"Number\"\n"
				<< "\t(1)Glock-18 (2)Dual Berettas (3)P250 (4)Tec-9"
				<< " (5)Five-SeveN (6)Desert Eagle (7)R8 Revolver (8)USP-S (9)P2000"
				<< " (10)CZ75-Auto\n";

			while (cin >> iInputGunName) {
				if (iInputGunName < 1 || iInputGunName > 10) {
					cout << "Well... You input what?\n";
					continue;
				}
				cGunPistolData Pistol(iInputGunName);
				Pistol.getData();
			}
			break;
		}
			  //Heavy
		case 4: {
			cout << "You type Heavy!\n";
			cout << "Choose gun name \"Number\"\n"
				<< "\t(1)Nova (2)XM1014 (3)Sawed-off(4)M249"
				<< " (5)Negev (6)MAG-7\n";

			while (cin >> iInputGunName) {
				if (iInputGunName < 1 || iInputGunName > 6) {
					cout << "Well... You input what?\n";
					continue;
				}
				cGunHeavyData Heavy(iInputGunName);
				Heavy.getData();
			}
			break;
		}
		}
	}
	cout << "Good Fortune in the game Goodbye\n";	//End of the program output message
	system("pause");
}