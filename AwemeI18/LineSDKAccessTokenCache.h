//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LineSDKAccessToken, NSString;
@protocol OS_dispatch_queue;

@interface LineSDKAccessTokenCache : NSObject
{
    LineSDKAccessToken *_accessToken;
    NSString *_channelID;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property(copy, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
- (void).cxx_destruct;
- (_Bool)removeWithError:(id *)arg1;
- (_Bool)updateWithAccessToken:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) LineSDKAccessToken *accessToken; // @synthesize accessToken=_accessToken;
- (id)readAccessTokenFromCache;
- (void)handleRemovedNotification:(id)arg1;
- (void)handleUpdatedCacheNotification:(id)arg1;
- (void)dealloc;
- (id)initWithChannelID:(id)arg1;

@end

