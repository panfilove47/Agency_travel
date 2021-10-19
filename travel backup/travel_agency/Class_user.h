#pragma once
#include <mysql.h>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class User
{
public:
	User()
	{
		conn = mysql_init(0);
		conn = mysql_real_connect(conn, "localhost", "root", "Vbifcfif", "testdb", 3306, NULL, 0);
		string query = "SELECT * FROM test";
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
		if (!qstate)
		{
			res = mysql_store_result(conn);
			while (row = mysql_fetch_row(res))
			{
				id++;
			}
		}
	}
	~User()
	{
		mysql_close(conn);
	}
	int get_id()
	{
		return id - 1;
	}
	void set_data(string user_name, string password, string root = "user")
	{
		stringstream ss;
		ss << "INSERT INTO test(id, name, password, root) VALUES ('" << id << "' ,'" << user_name << "', '" << password << "', '" << root << "' )";
		string query = ss.str();
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
		id++;
	}
	bool isUser_exists(string user_name)
	{
		stringstream ss;
		ss << "SELECT EXISTS(SELECT name FROM test WHERE name = '" << user_name << "')";
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
	bool isAccount_exists(string user_name, string password)
	{
		stringstream ss;
		ss << "SELECT EXISTS(SELECT name FROM test WHERE name = '" << user_name << "' AND password = '" << password << "')";
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
	bool isAdmin(string user_name)
	{
		stringstream ss;
		ss << "SELECT EXISTS(SELECT * FROM test WHERE root = 'admin' AND name = '" << user_name << "')";
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
	bool isHotel(string user_name)
	{
		stringstream ss;
		ss << "SELECT EXISTS(SELECT * FROM test WHERE root = 'hotel' AND name = '" << user_name << "')";
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
	int id = 1;
	string user_name;
	string password;
};

