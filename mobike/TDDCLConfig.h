//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TDDCLConfig : NSObject
{
    _Bool _isAction;
    _Bool _isFinger;
    _Bool _isDeviceP;
    _Bool _isAppP;
    _Bool _isSdkP;
    _Bool _isNetworksP;
    _Bool _isLocationsP;
    _Bool _isAppContext;
    _Bool _logEnable;
    _Bool _isCodeless;
    _Bool _isiBeacon;
    _Bool _isPush;
    _Bool _isAppAnalytics;
    _Bool _isAdTracking;
    _Bool _isGameAnalytics;
    _Bool _isDataSend;
    _Bool _isDataStore;
}

+ (id)sharedDCLConfig;
@property(nonatomic) _Bool isDataStore; // @synthesize isDataStore=_isDataStore;
@property(nonatomic) _Bool isDataSend; // @synthesize isDataSend=_isDataSend;
@property(nonatomic) _Bool isGameAnalytics; // @synthesize isGameAnalytics=_isGameAnalytics;
@property(nonatomic) _Bool isAdTracking; // @synthesize isAdTracking=_isAdTracking;
@property(nonatomic) _Bool isAppAnalytics; // @synthesize isAppAnalytics=_isAppAnalytics;
@property(nonatomic) _Bool isPush; // @synthesize isPush=_isPush;
@property(nonatomic) _Bool isiBeacon; // @synthesize isiBeacon=_isiBeacon;
@property(nonatomic) _Bool isCodeless; // @synthesize isCodeless=_isCodeless;
@property(nonatomic) _Bool logEnable; // @synthesize logEnable=_logEnable;
@property(nonatomic) _Bool isAppContext; // @synthesize isAppContext=_isAppContext;
@property(nonatomic) _Bool isLocationsP; // @synthesize isLocationsP=_isLocationsP;
@property(nonatomic) _Bool isNetworksP; // @synthesize isNetworksP=_isNetworksP;
@property(nonatomic) _Bool isSdkP; // @synthesize isSdkP=_isSdkP;
@property(nonatomic) _Bool isAppP; // @synthesize isAppP=_isAppP;
@property(nonatomic) _Bool isDeviceP; // @synthesize isDeviceP=_isDeviceP;
@property(nonatomic) _Bool isFinger; // @synthesize isFinger=_isFinger;
@property(nonatomic) _Bool isAction; // @synthesize isAction=_isAction;
- (id)init;

@end

