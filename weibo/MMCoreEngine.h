//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MICoreEngine-Protocol.h"
#import "MICoreEngineInternal-Protocol.h"
#import "MMNetworkDelegate-Protocol.h"
#import "MMNodeManagerDelegate-Protocol.h"

@class MMAccountAuth, MMBuddyEngine, MMCoreProvider, MMDatabaseProvider, MMEventProcessor, MMGroupEngine, MMGroupNoticeEngine, MMMessageEngine, MMNetworkManager, MMNodeManager, MMUserSettings, NSArray, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MMCoreEngine : NSObject <MICoreEngineInternal, MMNodeManagerDelegate, MMNetworkDelegate, MICoreEngine>
{
    MMCoreProvider *_coreProvider;
    MMDatabaseProvider *_databaseProvider;
    MMNetworkManager *_networkManager;
    MMNodeManager *_nodeManager;
    MMEventProcessor *_eventProcessor;
    MMMessageEngine *_messageEngine;
    MMBuddyEngine *_buddyEngine;
    MMGroupEngine *_groupEngine;
    MMGroupNoticeEngine *_groupNoticeEngine;
    _Bool _firstEvent;
    int _networkStatus;
    NSString *_version;
    MMAccountAuth *_accountAuth;
    MMUserSettings *_userSettings;
    NSArray *_engines;
    NSRecursiveLock *_lock;
    long long _fetchNodesTimeStamp;
    NSMutableDictionary *_log;
}

+ (id)instance;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *log; // @synthesize log=_log;
@property(nonatomic) long long fetchNodesTimeStamp; // @synthesize fetchNodesTimeStamp=_fetchNodesTimeStamp;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSArray *engines; // @synthesize engines=_engines;
@property int networkStatus; // @synthesize networkStatus=_networkStatus;
@property(retain) MMUserSettings *userSettings; // @synthesize userSettings=_userSettings;
@property(retain) MMAccountAuth *accountAuth; // @synthesize accountAuth=_accountAuth;
@property(copy) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)handleSystemError:(int)arg1;
- (id)systemConfig;
- (void)handleErrorlog:(id)arg1;
- (void)pushRetryConnecting;
- (void)pushDidConnect;
- (void)pushDidReceiveError:(int)arg1 error:(id)arg2;
- (void)eventsDidArrive:(id)arg1;
- (long long)currentLanguageCode;
- (long long)nextMessageId;
- (id)mySelf;
- (long long)selfUid;
- (id)workerQueue;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)checkFetchNodes;
- (void)syncMessage;
- (void)stopPush;
- (void)restartPushWithoutCheck;
- (void)restartPush;
- (void)setPushHelper:(id)arg1;
- (void)initializeDatabase:(id)arg1;
- (void)setupCoreProviderRelatedObjects;
- (void)setupCoreProvider;
- (void)initializeCoreEngine;
- (void)setServerNodes;
- (void)setPushNodes;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

