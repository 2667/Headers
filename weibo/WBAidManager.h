//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WBHttpRequestDelegate-Protocol.h"

@class NSString, WeiboSDK3rdApp;

@interface WBAidManager : NSObject <WBHttpRequestDelegate>
{
    int aidStatus;
    _Bool requestWithOldAid;
    WeiboSDK3rdApp *_app;
}

+ (id)sharedInstance;
@property(retain, nonatomic) WeiboSDK3rdApp *app; // @synthesize app=_app;
- (void).cxx_destruct;
- (void)request:(id)arg1 didFinishLoadingWithResult:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)retryFetchAidSinceErrorHappened;
- (void)fetchAidIfNeededWithApp:(id)arg1;
- (void)fetchAid:(_Bool)arg1;
- (id)generateMFPString;
- (id)advertisementIdentifier;
- (id)init;
@property(nonatomic) __weak NSString *aid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

