//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSURLConnectionDataDelegate-Protocol.h>
#import <QQMainProject/QQWifiConnectTaskDelegate-Protocol.h>

@class NSMutableArray, NSRecursiveLock, NSString, NSURLConnection;

@interface QQWifiConnectManager : NSObject <QQWifiConnectTaskDelegate, NSURLConnectionDataDelegate>
{
    NSMutableArray *_apInfoArr;
    NSMutableArray *_ssidArr;
    NSString *_blacklist;
    NSMutableArray *_taskInfoList;
    NSRecursiveLock *_taskInfoLock;
    long long _taskCount;
    struct connectInfo _connInfo;
    NSURLConnection *_conn;
    _Bool _byPhone;
}

+ (id)getInstance;
@property(nonatomic) _Bool byPhone; // @synthesize byPhone=_byPhone;
@property(retain, nonatomic) NSString *blacklist; // @synthesize blacklist=_blacklist;
@property(retain, nonatomic) NSMutableArray *ssidArr; // @synthesize ssidArr=_ssidArr;
@property(retain, nonatomic) NSMutableArray *apInfoArr; // @synthesize apInfoArr=_apInfoArr;
- (void)onTaskStopped:(long long)arg1 connectStep:(long long)arg2 errorCode:(long long)arg3;
- (void)onTaskResult:(long long)arg1 connectStep:(long long)arg2 errorCode:(long long)arg3 extraInfo:(id)arg4;
- (void)onTaskStatus:(long long)arg1 connectStep:(long long)arg2;
- (void)checkAndStartTask;
- (void)reconnect:(id)arg1 reconnectInfo:(id)arg2 callback:(id)arg3;
- (void)cancelConnectAndRemoveCallback:(id)arg1 callback:(id)arg2;
- (void)cancelConnect:(id)arg1;
- (void)cancelConnectImpl:(id)arg1 removeCallback:(_Bool)arg2 callback:(id)arg3;
- (void)connect:(id)arg1 connectInfo:(id)arg2 callback:(id)arg3 scene:(int)arg4;
- (void)connect:(id)arg1 connectInfo:(id)arg2 callback:(id)arg3;
- (void)connectByPhone:(id)arg1 connectInfo:(id)arg2 callback:(id)arg3;
- (void)parseXmlAsync:(id)arg1;
- (void)startParseXml_lbs:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

