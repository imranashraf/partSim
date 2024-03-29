/*
 * Q2XMLFile.h
 *
 */

#ifndef Q2XMLFILE_H_
#define Q2XMLFILE_H_

#include "channel.h"
#include "ticpp.h"

class Q2XMLFile
{
	private:
		ticpp::Document m_file;
		ticpp::Iterator< ticpp::Element > m_appfinger;
		ticpp::Element * m_qdufinger;
		string m_namespace;
		string m_filename;
	public:
		Q2XMLFile(const string&, const string&);
		~Q2XMLFile();
		void save();
		void reset();
		Channel * getChannel(string prod, string cons) const;
		void printAllChValues() const;
		void insertChannel(Channel * ch);
};

#endif /* Q2XMLFILE_H_ */

