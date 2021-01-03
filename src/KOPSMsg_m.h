//
// Generated file, do not edit! Created by nedtool 5.4 from KOPSMsg.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __KOPSMSG_M_H
#define __KOPSMSG_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0504
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>KOPSMsg.msg:16</tt> by nedtool.
 * <pre>
 * packet KDataMsg
 * {
 *     // common fields
 *     string sourceAddress;
 *     string destinationAddress;
 *     string dataName;
 *     string dummyPayloadContent;
 *     int msgType;
 *     simtime_t validUntilTime = 0;
 *     int msgUniqueID;
 *     simtime_t initialInjectionTime;
 * 
 *     int realPayloadSize;
 *     int realPacketSize;
 * 
 *     int hopsTravelled = 0;
 * 
 *     // destination oriented delivery specific fields
 *     //    string originatorNodeName;
 *     //    string finalDestinationNodeName;
 *     string initialOriginatorAddress;
 *     string finalDestinationAddress;
 *     bool destinationOriented = false;
 * 
 *     // keetchi specific fields
 *     int goodnessValue = 50;
 * 
 *     // epidemic routing specific fields
 *     string messageID;
 *     int hopCount = 255;
 * 
 *     // spray & wait specific fields
 *     int duplicates;
 * 
 *     //Get probability
 * 
 * }
 * 
 * //
 * // Format of a Feedback packet.
 * //
 * // \@author : Asanga Udugama (adu\@comnets.uni-bremen.de)
 * // \@date   : 06-oct-2015
 * //
 * //
 * // example sizes in bytes
 * //
 * //               addrs | data name | goodness value | total  |
 * //               s & d | or msg ID |  (1 byte int)  | (bytes)|
 * // Keetchi  ->   6 + 6     64             1             77
 * //
 * </pre>
 */
class KDataMsg : public ::omnetpp::cPacket
{
  protected:
    ::omnetpp::opp_string sourceAddress;
    ::omnetpp::opp_string destinationAddress;
    ::omnetpp::opp_string dataName;
    ::omnetpp::opp_string dummyPayloadContent;
    int msgType;
    ::omnetpp::simtime_t validUntilTime;
    int msgUniqueID;
    ::omnetpp::simtime_t initialInjectionTime;
    int realPayloadSize;
    int realPacketSize;
    int hopsTravelled;
    ::omnetpp::opp_string initialOriginatorAddress;
    ::omnetpp::opp_string finalDestinationAddress;
    bool destinationOriented;
    int goodnessValue;
    ::omnetpp::opp_string messageID;
    int hopCount;
    int duplicates;

  private:
    void copy(const KDataMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const KDataMsg&);

