//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString, WBGCDAsyncProxySocket;
@protocol MMPostConnectionDelegate;

@interface MMPostConnection : NSObject
{
    WBGCDAsyncProxySocket *_socket;
    unsigned long long trafficRecordBuffSize;
    unsigned short _port;
    int _type;
    int _timeout;
    id <MMPostConnectionDelegate> _delegate;
    long long _connectionId;
    NSString *_host;
    NSData *_packet;
    NSData *_response;
    long long _connectedStamp;
    long long _sendStartStamp;
}

+ (_Bool)criticalError:(id)arg1;
@property(nonatomic) long long sendStartStamp; // @synthesize sendStartStamp=_sendStartStamp;
@property(nonatomic) long long connectedStamp; // @synthesize connectedStamp=_connectedStamp;
@property(retain, nonatomic) NSData *response; // @synthesize response=_response;
@property(nonatomic) int timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSData *packet; // @synthesize packet=_packet;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(nonatomic) long long connectionId; // @synthesize connectionId=_connectionId;
@property(nonatomic) __weak id <MMPostConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)obtainLogParameter;
- (void)addDataRecord:(id)arg1;
- (_Bool)shouldRecordTraffic;
- (void)socketDidSecure:(id)arg1;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)postRequest:(id)arg1 timeout:(int)arg2;
- (void)writePacket;
- (void)writePacket:(id)arg1 readTimeout:(int)arg2;
- (_Bool)isConnected;
- (void)disconnect;
- (void)connect;
- (void)reportFailed:(id)arg1;
- (void)reportFinished;
- (void)reportDidConnect;
- (id)error:(id)arg1;
- (id)init;
- (void)dealloc;

@end

