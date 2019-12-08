#include <iostream>
#include <fstream>
#include <ctime>
#include <string>

using namespace std;

string getCurrentDateTime(string s) {
	time_t now = time(0);
	struct tm  tstruct;
	char  buf[80];
	tstruct = *localtime(&now);
	if (s == "now")
		strftime(buf, sizeof(buf), "%Y-%m-%d %X", &tstruct);
	else if (s == "date")
		strftime(buf, sizeof(buf), "%Y-%m-%d", &tstruct);
	return string(buf);
};

void Logger(string logMsg) {
	string filePath = "log.txt";
	string now = getCurrentDateTime("now");
	ofstream ofs(filePath.c_str(), std::ios_base::out | std::ios_base::app);
	ofs << now << '\n' << logMsg << '\n' << '\n';
	ofs.close();
}

int main(void)
{
	Logger("logggggggggggggggggggggggggggggggg");

	return 0;
}
