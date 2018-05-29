//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXApiDelegate-Protocol.h"

@class NSString;
@protocol WBWechatLoginDelegate;

@interface WBWechatLoginManager : NSObject <WXApiDelegate>
{
    NSObject<WBWechatLoginDelegate> *_delegate;
}

+ (id)sharedManager;
@property(nonatomic) __weak NSObject<WBWechatLoginDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onResp:(id)arg1;
- (_Bool)handleURL:(id)arg1;
- (void)startWechatLoginWithDelegate:(id)arg1;
- (_Bool)wechatLoginEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

