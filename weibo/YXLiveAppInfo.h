//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface YXLiveAppInfo : NSObject
{
    NSString *_httpConfig_appID;
    NSString *_httpConfig_sdkID;
    NSString *_httpConfig_appFrom;
    NSString *_deviceToken;
    NSString *_accessToken;
    NSString *_refreshToken;
}

+ (id)sharedInfo;
@property(retain, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(retain, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
@property(retain, nonatomic) NSString *httpConfig_appFrom; // @synthesize httpConfig_appFrom=_httpConfig_appFrom;
@property(retain, nonatomic) NSString *httpConfig_sdkID; // @synthesize httpConfig_sdkID=_httpConfig_sdkID;
@property(retain, nonatomic) NSString *httpConfig_appID; // @synthesize httpConfig_appID=_httpConfig_appID;
- (void).cxx_destruct;
- (void)saveAccessToken:(id)arg1 refreshToken:(id)arg2;
- (void)getUserDefault;
- (id)init;

@end

