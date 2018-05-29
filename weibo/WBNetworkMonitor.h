//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WBNetworkMonitor : NSObject
{
    unsigned long long _networkStatus;
}

+ (id)sharedMonitor;
@property(nonatomic) unsigned long long networkStatus; // @synthesize networkStatus=_networkStatus;
- (void)cancelMonitor;
- (void)dnsLookupWithHost:(id)arg1;
- (void)p_reachabilityChanged:(id)arg1;
- (void)p_cancelMonitor;
- (void)p_loadingNetworkStatus;
- (void)p_startMonitor;
- (void)dealloc;
- (id)init;

@end

