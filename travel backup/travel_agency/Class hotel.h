#pragma once
#include <mysql.h>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class Hotel
{
public:
	Hotel()
	{
		conn = mysql_init(0);
		conn = mysql_real_connect(conn, "localhost", "root", "Vbifcfif", "testdb", 3306, NULL, 0);
	}
	void set_hotel(string hotel_name)
	{
		stringstream ss;
		ss << "INSERT INTO hotels(hotel_name) VALUES ('" << hotel_name << "')";
		string query = ss.str();
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
	}
	void set_room(int hotel_id, string room_type, double price, string booking_status = "not booked")
	{
		stringstream ss;
		ss << "INSERT INTO hotell(hotel_id, room_type, price, booking_status) VALUES ('" << hotel_id << "', '" << room_type << "','" << price << "', '" << booking_status << "')";
		string query = ss.str();
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
	}
	void delete_hotels_info(int hotel_id)
	{
		stringstream ss;
		ss << "DELETE FROM hotell WHERE hotel_id = '" << hotel_id << "'";
		string query = ss.str();
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
	}
	void delete_hotel(int hotel_id)
	{
		stringstream ss;
		ss << "DELETE FROM hotels WHERE hotel_id = '" << hotel_id << "'";
		string query = ss.str();
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
	}
	void delete_room(int room_id)
	{
		stringstream ss;
		ss << "DELETE FROM hotell WHERE room_id = '" << room_id << "'";
		string query = ss.str();
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
	}
	void set_book(int room_id)
	{
		stringstream ss;
		ss << "UPDATE `testdb`.`hotell` SET `booking_status` = 'booked' WHERE (`room_id` = '" << room_id << "')";
		string query = ss.str();
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
	}
	void set_who_booked(string user_name, int room_id)
	{
		stringstream ss;
		ss << "UPDATE `testdb`.`hotell` SET `who_booked` = '" << user_name << "' WHERE (`room_id` = '" << room_id << "')";
		string query = ss.str();
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
	}
	void set_unbook(int room_id)
	{
		stringstream ss;
		ss << "UPDATE `testdb`.`hotell` SET `who_booked` = '', `booking_status` = 'not booked' WHERE (`room_id` = '" << room_id << "')";
		string query = ss.str();
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
	}
	bool isBooked(int room_id)
	{
		stringstream ss;
		ss << "SELECT EXISTS(SELECT * FROM hotell WHERE room_id = '" << room_id << "' AND booking_status = 'booked')";
		string query = ss.str();
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
		res = mysql_store_result(conn);
		row = mysql_fetch_row(res);
		char result = *row[0];
		stringstream s;
		s << result;
		string tostr_result = s.str();
		int endresult = stoi(tostr_result);
		return endresult;
	}
	bool isUserBooked(int room_id)
	{
		stringstream ss;
		ss << "SELECT EXISTS(SELECT * FROM hotell WHERE ((room_id = '" << room_id << "' AND booking_status = 'booked') OR (room_id = '" << room_id << "' AND who_booked != '')))";
		string query = ss.str();
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
		res = mysql_store_result(conn);
		row = mysql_fetch_row(res);
		char result = *row[0];
		stringstream s;
		s << result;
		string tostr_result = s.str();
		int endresult = stoi(tostr_result);
		return endresult;
	}
	bool isHotelExists(string hotel_name)
	{
		stringstream ss;
		ss << "SELECT EXISTS(SELECT * FROM hotels WHERE hotel_name = '" << hotel_name << "')";
		string query = ss.str();
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
		res = mysql_store_result(conn);
		row = mysql_fetch_row(res);
		char result = *row[0];
		stringstream s;
		s << result;
		string tostr_result = s.str();
		int endresult = stoi(tostr_result);
		return endresult;
	}
	bool isHotelExists(int hotel_id)
	{
		stringstream ss;
		ss << "SELECT EXISTS(SELECT * FROM hotels WHERE hotel_id = '" << hotel_id << "')";
		string query = ss.str();
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
		res = mysql_store_result(conn);
		row = mysql_fetch_row(res);
		char result = *row[0];
		stringstream s;
		s << result;
		string tostr_result = s.str();
		int endresult = stoi(tostr_result);
		return endresult;
	}
	bool isRoomExists(int room_id)
	{
		stringstream ss;
		ss << "SELECT EXISTS(SELECT * FROM hotell WHERE room_id = '" << room_id << "')";
		string query = ss.str();
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
		res = mysql_store_result(conn);
		row = mysql_fetch_row(res);
		char result = *row[0];
		stringstream s;
		s << result;
		string tostr_result = s.str();
		int endresult = stoi(tostr_result);
		return endresult;
	}
private:
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* res;
	int qstate = 0;
};


