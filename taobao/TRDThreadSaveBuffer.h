//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSLock;

@interface TRDThreadSaveBuffer : NSObject
{
    long long _curLogLevel;
    long long _curRealtimeCount;
    NSLock *_curRealtimeLock;
    long long _curLogCount;
    NSDictionary *_curModule;
    NSLock *_moduleLock;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)clearSendLock;
- (void)unlockSend;
- (_Bool)lockSend;
- (void)setLogCount:(long long)arg1;
- (long long)logCount;
- (void)addLogCount;
- (long long)getCurrentLogLevel;
- (void)setCurrentLogLevel:(long long)arg1;
- (long long)getCurrentModuleLevel:(id)arg1 andCurLevel:(long long)arg2;
- (void)setCurrentModule:(id)arg1;
- (id)init;

@end
