//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AWELiveLocalDNSManager : NSObject
{
    NSObject<OS_dispatch_queue> *_resolvingQueue;
    NSMutableDictionary *_hostMappingDict;
    NSMutableDictionary *_resolvingDict;
}

+ (id)getIpArrayFromHost:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *resolvingDict; // @synthesize resolvingDict=_resolvingDict;
@property(retain, nonatomic) NSMutableDictionary *hostMappingDict; // @synthesize hostMappingDict=_hostMappingDict;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)handleReachabilityChangedNoti:(id)arg1;
- (void)_resetHostMapping;
- (id)_getHostOfUrl:(id)arg1;
- (void)_startResolvingDNSForHost:(id)arg1;
- (void)_resolveHost:(id)arg1;
- (long long)dnsTimeForUrl:(id)arg1;
- (id)convertHostUrlToIpUrl:(id)arg1;
- (void)resolveHostOfUrl:(id)arg1;
- (void)dealloc;
- (id)init;

@end

