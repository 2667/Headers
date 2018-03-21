//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBIMEmoticonServiceDelegate-Protocol.h"

@class NSString, UIWebView;

@interface AMPEmoticonManageData : NSObject <TBIMEmoticonServiceDelegate>
{
    NSString *_cid;
    UIWebView *_h5WebView;
}

+ (void)destroyData;
+ (id)getData;
@property(nonatomic) __weak UIWebView *h5WebView; // @synthesize h5WebView=_h5WebView;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (void).cxx_destruct;
- (void)emoticonPackInstallStatusChange:(id)arg1 status:(long long)arg2;
- (void)fireStatusEvent:(id)arg1 status:(int)arg2 process:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
