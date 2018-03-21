//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ACDSConfigRequest, NSString;

@interface ACDSConfigManager : NSObject
{
    _Bool _executing;
    long long _lastRequestTime;
    NSString *_triggerUserId;
    ACDSConfigRequest *_request;
}

+ (id)networkTimestampKey;
+ (void)removeTimestampInLDB;
+ (void)recordTimestampInLDB;
+ (void)readTimestampInLDB;
+ (_Bool)openLDB;
+ (void)eventChainForConfigProcess:(id)arg1 then:(CDUnknownBlockType)arg2;
+ (void)endConfigProcess:(id)arg1 then:(CDUnknownBlockType)arg2;
+ (void)configProcessParamEtag:(id)arg1 then:(CDUnknownBlockType)arg2;
+ (void)sendConfigCommand:(id)arg1 then:(CDUnknownBlockType)arg2;
+ (void)parse304Config:(id)arg1;
+ (void)parse200Config:(id)arg1;
+ (void)executeConfigProcess:(id)arg1 then:(CDUnknownBlockType)arg2;
+ (void)preExecuteConfigProcess:(id)arg1 then:(CDUnknownBlockType)arg2;
+ (void)preCheckerForConfigProcess:(id)arg1 then:(CDUnknownBlockType)arg2;
+ (void)configProcess:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (_Bool)canBeForbidden:(id)arg1;
+ (void)resetLastRequestTime;
+ (void)recordLastRequestTime;
+ (_Bool)isCan;
+ (long long)timeForFrequence;
+ (id)configKeyInLocalMemory;
+ (void)initLocalConfig:(CDUnknownBlockType)arg1;
+ (id)config:(id)arg1;
+ (id)config;
+ (void)sendCommandToServer:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) ACDSConfigRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSString *triggerUserId; // @synthesize triggerUserId=_triggerUserId;
@property(nonatomic) _Bool executing; // @synthesize executing=_executing;
@property(nonatomic) long long lastRequestTime; // @synthesize lastRequestTime=_lastRequestTime;
- (void).cxx_destruct;

@end
