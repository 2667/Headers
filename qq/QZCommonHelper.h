//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface QZCommonHelper : NSObject
{
    NSMutableDictionary *_cacheData;
    NSString *_mncInfo;
    NSString *_strCurWIFIBSSID;
    struct _opaque_pthread_rwlock_t _curWIFIBssidRWlock;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_wifiName;
}

+ (id)sharedInstance;
@property(retain) NSString *wifiName; // @synthesize wifiName=_wifiName;
- (void).cxx_destruct;
- (long long)getAPN;
- (long long)getISP;
- (long long)currentAPNType;
- (long long)getWifiCarrierType:(id)arg1;
- (long long)carrierStringToType:(id)arg1;
- (void)setCarrierType:(long long)arg1;
- (long long)mobileCarrierType;
- (id)currentWifiBSSID;
- (void)setWIFIBSSID:(id)arg1;
- (void)updateWIFIBSSID:(_Bool)arg1;
- (void)synGetWIFIBssid:(id *)arg1 wifiName:(id *)arg2;
- (void)setDataForKey:(id)arg1 data:(id)arg2;
- (id)dataForKey:(id)arg1;
- (void)save;
- (void)load;
- (id)getCommonHelperPath;
- (void)applicationEnterBackground;
- (void)refrshWIFIBSSID;
- (void)onNetReachabilityDidChange:(id)arg1;
- (void)applicationBecomeActive;
- (id)init;

@end
