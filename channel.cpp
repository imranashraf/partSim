/*
 * Channel.cpp
 *
 */

#include <fstream>
#include <string>
#include "exception.h"
#include "ticpp.h"
#include "channel.h"

using namespace std;

Channel::Channel(string p, string c, unsigned long unma, unsigned long bytes, unsigned long vals)
{
	producer = p;
	consumer = c;
	UnMA = unma;
	Bytes = bytes;
	Values = vals;
}

void Channel::setChannel(string p, string c, unsigned long unma, unsigned long bytes, unsigned long vals)
{
	setProducer(p);
	setConsumer(c);
	setUnMA(unma);
	setBytes(bytes);
	setValues(vals);
}

void Channel::printChannel()
{
	if(this != NULL)
	{
		cout<<getProducer()<<endl;
		cout<<getConsumer()<<endl;
		cout<<getUnMA()<<endl;
		cout<<getBytes()<<endl;
		cout<<getValues()<<endl;
	}
	else
	{
		cout<<"Cannot Print Channel (NULL) ..."<<endl;
	}
}
