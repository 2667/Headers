//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSError, NSString;

@protocol KLDelegate <NSObject>
- (void)didServiceTokenExpired;
- (void)didKickedByServer:(NSError *)arg1;
- (_Bool)isBackground;
- (NSString *)deviceToken;
- (NSArray *)ports;
- (NSString *)backupDomain;
- (NSArray *)backupIps;
- (NSData *)sSecurity;
- (NSString *)serviceToken;
- (long long)userId;
- (NSString *)channelName;
- (NSString *)appVersion;
- (NSString *)appName;
- (long long)appId;
- (NSString *)locale;
@end

