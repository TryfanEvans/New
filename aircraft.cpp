using namespace std;

// a pilot and copilot must be provided when creating an aircraft
aircraft::aircraft(string callsign, person thePilot, person theCoPilot)
{
}
void aircraft::setPilot(person thePilot)
{

} // change the pilot
person aircraft::getPilot()
{
    return pilot;
}
void aircraft::setCoPilot(person theCoPilot)
{

} // change the co-pilot
person aircraft::getCoPilot()
{
    return coPilot;
}
void aircraft::printDetails()
{

} // print the callsign, a new line, the pilot name,
  // a new line, the co-pilot name and a final newline.