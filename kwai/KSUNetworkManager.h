//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol KSUIDCSelectorProtocol;

@interface KSUNetworkManager : NSObject
{
    NSString *_currentApiHost;
    NSString *_currentUploadHost;
    NSString *_currentUlogHost;
    NSString *_currentHttpsHost;
    NSString *_currentPayHost;
    NSString *_currentPayCheckHost;
    NSString *_currentLiveHost;
    NSString *_currentIMHost;
    NSString *_currentPushHost;
    NSString *_currentSf2018Host;
    NSString *_currentSf2018PayHost;
    NSString *_currentWebHost;
    NSString *_currentWebAppHost;
    double _timeout;
    NSDictionary *_usingNetworkConfig;
    id <KSUIDCSelectorProtocol> _idcSelector;
    NSDictionary *_networkConfig;
}

+ (id)sharedNetworkManager;
@property(retain, nonatomic) NSDictionary *networkConfig; // @synthesize networkConfig=_networkConfig;
@property(retain, nonatomic) id <KSUIDCSelectorProtocol> idcSelector; // @synthesize idcSelector=_idcSelector;
@property(retain, nonatomic) NSDictionary *usingNetworkConfig; // @synthesize usingNetworkConfig=_usingNetworkConfig;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *currentWebAppHost; // @synthesize currentWebAppHost=_currentWebAppHost;
@property(retain, nonatomic) NSString *currentWebHost; // @synthesize currentWebHost=_currentWebHost;
@property(retain, nonatomic) NSString *currentSf2018PayHost; // @synthesize currentSf2018PayHost=_currentSf2018PayHost;
@property(retain, nonatomic) NSString *currentSf2018Host; // @synthesize currentSf2018Host=_currentSf2018Host;
@property(retain, nonatomic) NSString *currentPushHost; // @synthesize currentPushHost=_currentPushHost;
@property(retain, nonatomic) NSString *currentIMHost; // @synthesize currentIMHost=_currentIMHost;
@property(retain, nonatomic) NSString *currentLiveHost; // @synthesize currentLiveHost=_currentLiveHost;
@property(retain, nonatomic) NSString *currentPayCheckHost; // @synthesize currentPayCheckHost=_currentPayCheckHost;
@property(retain, nonatomic) NSString *currentPayHost; // @synthesize currentPayHost=_currentPayHost;
@property(retain, nonatomic) NSString *currentHttpsHost; // @synthesize currentHttpsHost=_currentHttpsHost;
@property(retain, nonatomic) NSString *currentUlogHost; // @synthesize currentUlogHost=_currentUlogHost;
@property(retain, nonatomic) NSString *currentUploadHost; // @synthesize currentUploadHost=_currentUploadHost;
@property(retain, nonatomic) NSString *currentApiHost; // @synthesize currentApiHost=_currentApiHost;
- (void).cxx_destruct;
- (id)hostForType:(id)arg1;
- (_Bool)updateHost:(id)arg1 forType:(id)arg2;
- (id)webInjectCookieHosts;
- (id)hostWithType:(id)arg1 failedURL:(id)arg2;
- (id)hostPropertyNameForType:(id)arg1;
- (id)init;
- (id)URLWithHost:(id)arg1 path:(id)arg2 query:(id)arg3;
- (id)webAppURLWithPath:(id)arg1 query:(id)arg2;
- (id)webAppURLWithPath:(id)arg1;
- (id)webURLWithPath:(id)arg1 query:(id)arg2;
- (id)webURLWithPath:(id)arg1;

@end
