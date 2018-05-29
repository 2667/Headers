//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LineSDKAccessToken, NSData, NSDictionary, NSString;

@protocol LineSDKRequestProtocol <NSObject>
@property(readonly, nonatomic) NSString *contentType;
@property(readonly, nonatomic) NSString *path;
@property(readonly, nonatomic) unsigned long long method;
- (void)setAccessToken:(LineSDKAccessToken *)arg1;
- (LineSDKAccessToken *)accessToken;
- (NSDictionary *)queryParameters;
- (NSData *)bodyData;
@end