  public:
    KDataMsg(const char *name=nullptr, short kind=0);
    KDataMsg(const KDataMsg& other);
    virtual ~KDataMsg();
    KDataMsg& operator=(const KDataMsg& other);
    virtual KDataMsg *dup() const override {return new KDataMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const char * getSourceAddress() const;
    virtual void setSourceAddress(const char * sourceAddress);
    virtual const char * getDestinationAddress() const;
    virtual void setDestinationAddress(const char * destinationAddress);
    virtual const char * getDataName() const;
    virtual void setDataName(const char * dataName);
    virtual const char * getDummyPayloadContent() const;
    virtual void setDummyPayloadContent(const char * dummyPayloadContent);
    virtual int getMsgType() const;
    virtual void setMsgType(int msgType);
    virtual ::omnetpp::simtime_t getValidUntilTime() const;
    virtual void setValidUntilTime(::omnetpp::simtime_t validUntilTime);
    virtual int getMsgUniqueID() const;
    virtual void setMsgUniqueID(int msgUniqueID);
    virtual ::omnetpp::simtime_t getInitialInjectionTime() const;
    virtual void setInitialInjectionTime(::omnetpp::simtime_t initialInjectionTime);
    virtual int getRealPayloadSize() const;
    virtual void setRealPayloadSize(int realPayloadSize);
    virtual int getRealPacketSize() const;
    virtual void setRealPacketSize(int realPacketSize);
    virtual int getHopsTravelled() const;
    virtual void setHopsTravelled(int hopsTravelled);
    virtual const char * getInitialOriginatorAddress() const;
    virtual void setInitialOriginatorAddress(const char * initialOriginatorAddress);
    virtual const char * getFinalDestinationAddress() const;
    virtual void setFinalDestinationAddress(const char * finalDestinationAddress);
    virtual bool getDestinationOriented() const;
    virtual void setDestinationOriented(bool destinationOriented);
    virtual int getGoodnessValue() const;
    virtual void setGoodnessValue(int goodnessValue);
    virtual const char * getMessageID() const;
    virtual void setMessageID(const char * messageID);
    virtual int getHopCount() const;
    virtual void setHopCount(int hopCount);
    virtual int getDuplicates() const;
    virtual void setDuplicates(int duplicates);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const KDataMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, KDataMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>KOPSMsg.msg:68</tt> by nedtool.
 * <pre>
 * packet KFeedbackMsg
 * {
 *     // common fields
 *     string sourceAddress;
 *     string destinationAddress;
 *     string dataName;
 * 
 *     int realPacketSize;
 * 
 *     // keetchi specific fields
 *     int goodnessValue;
 *     int feedbackType;
 * }
 * 
 * //
 * // Summary vector exchange message (used with Epidemic Routing).
 * //
 * // \@author : Asanga Udugama (adu\@comnets.uni-bremen.de)
 * // \@date   : 02-may-2017
 * //
 * //
 * // example sizes in bytes
 * //
 * //                addrs | msg ID hashes  | total  |
 * //                s & d | 2 bytes x count| (bytes)|
 * // Epidemic  ->   6 + 6     2 x 10           32
 * </pre>
 */
class KFeedbackMsg : public ::omnetpp::cPacket
{
  protected:
    ::omnetpp::opp_string sourceAddress;
    ::omnetpp::opp_string destinationAddress;
    ::omnetpp::opp_string dataName;
    int realPacketSize;
    int goodnessValue;
    int feedbackType;

  private:
    void copy(const KFeedbackMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const KFeedbackMsg&);

  public:
    KFeedbackMsg(const char *name=nullptr, short kind=0);
    KFeedbackMsg(const KFeedbackMsg& other);
    virtual ~KFeedbackMsg();
    KFeedbackMsg& operator=(const KFeedbackMsg& other);
    virtual KFeedbackMsg *dup() const override {return new KFeedbackMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const char * getSourceAddress() const;
    virtual void setSourceAddress(const char * sourceAddress);
    virtual const char * getDestinationAddress() const;
    virtual void setDestinationAddress(const char * destinationAddress);
    virtual const char * getDataName() const;
    virtual void setDataName(const char * dataName);
    virtual int getRealPacketSize() const;
    virtual void setRealPacketSize(int realPacketSize);
    virtual int getGoodnessValue() const;
    virtual void setGoodnessValue(int goodnessValue);
    virtual int getFeedbackType() const;
    virtual void setFeedbackType(int feedbackType);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const KFeedbackMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, KFeedbackMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>KOPSMsg.msg:95</tt> by nedtool.
 * <pre>
 * packet KSummaryVectorMsg
 * {
 *     // common fields
 *     string sourceAddress;
 *     string destinationAddress;
 * 
 *     int realPacketSize;
 * 
 *     // epidemic routing specific fields
 *     string messageIDHashVector[];  // summary vector
 * }
 * 
 * //
 * // Data request message (used with Epidemic Routing).
 * //
 * // \@author : Asanga Udugama (adu\@comnets.uni-bremen.de)
 * // \@date   : 02-may-2017
 * //
 * //
 * // example sizes in bytes
 * //
 * //                addrs | msg ID hashes  | total  |
 * //                s & d | 2 bytes x count| (bytes)|
 * // Epidemic  ->   6 + 6     2 x 5            32
 * </pre>
 */
class KSummaryVectorMsg : public ::omnetpp::cPacket
{
  protected:
    ::omnetpp::opp_string sourceAddress;
    ::omnetpp::opp_string destinationAddress;
    int realPacketSize;
    ::omnetpp::opp_string *messageIDHashVector; // array ptr
    unsigned int messageIDHashVector_arraysize;

  private:
    void copy(const KSummaryVectorMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const KSummaryVectorMsg&);

  public:
    KSummaryVectorMsg(const char *name=nullptr, short kind=0);
    KSummaryVectorMsg(const KSummaryVectorMsg& other);
    virtual ~KSummaryVectorMsg();
    KSummaryVectorMsg& operator=(const KSummaryVectorMsg& other);
    virtual KSummaryVectorMsg *dup() const override {return new KSummaryVectorMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const char * getSourceAddress() const;
    virtual void setSourceAddress(const char * sourceAddress);
    virtual const char * getDestinationAddress() const;
    virtual void setDestinationAddress(const char * destinationAddress);
    virtual int getRealPacketSize() const;
    virtual void setRealPacketSize(int realPacketSize);
    virtual void setMessageIDHashVectorArraySize(unsigned int size);
    virtual unsigned int getMessageIDHashVectorArraySize() const;
    virtual const char * getMessageIDHashVector(unsigned int k) const;
    virtual void setMessageIDHashVector(unsigned int k, const char * messageIDHashVector);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const KSummaryVectorMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, KSummaryVectorMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>KOPSMsg.msg:120</tt> by nedtool.
 * <pre>
 * packet KDataRequestMsg
 * {
 *     // common fields
 *     string sourceAddress;
 *     string destinationAddress;
 * 
 *     int realPacketSize;
 * 
 *     // epidemic routing specific fields
 *     string messageIDHashVector[];  // request vector
 * 
 *     //spay & wait specific
 *     //string originatorNodeName;
 *     string initialOriginatorAddress;
 * }
 * 
 * //
 * // Event Reaction Message (used with UBM and reactive mobility).
 * //
 * // \@author : Anas bin Muslim (anas1\@uni-bremen.de)
 * // \@date   : 19-sep-2017
 * //
 * //
 * // example sizes in bytes
 * //
 * //               addrs | data name | reaction type  | total  |
 * //               s & d | or msg ID |  (1 byte int)  | (bytes)|
 * // Keetchi  ->   6 + 6     64             1             77
 * </pre>
 */
class KDataRequestMsg : public ::omnetpp::cPacket
{
  protected:
    ::omnetpp::opp_string sourceAddress;
    ::omnetpp::opp_string destinationAddress;
    int realPacketSize;
    ::omnetpp::opp_string *messageIDHashVector; // array ptr
    unsigned int messageIDHashVector_arraysize;
    ::omnetpp::opp_string initialOriginatorAddress;

  private:
    void copy(const KDataRequestMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const KDataRequestMsg&);

  public:
    KDataRequestMsg(const char *name=nullptr, short kind=0);
    KDataRequestMsg(const KDataRequestMsg& other);
    virtual ~KDataRequestMsg();
    KDataRequestMsg& operator=(const KDataRequestMsg& other);
    virtual KDataRequestMsg *dup() const override {return new KDataRequestMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const char * getSourceAddress() const;
    virtual void setSourceAddress(const char * sourceAddress);
    virtual const char * getDestinationAddress() const;
    virtual void setDestinationAddress(const char * destinationAddress);
    virtual int getRealPacketSize() const;
    virtual void setRealPacketSize(int realPacketSize);
    virtual void setMessageIDHashVectorArraySize(unsigned int size);
    virtual unsigned int getMessageIDHashVectorArraySize() const;
    virtual const char * getMessageIDHashVector(unsigned int k) const;
    virtual void setMessageIDHashVector(unsigned int k, const char * messageIDHashVector);
    virtual const char * getInitialOriginatorAddress() const;
    virtual void setInitialOriginatorAddress(const char * initialOriginatorAddress);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const KDataRequestMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, KDataRequestMsg& obj) {obj.parsimUnpack(b);}

/**
 * Enum generated from <tt>KOPSMsg.msg:149</tt> by nedtool.
 * <pre>
 * enum reactionType
 * {
 *     ignore = 1;
 *     comment = 2;
 *     save = 3;
 * }
 * </pre>
 */
enum reactionType {
    ignore = 1,
    comment = 2,
    save = 3
};

/**
 * Class generated from <tt>KOPSMsg.msg:155</tt> by nedtool.
 * <pre>
 * packet KReactionMsg
 * {
 *     // common fields
 *     string sourceAddress;
 *     string destinationAddress;
 *     string dataName;
 * 
 *     // UBM specific fields
 *     int reaction \@enum(reactionType);
 * }
 * 
 * //
 * // DP table request message (used with Prophet Routing).
 * //
 * //
 * //
 * //
 * //
 * // example sizes in bytes
 * //
 * //                addrs |  total  |
 * //                s & d | (bytes) |
 * // Prophet  ->    6 + 6      12
 * </pre>
 */
class KReactionMsg : public ::omnetpp::cPacket
{
  protected:
    ::omnetpp::opp_string sourceAddress;
    ::omnetpp::opp_string destinationAddress;
    ::omnetpp::opp_string dataName;
    int reaction;

  private:
    void copy(const KReactionMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const KReactionMsg&);

  public:
    KReactionMsg(const char *name=nullptr, short kind=0);
    KReactionMsg(const KReactionMsg& other);
    virtual ~KReactionMsg();
    KReactionMsg& operator=(const KReactionMsg& other);
    virtual KReactionMsg *dup() const override {return new KReactionMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const char * getSourceAddress() const;
    virtual void setSourceAddress(const char * sourceAddress);
    virtual const char * getDestinationAddress() const;
    virtual void setDestinationAddress(const char * destinationAddress);
    virtual const char * getDataName() const;
    virtual void setDataName(const char * dataName);
    virtual int getReaction() const;
    virtual void setReaction(int reaction);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const KReactionMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, KReactionMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>KOPSMsg.msg:180</tt> by nedtool.
 * <pre>
 * packet KDPtableRequestMsg
 * {
 *     // common fields
 *     string sourceAddress;
 *     string destinationAddress;
 * 
 *     int realPacketSize;
 * }
 * </pre>
 */
class KDPtableRequestMsg : public ::omnetpp::cPacket
{
  protected:
    ::omnetpp::opp_string sourceAddress;
    ::omnetpp::opp_string destinationAddress;
    int realPacketSize;

  private:
    void copy(const KDPtableRequestMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const KDPtableRequestMsg&);

  public:
    KDPtableRequestMsg(const char *name=nullptr, short kind=0);
    KDPtableRequestMsg(const KDPtableRequestMsg& other);
    virtual ~KDPtableRequestMsg();
    KDPtableRequestMsg& operator=(const KDPtableRequestMsg& other);
    virtual KDPtableRequestMsg *dup() const override {return new KDPtableRequestMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const char * getSourceAddress() const;
    virtual void setSourceAddress(const char * sourceAddress);
    virtual const char * getDestinationAddress() const;
    virtual void setDestinationAddress(const char * destinationAddress);
    virtual int getRealPacketSize() const;
    virtual void setRealPacketSize(int realPacketSize);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const KDPtableRequestMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, KDPtableRequestMsg& obj) {obj.parsimUnpack(b);}

/**
 * Struct generated from KOPSMsg.msg:201 by nedtool.
 */
struct MsgDelivPredictability
{
    MsgDelivPredictability();
    ::omnetpp::opp_string nodeMACAddress;
    double nodeDP;
};

// helpers for local use
void __doPacking(omnetpp::cCommBuffer *b, const MsgDelivPredictability& a);
void __doUnpacking(omnetpp::cCommBuffer *b, MsgDelivPredictability& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const MsgDelivPredictability& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, MsgDelivPredictability& obj) { __doUnpacking(b, obj); }

/**
 * Class generated from <tt>KOPSMsg.msg:206</tt> by nedtool.
 * <pre>
 * packet KDPtableDataMsg
 * {
 *     // common fields
 *     string sourceAddress;
 *     string destinationAddress;
 * 
 *     MsgDelivPredictability dpList[];
 * 
 *     int realPacketSize;
 * }
 * </pre>
 */
class KDPtableDataMsg : public ::omnetpp::cPacket
{
  protected:
    ::omnetpp::opp_string sourceAddress;
    ::omnetpp::opp_string destinationAddress;
    MsgDelivPredictability *dpList; // array ptr
    unsigned int dpList_arraysize;
    int realPacketSize;

  private:
    void copy(const KDPtableDataMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const KDPtableDataMsg&);

  public:
    KDPtableDataMsg(const char *name=nullptr, short kind=0);
    KDPtableDataMsg(const KDPtableDataMsg& other);
    virtual ~KDPtableDataMsg();
    KDPtableDataMsg& operator=(const KDPtableDataMsg& other);
    virtual KDPtableDataMsg *dup() const override {return new KDPtableDataMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const char * getSourceAddress() const;
    virtual void setSourceAddress(const char * sourceAddress);
    virtual const char * getDestinationAddress() const;
    virtual void setDestinationAddress(const char * destinationAddress);
    virtual void setDpListArraySize(unsigned int size);
    virtual unsigned int getDpListArraySize() const;
    virtual MsgDelivPredictability& getDpList(unsigned int k);
    virtual const MsgDelivPredictability& getDpList(unsigned int k) const {return const_cast<KDPtableDataMsg*>(this)->getDpList(k);}
    virtual void setDpList(unsigned int k, const MsgDelivPredictability& dpList);
    virtual int getRealPacketSize() const;
    virtual void setRealPacketSize(int realPacketSize);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const KDPtableDataMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, KDPtableDataMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>KOPSMsg.msg:219</tt> by nedtool.
 * <pre>
 * // message used to send statistic information between models
 * packet KStatisticsMsg
 * {
 *     // liked or non-liked data receivable info (based on bool)
 *     bool likedData;
 *     int dataCountReceivable;
 *     int dataBytesReceivable;
 * 
 * }
 * </pre>
 */
class KStatisticsMsg : public ::omnetpp::cPacket
{
  protected:
    bool likedData;
    int dataCountReceivable;
    int dataBytesReceivable;

  private:
    void copy(const KStatisticsMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const KStatisticsMsg&);

  public:
    KStatisticsMsg(const char *name=nullptr, short kind=0);
    KStatisticsMsg(const KStatisticsMsg& other);
    virtual ~KStatisticsMsg();
    KStatisticsMsg& operator=(const KStatisticsMsg& other);
    virtual KStatisticsMsg *dup() const override {return new KStatisticsMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual bool getLikedData() const;
    virtual void setLikedData(bool likedData);
    virtual int getDataCountReceivable() const;
    virtual void setDataCountReceivable(int dataCountReceivable);
    virtual int getDataBytesReceivable() const;
    virtual void setDataBytesReceivable(int dataBytesReceivable);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const KStatisticsMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, KStatisticsMsg& obj) {obj.parsimUnpack(b);}


#endif // ifndef __KOPSMSG_M_H

