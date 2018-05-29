//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface AppsFlyerProxyManager : NSObject
{
    NSMutableDictionary *proxyRdDict;
    NSMutableArray *events;
    int requestSize;
    _Bool shouldCollectDebugData;
    _Bool _proxyEnabledFromServer;
}

+ (id)sharedManager;
@property(nonatomic) _Bool proxyEnabledFromServer; // @synthesize proxyEnabledFromServer=_proxyEnabledFromServer;
- (void).cxx_destruct;
- (void)sendRemoteDebuggingData;
- (void)loadStaticData;
- (void)stopRemoteDebugging;
- (void)startRemoteDebugging;
- (_Bool)isRemoteDebugging;
- (void)dropPreLaunchData;
- (void)clearData;
- (id)getJSONString;
- (void)addEventWithString:(id)arg1;
- (void)setAppDataWithAppId:(id)arg1 withAppVersion:(id)arg2;
- (void)setSDKDataWithVersion:(id)arg1 withDevKey:(id)arg2 withOriginalAFUID:(id)arg3 withAFUID:(id)arg4 withLaunchCounter:(id)arg5;
- (void)setDeviceDataWithModel:(id)arg1 withOSVersion:(id)arg2 withAdvId:(id)arg3;
- (id)init;

@end

